#include <MPR121_JM.h>
MPR121 mpr121(2, 0x2A, 0x1F);
boolean touchStates[12];

void setup() {
  mpr121.mpr121_setup();
  Serial.begin(9600);  
}

void loop() {
  if (!mpr121.checkInterrupt())
  {
    int touched = mpr121.readTouchInputs();
    for (int i = 0; i < 12; i++) {
      if (touched & (1 << i)) {touchStates[i] = 1;} 
      else {touchStates[i] = 0;}
    }
    for (int i = 0; i < 12; i++)
    {Serial.print(touchStates[i]);}
    Serial.println();
    //mpr121.dumpregs();
  }
}
