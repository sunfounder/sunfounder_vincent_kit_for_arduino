const int redLed = 5;
const int greenLed = 6;
const int STcp = 12;
const int SHcp = 8;
const int DS = 11;
const int touchIO = 2;

char datArray[] = { 0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f,  0x6f};

void setup() {
  Serial.begin(9600);
  pinMode(touchIO, INPUT);
  pinMode(STcp, OUTPUT); 
  pinMode(SHcp, OUTPUT);
  pinMode(DS, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pedestrianStop();
}

void loop() {
  if (digitalRead(touchIO) == 1)
  {
    pedestrianWait();
    pedestrianGo();
    pedestrianStop();
  }
}
void pedestrianWait() {
  for (int num = 4; num >= 0; num--) {
    digitalWrite(greenLed, LOW);
    digitalWrite(STcp, LOW);
    shiftOut(DS, SHcp, MSBFIRST, datArray[num]);
    digitalWrite(STcp, HIGH);
    delay(500);
    digitalWrite(greenLed, HIGH);
    delay(500);
  }
}

void pedestrianGo() {
  digitalWrite(greenLed, LOW);
  digitalWrite(redLed, HIGH);
  for (int num = 9; num >= 0; num--)
  {
    digitalWrite(STcp, LOW);
    shiftOut(DS, SHcp, MSBFIRST, datArray[num]);
    digitalWrite(STcp, HIGH);
    delay(1000);
  }
}

void pedestrianStop() {
  digitalWrite(redLed, LOW);
  digitalWrite(greenLed, HIGH);
  digitalWrite(STcp, LOW);
  shiftOut(DS, SHcp, MSBFIRST, 0x00);
  digitalWrite(STcp, HIGH);
  delay(1000);
}
