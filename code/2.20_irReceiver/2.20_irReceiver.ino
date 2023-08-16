#include <IRremote.h>

const int IR_RECEIVE_PIN = 11;  // Define the pin number for the IR Sensor
String lastDecodedValue = "";  // Variable to store the last decoded value

void setup() {
  Serial.begin(9600);                                     // Start serial communication at 9600 baud rate
  IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);  // Start the IR receiver
}

void loop() {
  if (IrReceiver.decode()) {
    String decodedValue = decodeKeyValue(IrReceiver.decodedIRData.command);
    if (decodedValue != "ERROR" && decodedValue != lastDecodedValue) {
      Serial.println(decodedValue);
      lastDecodedValue = decodedValue;  // Update the last decoded value
    }
    IrReceiver.resume();  // Enable receiving of the next value
  }
}
