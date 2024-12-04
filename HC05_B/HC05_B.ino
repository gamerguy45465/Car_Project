#include <SoftwareSerial.h>
SoftwareSerial Bluetooth(3,2);//TX - 3, RX-2
void setup() {
  Serial.begin(9600);
  Bluetooth.begin(9600);
}

void loop() {
  //read from HC05, and send to serial monitor
  if (Bluetooth.available())
  {
    Serial.write(Bluetooth.read());
  }
//read from serial, and send to bluetooth
    if (Serial.available())
  {
    Bluetooth.write(Serial.read());
  }
  delay(5);

}
