void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
}

void loop() {
  int switchState = digitalRead(2);
  Serial.println(switchState);
  delay(1);      
}
