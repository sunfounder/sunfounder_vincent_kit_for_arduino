const int buzzerPin = 9;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  digitalWrite(buzzerPin, HIGH);
  delay(300);
  digitalWrite(buzzerPin,LOW);
  delay(300);
}
