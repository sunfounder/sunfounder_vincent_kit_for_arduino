#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <IRremote.h>

const int recvPin = 5;
const long interval = 1000;

unsigned long previousMillis = 0;

IRrecv irrecv(recvPin);
decode_results results;
LiquidCrystal_I2C lcd(0x27, 16, 2);


int count = 0;/*Input Number Value*/
int pointValue = 0;/*The Random Lucky Point*/
int upper = 99;/*Upper Limit Tips*/
int lower = 0;/*Lower Limit Tips*/

void setup() {
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
  irrecv.enableIRIn();
  initNewValue();
}

void loop() {
  if (irrecv.decode(&results)) {
    bool result = 0;
    String num = decodeKeyValue(results.value);
    if (num == "POWER") {
      initNewValue();
    }
    else if (num == "CYCLE") {
      result = detectPoint();
      lcdShowInput(result);
    }
    else if (num >= "0" && num <= "9") {
      count = count * 10;
      count += num.toInt();
      if (count >= 10) {
        result = detectPoint();
      }
      lcdShowInput(result);
    }
    irrecv.resume();
  }
}

void initNewValue() {
  randomSeed(analogRead(A0));
  pointValue = random(99);
  upper = 99;
  lower = 0;
  lcd.clear();
  lcd.print("    Welcome!");
  lcd.setCursor(0, 1);
  lcd.print("  Guess Number!");
  count = 0;
  Serial.print("point is ");
  Serial.println(pointValue);
}

bool detectPoint() {
  if (count > pointValue) {
    if (count < upper)upper = count;
  }
  else if (count < pointValue) {
    if (count > lower)lower = count;
  }
  else if (count == pointValue) {
    count = 0;
    return 1;
  }
  count = 0;
  return 0;
}

void lcdShowInput(bool result) {
  lcd.clear();
  if (result == 1)
  {
    lcd.setCursor(0, 1);
    lcd.print(" You've got it! ");
    delay(5000);
    initNewValue();
    return;
  }
  lcd.print("Enter number:");
  lcd.print(count);
  lcd.setCursor(0, 1);
  lcd.print(lower);
  lcd.print(" < Point < ");
  lcd.print(upper);
}
