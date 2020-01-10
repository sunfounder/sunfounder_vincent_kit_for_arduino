void setup() {
  for(int i=2;i<=11;i++)
  {
    pinMode(i,OUTPUT);
  }
}

void loop() {
  for(int i=2;i<=11;i++)
  {
    digitalWrite(i,HIGH);
    delay(500);
    digitalWrite(i,LOW);
    delay(500);    
  }
}
