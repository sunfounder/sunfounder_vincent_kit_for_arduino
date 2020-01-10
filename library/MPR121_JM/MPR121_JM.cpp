/*
    MPR121.cpp
	April 11, 2019
	By: Sunfounder
*/

#include "MPR121_JM.h"
#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#endif


MPR121::MPR121(int irqpin,uint8_t touThresh,uint8_t relThresh)
{	
	pinMode(irqpin,INPUT);
	digitalWrite(irqpin, HIGH); //enable pullup resistor
	_irqpin=irqpin;
	_touThresh=touThresh;
	_relThresh=relThresh;
	Wire.begin();	
}

void MPR121::dumpregs(void) {
  byte rdata;
  byte rdata1c;
  byte rdata1d;
  uint16_t result;
  uint16_t raw[43];
  uint16_t filtered[13];
  uint16_t baseline[13];
  uint16_t diff[13];

  Wire.beginTransmission(0x5A);
  Wire.write(0x1E);
  Wire.endTransmission();
  Wire.requestFrom(0x5A, 0x1E);
  int i = 0;
  int j=0;
  for ( i = 0; i <= 0x1E; i++ ) {
    if (Wire.available()) {
      rdata = Wire.read();
      if ((i >= 0x04) && (i % 2 == 0 )) {
        rdata1c = rdata;
      }
      else if (i >= 0x04) {
        rdata1d = rdata;
         result = rdata1d & 0x0003;
         filtered[j] = (result << 8) | ( (uint16_t)rdata1c & 0x00FF);
           Serial.print(filtered[j],HEX);
            Serial.print(" ");
      }
    }
  }
Serial.println(" ");
}


bool MPR121::checkInterrupt(void){
  return digitalRead(_irqpin);
}

void MPR121::set_register(int address, unsigned char r, unsigned char v){
	Wire.beginTransmission(address);
    Wire.write(r);
    Wire.write(v);
    Wire.endTransmission();
}

void MPR121::mpr121_setup(void){
	

  set_register(0x5A, ELE_CFG, 0x00); 

  // Section A - Controls filtering when data is > baseline.
  set_register(0x5A, MHD_R, 0x01);
  set_register(0x5A, NHD_R, 0x01);
  set_register(0x5A, NCL_R, 0x00);
  set_register(0x5A, FDL_R, 0x00);

  // Section B - Controls filtering when data is < baseline.
  set_register(0x5A, MHD_F, 0x01);
  set_register(0x5A, NHD_F, 0x01);
  set_register(0x5A, NCL_F, 0xFF);
  set_register(0x5A, FDL_F, 0x02);

  // Section C - Sets touch and release thresholds for each electrode
  set_register(0x5A, ELE0_T, _touThresh);
  set_register(0x5A, ELE0_R, _relThresh);

  set_register(0x5A, ELE1_T, _touThresh);
  set_register(0x5A, ELE1_R, _relThresh);

  set_register(0x5A, ELE2_T, _touThresh);
  set_register(0x5A, ELE2_R, _relThresh);

  set_register(0x5A, ELE3_T, _touThresh);
  set_register(0x5A, ELE3_R, _relThresh);

  set_register(0x5A, ELE4_T, _touThresh);
  set_register(0x5A, ELE4_R, _relThresh);

  set_register(0x5A, ELE5_T, _touThresh);
  set_register(0x5A, ELE5_R, _relThresh);

  set_register(0x5A, ELE6_T, _touThresh);
  set_register(0x5A, ELE6_R, _relThresh);

  set_register(0x5A, ELE7_T, _touThresh);
  set_register(0x5A, ELE7_R, _relThresh);

  set_register(0x5A, ELE8_T, _touThresh);
  set_register(0x5A, ELE8_R, _relThresh);

  set_register(0x5A, ELE9_T, _touThresh);
  set_register(0x5A, ELE9_R, _relThresh);

  set_register(0x5A, ELE10_T, _touThresh);
  set_register(0x5A, ELE10_R, _relThresh);

  set_register(0x5A, ELE11_T, _touThresh);
  set_register(0x5A, ELE11_R, _relThresh);

  // Section D
  // Set the Filter Configuration
  // Set ESI2
  set_register(0x5A, FIL_CFG, 0x04);

  // Section E
  // Electrode Configuration
  // Set ELE_CFG to 0x00 to return to standby mode
  set_register(0x5A, ELE_CFG, 0x0C);  // Enables all 12 Electrodes


  // Section F
  // Enable Auto Config and auto Reconfig
  /*set_register(0x5A, ATO_CFG0, 0x0B);
  set_register(0x5A, ATO_CFGU, 0xC9);  // USL = (Vdd-0.7)/vdd*256 = 0xC9 @3.3V   set_register(0x5A, ATO_CFGL, 0x82);  // LSL = 0.65*USL = 0x82 @3.3V
  set_register(0x5A, ATO_CFGT, 0xB5); */ // Target = 0.9*USL = 0xB5 @3.3V

  set_register(0x5A, ELE_CFG, 0x0C);

}


uint16_t MPR121::readTouchInputs(void){
  //if(!checkInterrupt()){
	bool touchStates[12]; //to keep track of the previous touch states
    //read the touch state from the MPR121
    Wire.requestFrom(0x5A,2); 

    byte LSB = Wire.read();
    byte MSB = Wire.read();

    uint16_t touched = ((MSB << 8) | LSB); //16bits that make up the touch states
    return touched;
  //}
}