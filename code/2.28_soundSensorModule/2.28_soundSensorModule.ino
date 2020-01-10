void setup() {
  pinMode(2,INPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorDigitalValue= digitalRead(2);
  int sensorAnalogValue = analogRead(A0);
  Serial.print("Digital Reading: ");
  Serial.println(sensorDigitalValue);
  Serial.print("Analog Reading: ");
  Serial.println(sensorAnalogValue);
  Serial.println("");
  delay(1); 
}
