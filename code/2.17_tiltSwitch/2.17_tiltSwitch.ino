void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
}

void loop() {
  int tiltState = digitalRead(2);
  Serial.println(tiltState);
  delay(1);      
}
