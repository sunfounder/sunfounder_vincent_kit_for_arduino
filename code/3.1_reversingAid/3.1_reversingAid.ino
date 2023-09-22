#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Define pins for the ultrasonic sensor
const int ledPin = 8;
const int echoPin = 4;
const int trigPin = 5;
const int buzzerPin = 9;

// Initialize the intervals variable
unsigned long intervals = 1000;
unsigned long previousMillis = 0;

// Initialize the distance variable
float distance = 0;

// Initialize the LCD
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // Begin serial communication at 115200 baud rate
  Serial.begin(115200);

  // Set echoPin as input and trigPin as output
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);

  // Initialize the buzzer pin
  pinMode(buzzerPin, OUTPUT);

  // Initialize the led pin
  pinMode(ledPin, OUTPUT);

  // Start the LCD
  lcd.clear();
  lcd.init();
  lcd.backlight();
}

void loop() {
  // Update the distance
  distance = readDistance();

  // Update intervals based on distance
  if (distance <= 10) {
    intervals = 300;
  } else if (distance <= 20) {
    intervals = 500;
  } else if (distance <= 50) {
    intervals = 1000;
  } else {
    intervals = 2000;
  }

  // Check if it's time to beep
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= intervals) {
    Serial.println("Beeping!");
    beep();
    previousMillis = currentMillis;
  }

  // Update the distance on the LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Dis: ");
  lcd.print(distance);
  lcd.print(" cm");

  delay(100);
}

// Beep function for the buzzer
void beep() {
  digitalWrite(ledPin, HIGH);
  tone(9, 440, 100);
  delay(100);
  digitalWrite(ledPin, LOW);
}

// Function to read data from the ultrasonic sensor
float readDistance() {
  // Trigger a low signal before sending a high signal
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Send a 10-microsecond high signal to the trigPin
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  // Return to low signal
  digitalWrite(trigPin, LOW);

  // Measure the duration of the high signal on the echoPin
  unsigned long microsecond = pulseIn(echoPin, HIGH);

  // Calculate the distance using the speed of sound (29.00µs per centimeter)
  float distance = microsecond / 29.00 / 2;

  // Return the calculated distance
  return distance;
}
