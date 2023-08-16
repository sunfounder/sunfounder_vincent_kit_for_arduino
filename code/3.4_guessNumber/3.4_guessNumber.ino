#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <IRremote.h>

const int IR_RECEIVE_PIN = 5;  // Define the pin number for the IR Sensor
String lastDecodedValue = "";  // Variable to store the last decoded value

const long interval = 1000;

unsigned long previousMillis = 0;

LiquidCrystal_I2C lcd(0x27, 16, 2);


int count = 0;/*Input Number Value*/
int pointValue = 0;/*The Random Lucky Point*/
int upper = 99;/*Upper Limit Tips*/
int lower = 0;/*Lower Limit Tips*/

void setup() {
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
  Serial.begin(9600);                                     // Start serial communication at 9600 baud rate
  IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);  // Start the IR receiver
  initNewValue();
}

void loop() {
  if (IrReceiver.decode()) {
    bool result = 0;
    String num = decodeKeyValue(IrReceiver.decodedIRData.command);
    if (num != "ERROR" && num != lastDecodedValue) {
      Serial.println(num);
      lastDecodedValue = num;  // Update the last decoded value
    }

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
    IrReceiver.resume();  // Enable receiving of the next value
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
