#include"rfid1.h"
RFID1 rfid; //create a variable type of RFID1

void setup()
{
  Serial.begin(9600); //initialize the serial
  rfid.begin(7, 5, 4, 3, 6, 2);  
//rfid.begin(IRQ_PIN,SCK_PIN,MOSI_PIN,MISO_PIN,SDA_PIN,RST_PIN)
  delay(100);//delay 1 second
  rfid.init(); //initialize the RFID
}
void loop()
{
  uchar status;
  uchar str[MAX_LEN]; //The maximum length of the array is 16

  // Search card, return card types
  status = rfid.request(PICC_REQIDL, str);
  if (status != MI_OK)
  {
    return;
  }
  Serial.print("Card type: ");
  Serial.println(rfid.readCardType(str));

  //Prevent conflict, return the 4 bytes Serial number of the card
  status = rfid.anticoll(str);
  if (status == MI_OK)
  {
    Serial.print("The card's number is: ");
    int IDlen=4;
    for(int i=0; i<IDlen; i++){
        Serial.print(str[i],HEX);
    }
    Serial.println();
    Serial.println();
  }
  
  delay(500);
  rfid.halt(); //command the card into sleep mode 
}
