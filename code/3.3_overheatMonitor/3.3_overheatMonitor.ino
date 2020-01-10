#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <EEPROM.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

#define buttonPin 10  //the key attach to
#define relayPin 2   //the relay attach to
#define ledPin 13

/*Thermistor Constat*/
#define temPin  A0  //the thermistor attach to 
#define beta 3950  //the beta of the thermistor
#define resistance 10  //the value of the pull-down resistor

/*Rotary Encoder Pin*/
const int clkPin = 7; //the clk attach to pin2
const int dtPin = 6; //the dt attach to pin3
const int swPin = 5 ; //the number of the button

/*Temperature Threshold*/
float upperTem = 0.00;
float hysteresis = 0.25;

void setup()
{
  pinMode(relayPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(relayPin, HIGH);
  pinMode(clkPin, INPUT);
  pinMode(dtPin, INPUT);
  pinMode(swPin, INPUT);
  digitalWrite(swPin, HIGH);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("    Overheat ");
  lcd.setCursor(0, 1);
  lcd.print("   Protection   ");
  pinMode(buttonPin, INPUT);
  upperTem = EEPROM.read(0);
  delay(1000);
}

void loop()
{
  if (digitalRead(buttonPin) == HIGH)
  {
    upperTemSetting();
  }
  else
  {
    monitoringTemp();
  }
}

void upperTemSetting()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("    Set Mode    ");
  lcd.setCursor(0, 1);
  lcd.print("    start...    ");
  delay(500);
  lcd.clear();
  while (1)
  {
    lcd.setCursor(0, 0);
    lcd.print("Adjust: ");
    float change = getEncoderTurn();
    upperTem = upperTem + change;
    lcd.print(upperTem);
    if (digitalRead(swPin) == LOW)
    {
      EEPROM.write(0, upperTem);
      delay(100);
      lcd.setCursor(0, 1);
      lcd.print("Upper Tem: ");
      lcd.print((float) EEPROM.read(0));
      delay(1000);
      lcd.clear();
      break;
    }
  }
}


void monitoringTemp()
{
  long a = analogRead(temPin);
  float tempC = beta / (log((1025.0 * 10 / a - 10) / 10) + beta / 298.0) - 273.0;
  float tempF = 1.8 * tempC + 32.0;
  lcd.setCursor(0, 0);
  lcd.print("Temp : ");
  lcd.print(tempC);
  lcd.print(char(223));
  lcd.print(" C");
  lcd.setCursor(0, 1);
  lcd.print("Upper: ");
  lcd.print((float) EEPROM.read(0));
  lcd.print(char(223));
  lcd.print(" C");
  delay(300); 
  if (tempC >= upperTem + hysteresis)
  {
    digitalWrite(relayPin, HIGH);
    digitalWrite(ledPin, HIGH);
  }
  else if (tempC < upperTem - hysteresis)
  {
    digitalWrite(relayPin, LOW);
    digitalWrite(ledPin, LOW);
  }
}


int getEncoderTurn(void)
{
  static int oldA = HIGH; //set the oldA as HIGH
  static int oldB = HIGH; //set the oldB as HIGH
  int result = 0;
  int newA = digitalRead(dtPin);//read the value of clkPin to newA
  int newB = digitalRead(clkPin);//read the value of dtPin to newB
  if (newA != oldA || newB != oldB) //if the value of clkPin or the dtPin has changed
  {
    // something has changed
    if (oldA == HIGH && newA == LOW)
    {
      result = (oldB * 2 - 1);
    }
  }
  oldA = newA;
  oldB = newB;
  return result;
}
