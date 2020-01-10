#include <Stepper.h>   

const int stepsPerRevolution = 2048; // change this to fit the number of steps per revolution
const int rolePerMinute = 16;        // Adjustable range of 28BYJ-48 stepper is 0~17 rpm

//set steps and the connection with MCU
Stepper stepper(stepsPerRevolution, 2, 3, 4, 5);
 
void setup()
{
  stepper.setSpeed(rolePerMinute);
}
 
void loop()
{
  int val = 2048;
  stepper.step(val);  //Turn the motor in val steps
  delay(1000);
}
