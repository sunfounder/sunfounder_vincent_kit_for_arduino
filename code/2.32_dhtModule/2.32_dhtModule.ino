#include <dht.h>

dht DHT;

#define DHT11_PIN 4

void setup()
{
  Serial.begin(9600);
  Serial.println("DHT TEST PROGRAM ");
  Serial.print("LIBRARY VERSION: ");
  Serial.println(DHT_LIB_VERSION);
  Serial.println();
  Serial.println("Type,\tstatus,\tHumidity (%),\tTemperature (C)");
}

void loop()
{
  Serial.print("DHT11, \t");
  int chk = DHT.read11(DHT11_PIN);
  switch (chk)
  {
    case DHTLIB_OK:  
		Serial.print("OK,\t");
    Serial.print(DHT.humidity,1);
    Serial.print(",\t");
    Serial.println(DHT.temperature,1);
    delay(1000); 
		break;
    case DHTLIB_ERROR_CHECKSUM: 
		Serial.println("Checksum error,\t"); 
		break;
    case DHTLIB_ERROR_TIMEOUT: 
		Serial.println("Time out error,\t"); 
    delay(20); 
		break;
    default: 
		Serial.println("Unknown error,\t"); 
		break;
  }
}
