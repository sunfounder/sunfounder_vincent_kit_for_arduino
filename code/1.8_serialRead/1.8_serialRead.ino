const int ledPin = 9;
int incomingByte = 0; 

void setup() {
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600); 
}

void loop() {
  if (Serial.available() > 0) {
    incomingByte = Serial.read();
    if(incomingByte=='1'){digitalWrite(ledPin,HIGH);}
    else if(incomingByte=='0'){digitalWrite(ledPin,LOW);}
    
    //say what you got:
    Serial.print("I received: ");
    Serial.println(incomingByte, DEC);
  }
}
