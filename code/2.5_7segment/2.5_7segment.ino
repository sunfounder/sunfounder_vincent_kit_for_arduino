// Define pins for each segment of the 7-segment display
const int a = 7;
const int b = 6;
const int c = 5;
const int d = 11;
const int e = 10;
const int f = 8;
const int g = 9;
const int dp = 4;  // Decimal point

void setup() {
  // Set pins 4 to 11 as output
  for (int thisPin = 4; thisPin <= 11; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
  // Initialize display by turning off all segments
  turnOffAllSegments();
}

void loop() {
  // Display numbers 1 to 9 and letters A to F sequentially
  digital_1(); delay(1000);
  digital_2(); delay(1000);
  digital_3(); delay(1000);
  digital_4(); delay(1000);
  digital_5(); delay(1000);
  digital_6(); delay(1000);
  digital_7(); delay(1000);
  digital_8(); delay(1000);
  digital_9(); delay(1000);
  digital_A(); delay(1000);
  digital_b(); delay(1000);
  digital_C(); delay(1000);
  digital_d(); delay(1000);
  digital_E(); delay(1000);
  digital_F(); delay(1000);
}

void digital_1()  //diaplay 1 to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
}

void digital_2()  //diaplay 2 to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
}

void digital_3()  //diaplay 3 to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(g, HIGH);
}
void digital_4()  //diaplay 4 to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void digital_5()  //diaplay 5 to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
}

void digital_6()  //diaplay 6 to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(g, HIGH);
}

void digital_7()  //diaplay 7 to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
}

void digital_8()  //diaplay 8 to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void digital_9()  //diaplay 9 to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void digital_A()  //diaplay A to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void digital_b()  //diaplay b to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void digital_C()  //diaplay C to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
}

void digital_d()  //diaplay d to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(g, HIGH);
}

void digital_E()  //diaplay E to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(a, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void digital_F()  //diaplay F to the 7-segment
{
  turnOffAllSegments();
  digitalWrite(a, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void turnOffAllSegments() {
  // Turn off all segments of the 7-segment display
  for (int thisPin = 4; thisPin <= 11; thisPin++) {
    digitalWrite(thisPin, LOW);
  }
}
