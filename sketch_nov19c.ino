#include <SoftwareSerial.h>

//Create a serial connection between XBee and Arduino
//using pins 2 and 3
SoftwareSerial zigBee(3,2);
char barry;

void setup(){
  //Begin hardware serial (PC<->Arduino)
  Serial.begin(9600);
  //Begin software serial (PC<->Arduino)
  zigBee.begin(9600);
}  
  
void loop(){
  zigBee.print('1');
  delay(5000);
  zigBee.print('0');
  delay(5000);
  }
