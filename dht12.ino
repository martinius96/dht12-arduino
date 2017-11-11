
#include <DHT12.h>
#include <Wire.h>     // DHT12 pouziva I2C komunikaciu.
DHT12 dht12;          //nastavenie °C a adresu 0x5c.

void setup() {
  Wire.begin(); //aktivuj zbernicu
  Serial.begin(9600);

}

void loop() {
  Serial.print("Teplota: ");
  Serial.print(dht12.readTemperature());
  Serial.print("*C  Vlhkost: ");
  Serial.print(dht12.readHumidity());
  Serial.println("%");
  delay(5000);
}

/*
if it delivers the values 0.01, 0.02 or 0.03, you are
giving us the error that has had in reading:
0.01: DHT12 is not connected or the ID does not exist.
0.02: There have been a problem with communication.
0.03: Checksum error (bad connections, check the wires). 
*/
