const int a=7; //a of 7-segment attach to digital pin 7
const int b=6; //b of 7-segment attach to digital pin 6
const int c=5; //c of 7-segment attach to digital pin 5
const int d=11;//d of 7-segment attach to digital pin 11
const int e=10;//e of 7-segment attach to digital pin 10
const int f=8;//f of 7-segment attach to digital pin 8
const int g=9;//g of 7-segment attach to digital pin 9
const int dp=4;//dp of 7-segment attach to digital pin 4

void setup()
{
  //loop over thisPin from 4 to 11 and set them all to output
  for(int thisPin = 4;thisPin <= 11;thisPin++)
  {
    pinMode(thisPin,OUTPUT);
  }
  digitalWrite(dp,LOW);//turn the dp of the 7-segment off 
}

void loop()
{
  digital_1();//diaplay 1 to the 7-segment
  delay(1000);//wait for a second
  digital_2();//diaplay 2 to the 7-segment
  delay(1000); //wait for a second
  digital_3();//diaplay 3 to the 7-segment
  delay(1000); //wait for a second
  digital_4();//diaplay 4 to the 7-segment
  delay(1000); //wait for a second
  digital_5();//diaplay 5 to the 7-segment
  delay(1000); //wait for a second
  digital_6();//diaplay 6 to the 7-segment
  delay(1000); //wait for a second
  digital_7();//diaplay 7 to the 7-segment
  delay(1000); //wait for a second
  digital_8();//diaplay 8 to the 7-segment
  delay(1000); //wait for a second
  digital_9();//diaplay 8 to the 7-segment
  delay(1000); //wait for a second
  digital_A();//diaplay 8 to the 7-segment
  delay(1000); //wait for a second
  digital_b();//diaplay 8 to the 7-segment
  delay(1000); //wait for a second
  digital_C();//diaplay 8 to the 7-segment
  delay(1000); //wait for a second
  digital_d();//diaplay 8 to the 7-segment
  delay(1000); //wait for a second
  digital_E();//diaplay 8 to the 7-segment
  delay(1000); //wait for a second
  digital_F();//diaplay 8 to the 7-segment
  delay(1000); //wait for a second
}

void digital_1(void) //diaplay 1 to the 7-segment
{
  digitalWrite(c,HIGH);//turn the c of the 7-segment on
  digitalWrite(b,HIGH);//turn the b of the 7-segment on
  for(int j = 7;j <= 11;j++)//turn off the others
    digitalWrite(j,LOW);
}
void digital_2(void) //diaplay 2 to the 7-segment
{
  digitalWrite(b,HIGH);
  digitalWrite(a,HIGH);
  for(int j = 9;j <= 11;j++)
    digitalWrite(j,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(f,LOW);
}
void digital_3(void) //diaplay 3 to the 7-segment
{
  unsigned char j;
  digitalWrite(g,HIGH);
  digitalWrite(d,HIGH);
  for(j=5;j<=7;j++)
    digitalWrite(j,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(e,LOW);
}
void digital_4(void) //diaplay 4 to the 7-segment
{
  digitalWrite(c,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(e,LOW);
  digitalWrite(d,LOW);
}
void digital_5(void) //diaplay 5 to the 7-segment
{
  unsigned char j;
  for(j = 7;j <= 9;j++)
    digitalWrite(j,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(e,LOW);
}
void digital_6(void) //diaplay 6 to the 7-segment
{
  unsigned char j;
  for(j = 7;j <= 11;j++)
    digitalWrite(j,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(b,LOW);
}
void digital_7(void) //diaplay 7 to the 7-segment
{
  unsigned char j;
  for(j = 5;j <= 7;j++)
    digitalWrite(j,HIGH);
  for(j = 8;j <= 11;j++)
    digitalWrite(j,LOW);
}
void digital_8(void) //diaplay 8 to the 7-segment
{
  unsigned char j;
  for(j = 5;j <=11;j++)
    digitalWrite(j,HIGH);
}
void digital_9(void) //diaplay 9 to the 7-segment
{
  unsigned char j;
  for(j = 5;j <=9;j++)
    digitalWrite(j,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
}
void digital_A(void) //diaplay A to the 7-segment
{
  unsigned char j;
  for(j = 5;j <=10;j++)
    digitalWrite(j,HIGH);
  digitalWrite(d,LOW);
}
void digital_b(void) //diaplay b to the 7-segment
{
  unsigned char j;
  for(j = 7;j <=11;j++)
    digitalWrite(j,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
}
void digital_C(void) //diaplay C to the 7-segment
{
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
}
void digital_d(void) //diaplay d to the 7-segment
{
  unsigned char j;
  digitalWrite(a,LOW);
  digitalWrite(f,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(j,HIGH);
  for(j = 9;j <=11;j++)
    digitalWrite(j,HIGH);
}
void digital_E(void) //diaplay E to the 7-segment
{
  unsigned char j;
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  for(j = 7;j <=11;j++)
    digitalWrite(j,HIGH);
}
void digital_F(void) //diaplay F to the 7-segment
{
  unsigned char j;
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  for(j = 7;j <=10;j++)
    digitalWrite(j,HIGH);
}
