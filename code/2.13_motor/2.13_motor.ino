const int motor1A = 10;
const int motor2A = 9;

void setup() {
  pinMode(motor1A, OUTPUT);
  pinMode(motor2A, OUTPUT);
  Serial.begin(9600);
  Serial.println("Please input 'A' or 'B' to select the motor rotate direction.");
}

void loop() {
  if (Serial.available() > 0) {
    int incomingByte = Serial.read();
    switch (incomingByte) {
      case 'A':
        clockwise(255);
        Serial.println("The motor rotate clockwise.");
        break;
      case 'B':
        anticlockwise(255);
        Serial.println("The motor rotate anticlockwise.");
        break;
    }
  }
  delay(3000);
  stopMotor();
}

void clockwise(int Speed)//
{
  analogWrite(motor1A, 0);
  analogWrite(motor2A, Speed);
}

void anticlockwise(int Speed)//
{
  analogWrite(motor1A, Speed);
  analogWrite(motor2A, 0);
}

void stopMotor()
{
  analogWrite(motor1A, 0);
  analogWrite(motor2A, 0);
}
