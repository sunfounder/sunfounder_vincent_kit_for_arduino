// Define the pins that are connected to the segments and the digits of the 7-segment display
int segmentPins[] = {2, 3, 4, 5, 6, 7, 8, 9};
int digitPins[] = {13, 12, 11, 10};

long n = 0; // Variable to store the current stopwatch number
int del = 5; // Delay time (in milliseconds) to keep each digit illuminated
unsigned long previousMillis = 0; // Store the last time the stopwatch incremented
const long interval = 1000; // One-second interval (in milliseconds)

// Numbers 0-9 for a 7-segment display (common-cathode)
byte numbers[10][8] = {
  {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, LOW, LOW},  // 0
  {LOW, HIGH, HIGH, LOW, LOW, LOW, LOW, LOW},      // 1
  {HIGH, HIGH, LOW, HIGH, HIGH, LOW, HIGH, LOW},   // 2
  {HIGH, HIGH, HIGH, HIGH, LOW, LOW, HIGH, LOW},   // 3
  {LOW, HIGH, HIGH, LOW, LOW, HIGH, HIGH, LOW},    // 4
  {HIGH, LOW, HIGH, HIGH, LOW, HIGH, HIGH, LOW},   // 5
  {HIGH, LOW, HIGH, HIGH, HIGH, HIGH, HIGH, LOW},  // 6
  {HIGH, HIGH, HIGH, LOW, LOW, LOW, LOW, LOW},     // 7
  {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, LOW}, // 8
  {HIGH, HIGH, HIGH, HIGH, LOW, HIGH, HIGH, LOW}   // 9
};

void setup() {
  // Configure all segment and digit pins as OUTPUT
  for (int i = 0; i < 8; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }
  for (int i = 0; i < 4; i++) {
    pinMode(digitPins[i], OUTPUT);
    digitalWrite(digitPins[i], HIGH); // Initially turn off all digits (for common-cathode displays, HIGH is OFF)
  }
}

void loop() {
  // Check if a second has passed since the last increment
  if (millis() - previousMillis >= interval) {
    previousMillis += interval; // Update the last increment time
    n = (n + 1) % 10000; // Increment the stopwatch number and wrap around at 9999
  }

  displayNumber(n); // Display the current stopwatch number on the 7-segment display
}

// Function to display a 4-digit number on the 7-segment display
void displayNumber(long num) {
  for (int digit = 0; digit < 4; digit++) {
    clearLEDs(); // Turn off all segments and digits
    pickDigit(digit); // Activate the current digit
    int value = (num / (int)pow(10, 3 - digit)) % 10; // Extract the specific digit from the number
    pickNumber(value); // Illuminate the segments to display the digit
    delay(del); // Keep the digit illuminated for a short time
  }
}

// Function to activate a specific digit (0 to 3)
void pickDigit(int x) {
  digitalWrite(digitPins[x], LOW); // Turn ON the selected digit (for common-cathode displays, LOW is ON)
}

// Function to display a single number (0-9) on the currently activated digit
void pickNumber(int x) {
  for (int i = 0; i < 8; i++) {
    digitalWrite(segmentPins[i], numbers[x][i]); // Set each segment according to the pattern for the given number
  }
}

// Function to turn off all segments and digits
void clearLEDs() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(segmentPins[i], LOW); // Turn off all segments
  }
  for (int i = 0; i < 4; i++) {
    digitalWrite(digitPins[i], HIGH); // Turn off all digits
  }
}