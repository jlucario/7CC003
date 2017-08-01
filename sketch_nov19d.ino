#include <SoftwareSerial.h>

//Create a serial connection between XBee and Arduino
//using pins 2 and 3
SoftwareSerial zigBee(3,2);
int barry = 0;
#define ledPin 13

void setup(){
  //Begin hardware serial (PC<->Arduino)
  Serial.begin(9600);
  //Begin software serial (PC<->Arduino)
  zigBee.begin(9600);
  pinMode(ledPin, OUTPUT);
}  
  
void loop(){
  //First determine that something has been recieved
  if (zigBee.available()) {
    barry = zigBee.read();
    if(barry == '1'){
      digitalWrite(ledPin, LOW);
    }
    else{
      digitalWrite(ledPin, HIGH);
    }
  }  
}  


