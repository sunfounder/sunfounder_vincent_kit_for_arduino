#include <rfid1.h>
#include <Stepper.h>
#include <Keypad.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define PASSWORD_LEN 6
#define ID_LEN 4

/*Stepper Motor*/
const int stepsPerRevolution = 2048;
const int rolePerMinute = 16;
const int IN1 = 11;
const int IN2 = 10;
const int IN3 = 9;
const int IN4 = 8;

/*Buzzer*/
const int buzPin = 12;

/*Authentication Parameters*/
int index = 0;
uchar password[PASSWORD_LEN] = {'1', '2', '3', '4', '5', '6'};//Authenticated password
uchar passwordInput[PASSWORD_LEN] = {""};
uchar userIdRead[ID_LEN] = {""};
uchar userId[ID_LEN] = {0xF9, 0x20, 0x77, 0x59 };// Authenticated ID
bool approved = 0;

/*Keypad*/
const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
char hexaKeys[ROWS][COLS] =
{
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};
byte rowPins[ROWS] = {31, 33, 35, 37}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {39, 41, 43, 45}; //connect to the column pinouts of the keypad


RFID1 rfid;//create a variable type of RFID1
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);
Stepper stepper(stepsPerRevolution, IN1, IN3, IN2, IN4);
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  stepper.setSpeed(rolePerMinute);
  pinMode(buzPin, OUTPUT);
  rfid.begin(7, 5, 4, 3, 6, 2);
  rfid.init();//initialize the RFID
  lcd.init();
  lcd.backlight();
  lcd.setCursor(3, 0);
  lcd.print("SunFounder");
}

void loop() {
  if (approved == 0) {
    approved = rfidRead();
    for (int i = 0; i < ID_LEN; i++)
    {
      userIdRead[i] = NULL;
    }
  }
  if (approved == 0) {
    approved = keypadInput();
    index = 0;
    for (int i = 0; i < PASSWORD_LEN; i++)
    {
      passwordInput[i] = NULL;
    }
  }
  if (approved == 1) {
    openDoor();
    approved = 0;
  }
}

void beep(int duration, int frequency)
{
  for (int i = 0; i < frequency; i++)
  {
    digitalWrite(buzPin, HIGH);
    delay(duration);
    digitalWrite(buzPin, LOW);
    delay(100);
  }
}

void verifyPrint(bool result) {
  if (result == true) {
    lcd.setCursor(3, 1);
    lcd.print("APPROVED         ");
    beep(100, 3);
    delay(400);
    lcd.setCursor(3, 1);
    lcd.print("                 ");
    delay(300);
  }
  else {
    lcd.setCursor(3, 1);
    lcd.print("DENIED           ");
    beep(500, 1);
    delay(400);
    lcd.setCursor(3, 1);
    lcd.print("                 ");
    delay(300);
  }
}

void openDoor()
{
  int doorStep = 512; //This means the door will open to 90 degrees
  stepper.step(doorStep);
  for (int i = 0; i < 5; i++) {
    lcd.setCursor(3, 1);
    lcd.print("ACCESS     ");
    delay(800);
    lcd.setCursor(3, 1);
    lcd.print("           ");
    delay(200);
  }
  stepper.step(-doorStep);
}

bool rfidRead() {
  getId();
  if (userIdRead[0] != NULL) {
    return idVerify();
  }
  return 0;
}

void getId() {
  uchar status;
  uchar str[MAX_LEN];
  status = rfid.request(PICC_REQIDL, str);
  if (status != MI_OK) {
    return;
  }
  else {
    status = rfid.anticoll(str);
    if (status == MI_OK)
    {
      for (int i = 0; i < ID_LEN; i++) {
        userIdRead[i] = str[i];
      }
    }
    delay(500);
    rfid.halt();
    beep(150, 1);
  }
}

bool idVerify() {
  for (int i = 0; i < ID_LEN; i++) {
    if (userIdRead[i] != userId[i])
    {
      verifyPrint(0);
      return 0;
    }
  }
  verifyPrint(1);
  return 1;
}

bool keypadInput() {
  lcd.setCursor(3, 1);
  while (1) {
    getCode();
    if (index == 0 || index >= PASSWORD_LEN)
    {
      break;
    }
  }
  if (index >= PASSWORD_LEN) {
    return codeVerify();
  }
  return 0;
}

void getCode() {
  char customKey = customKeypad.getKey();
  if (customKey) {
    passwordInput[index] = customKey;
    lcd.print(customKey);
    index++;
    beep(100, 1);
  }
}

bool codeVerify()
{
  for (int i = 0; i < PASSWORD_LEN; i++) {
    if (passwordInput[i] != password[i])
    {
      verifyPrint(0);
      return 0;
    }
  }
  verifyPrint(1);
  return 1;
}
