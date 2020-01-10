const int  buttonPin = 2;    
int detectionState = 0;   
int buttonState = 0;         
int lastButtonState = 0;    

void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
      detectionState=(detectionState+1)%2;
      Serial.print("The detection state is:");
      Serial.println(detectionState);
    } 
    delay(50);
  }
  lastButtonState = buttonState;
}
