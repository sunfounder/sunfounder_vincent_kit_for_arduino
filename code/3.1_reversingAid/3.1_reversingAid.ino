#include <Wire.h>
#include <LiquidCrystal_I2C.h>

const int ledPin = 8;
const int echoPin = 4;
const int trigPin = 5;
const int buzzerPin = 9;
const long intervalLcd = 1000;
long intervalAlert = -1;

unsigned long previousMillisL = 0;
unsigned long previousMillisA = 0;

LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  lcd.init();
  lcd.backlight();
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
}

void loop() {
  float distanceValue = readSensorData();
  unsigned long currentMillisL = millis();
  if (currentMillisL - previousMillisL >= intervalLcd)
  {
    previousMillisL = currentMillisL;
    lcdPrint(distanceValue);
  }
  distanceJudgment(distanceValue);
  if (intervalAlert != -1)
  {
    unsigned long currentMillisA = millis();
    if (currentMillisA - previousMillisA >= intervalAlert)
    {
      previousMillisA = currentMillisA;
      alertWork();
    }
  }
}

void alertWork() {
  digitalWrite(ledPin, HIGH);
  tone(9, 440, 100);
  delay(100);
  digitalWrite(ledPin, LOW);
}

void lcdPrint(float distance) {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("distance:");
  lcd.setCursor(9, 0);
  lcd.print(distance);
}

float readSensorData(void) {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  float distance = pulseIn(echoPin, HIGH)/58.00;
  return  distance;
}

void distanceJudgment(float distance) {
  if (distance <= 25) {
    intervalAlert = 300;
  }
  else if (distance <= 50) {
    intervalAlert = 800;
  }
  else {
    intervalAlert = -1;
  }
}
