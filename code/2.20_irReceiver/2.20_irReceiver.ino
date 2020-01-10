#include <IRremote.h>

const int recvPin = 11;

IRrecv irrecv(recvPin);
decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}

void loop() {
  if (irrecv.decode(&results)) {
    //Serial.println(results.value,HEX);
    if (decodeKeyValue(results.value)!="ERROR")
    {
      Serial.println(decodeKeyValue(results.value));
    }
    irrecv.resume(); // Receive the next value
  }
}
