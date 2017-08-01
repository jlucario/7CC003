#include <SoftwareSerial.h>

//Simple XBee recieve and print example.
//If recieve anything on XBee, read it with NewSoftSerial
//then print it with standard Serial,
//So that it will appear on serial monitor

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
  //first determine that something has been recieved
  if (zigBee.available()) {
    //read recieved BYTE as a CHAR and store in barry
    barry = zigBee.read();
    //write barry to serial monitor
    Serial.print(barry);
  }
}
