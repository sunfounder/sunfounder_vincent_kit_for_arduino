void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
}

void loop() {
  int buttonState = digitalRead(2);
  Serial.println(buttonState);
  delay(1);      
}
