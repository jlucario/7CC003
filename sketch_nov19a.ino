
//Simple HELLO WORLD sketch
//Used with an Arduino, this will print a line of text to
//Serial Monitor.
//Attach a correctly configured XBee module and Shield and this
//will also transmit the line of text

#include <SoftwareSerial.h>

//Create a serial connection between XBee and Arduino
//using pins 2 and 3
//NOTE THAT THIS REQUIRES HARDWARE CONFIG TOO
SoftwareSerial zigBee(3,2);

void setup(){
  //Begin hardware serial (PC<->Arduino)
  Serial.begin(9600);
  //Begin software serial (PC<->Arduino)
  zigBee.begin(9600);
}  
  
void loop(){
  zigBee.println("Hello! Anyone there?");
  delay(5000);
}  
