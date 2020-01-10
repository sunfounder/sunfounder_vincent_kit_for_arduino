void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
}

void loop() {
  Serial.println(digitalRead(2));
  delay(1);      
}
