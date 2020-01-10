#ifndef __SOFTSPI_H
#define __SOFTSPI_H

#define uchar unsigned char
#define uint  unsigned int

class SOFTSPI
{
  public:
	void begin(uchar csnPin, uchar sckPin, uchar mosiPin, uchar misoPin);
	void writeByte(uchar dat);
	uchar readByte(void);
	unsigned char SPI_RW(unsigned char Byte);
	unsigned char SPI_RW_Reg(unsigned char reg, unsigned char value);
	unsigned char SPI_Read(unsigned char reg);
	unsigned char readToBuf(unsigned char reg, unsigned char *pBuf, unsigned char bytes);
	unsigned char writeFromBuf(unsigned char reg, unsigned char *pBuf, unsigned char bytes);
  private:
    uchar _csnPin;
	uchar _sckPin;
	uchar _mosiPin;
	uchar _misoPin;
};

#endif