#include "SOFTSPI.h"
#include "Arduino.h"

void SOFTSPI::begin(uchar csnPin, uchar sckPin, uchar mosiPin, uchar misoPin)
{
  pinMode(csnPin, OUTPUT);
  pinMode(sckPin, OUTPUT);
  pinMode(mosiPin, OUTPUT);
  pinMode(misoPin, INPUT);
  _csnPin = csnPin;
  _sckPin = sckPin;
  _mosiPin = mosiPin;
  _misoPin = misoPin;
}
void SOFTSPI::writeByte(uchar dat)
{
  uchar i;
  for(i = 0; i < 8; i ++)
  {
    digitalWrite(_sckPin, LOW);
	if(dat & 0x80)
	{
	  digitalWrite(_mosiPin, HIGH);
	}
	else
	{
	  digitalWrite(_mosiPin, LOW);
	}
	dat <<= 1;
	digitalWrite(_sckPin, HIGH);
  }
  digitalWrite(_sckPin, LOW);
}
uchar SOFTSPI::readByte(void)
{
  uchar n,dat,bit_t;
  for(n = 0; n < 8; n ++)
  {
    digitalWrite(_sckPin, LOW);
	dat <<= 1;
	if(digitalRead(_misoPin))
	{
	  dat |= 0x01;
	}
	else
	{
	  dat &= 0xfe;
	}
	digitalWrite(_sckPin, HIGH);
  }
  digitalWrite(_sckPin, LOW);
  return dat;
}
/**************************************************
 * Function: SPI_RW();
 * 
 * Description:
 * Writes one unsigned char to nRF24L01, and return the unsigned char read
 * from nRF24L01 during write, according to SPI protocol
 **************************************************/
unsigned char SOFTSPI::SPI_RW(unsigned char Byte)
{
  unsigned char i;
  for(i=0;i<8;i++)                      // output 8-bit
  {
    if(Byte&0x80)
    {
      digitalWrite(_mosiPin, 1);
    }
    else
    {
      digitalWrite(_mosiPin, 0);
    }
    digitalWrite(_sckPin, 1);
    Byte <<= 1;                         // shift next bit into MSB..
    if(digitalRead(_misoPin) == 1)
    {
      Byte |= 1;       	                // capture current MISO bit
    }
    digitalWrite(_sckPin, 0);
  }
  return(Byte);           	        // return read unsigned char
}
/**************************************************
 * Function: SPI_RW_Reg();
 * 
 * Description:
 * Writes value 'value' to register 'reg'
/**************************************************/
unsigned char SOFTSPI::SPI_RW_Reg(unsigned char reg, unsigned char value)
{
  unsigned char status;

  digitalWrite(_csnPin, 0);                   // CSN low, init SPI transaction
  status = SPI_RW(reg);                   // select register
  SPI_RW(value);                          // ..and write value to it..
  digitalWrite(_csnPin, 1);                   // CSN high again

  return(status);                   // return nRF24L01 status unsigned char
}
/**************************************************/
/**************************************************
 * Function: SPI_Read();
 * 
 * Description:
 * Read one unsigned char from nRF24L01 register, 'reg'
/**************************************************/
unsigned char SOFTSPI::SPI_Read(unsigned char reg)
{
  unsigned char reg_val;

  digitalWrite(_csnPin, 0);           // CSN low, initialize SPI communication...
  SPI_RW(reg);                   // Select register to read from..
  reg_val = SPI_RW(0);           // ..then read register value
  digitalWrite(_csnPin, 1);          // CSN high, terminate SPI communication
  
  return(reg_val);               // return register value
}
/**************************************************/
/**************************************************
 * Function: SPI_Read_Buf();
 * 
 * Description:
 * Reads 'unsigned chars' #of unsigned chars from register 'reg'
 * Typically used to read RX payload, Rx/Tx address
/**************************************************/
unsigned char SOFTSPI::readToBuf(unsigned char reg, unsigned char *pBuf, unsigned char bytes)
{
  unsigned char status,i;

  digitalWrite(_csnPin, 0);                  // Set CSN low, init SPI tranaction
  status = SPI_RW(reg);       	    // Select register to write to and read status unsigned char

  for(i=0;i<bytes;i++)
  {
    pBuf[i] = SPI_RW(0);    // Perform SPI_RW to read unsigned char from nRF24L01
  }

  digitalWrite(_csnPin, 1);                   // Set CSN high again

  return(status);                  // return nRF24L01 status unsigned char
}
/**************************************************/
/**************************************************
 * Function: SPI_Write_Buf();
 * 
 * Description:
 * Writes contents of buffer '*pBuf' to nRF24L01
 * Typically used to write TX payload, Rx/Tx address
/**************************************************/
unsigned char SOFTSPI::writeFromBuf(unsigned char reg, unsigned char *pBuf, unsigned char bytes)
{
  unsigned char status,i;

  digitalWrite(_csnPin, 0);                  // Set CSN low, init SPI tranaction
  status = SPI_RW(reg);             // Select register to write to and read status unsigned char
  for(i=0;i<bytes; i++)             // then write all unsigned char in buffer(*pBuf)
  {
    SPI_RW(*pBuf++);
  }
  digitalWrite(_csnPin, 1);                   // Set CSN high again
  return status;                  // return nRF24L01 status unsigned char
}


