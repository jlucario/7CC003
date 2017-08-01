

#include <SoftwareSerial.h>

SoftwareSerial zigBee(3,2);

void setup(){
  //TRX
  Serial.begin(9600);
  zigBee.begin(9600);
}
void loop(){
  zigBee.print('1');
  delay(5000);
  zigBee.print('0');
   delay(5000);
}


