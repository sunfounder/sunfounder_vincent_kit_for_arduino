void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
}

void loop() {
  int touchState = digitalRead(2);
  Serial.println(touchState);
  delay(1);      
}
