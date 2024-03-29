const int xPin = A0;  //the VRX attach to
const int yPin = A1;  //the VRY attach to
const int swPin = 8;  //the SW attach to

void setup()
{
  pinMode(swPin, INPUT_PULLUP);  //set the SW pin to INPUT_PULLUP
  Serial.begin(9600);
}

void loop()
{
  Serial.print("X: "); 
  Serial.print(analogRead(xPin), DEC);  // print the value of VRX in DEC
  Serial.print("|Y: ");
  Serial.print(analogRead(yPin), DEC);  // print the value of VRX in DEC
  Serial.print("|Z: ");
  Serial.println(digitalRead(swPin));   // print the value of SW
  delay(50);
}
