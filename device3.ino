//Device 3 - interior
#include <SoftwareSerial.h> // Imports software serial library
SoftwareSerial zigBee(3,2); //Creates a serial connection between XBee and Arduino using pins 3 and 2

// Led's
const int ledPin1 = 11; // the number of the led
const int ledPin2 = 12; // the number of the led
const int ledPin3 = 13; // the number of the led
int ledSignal1 = 0; // Creates and sets integer ledSignal1 to 0
int ledSignal2 = 0; // Creates and sets integer ledSignal2 to 0
int ledSignal3 = 0; // Creates and sets integer ledSignal3 to 0

void setup(){
  Serial.begin(4800); // Begins hardware serial (PC<->Arduino)
  zigBee.begin(4800); // Begins software serial (PC<->Arduino)
  pinMode(ledPin1, OUTPUT); // Sets led pin as an output
  pinMode(ledPin2, OUTPUT); // Sets led pin as an output
  pinMode(ledPin3, OUTPUT); // Sets led pin as an output
}

void loop(){ 

//led 1
  if (zigBee.available()) { // If zigBee connection detected
  ledSignal1 = zigBee.read(); // Whatever is read from zigBee connection becomes servoSignals value 
  if (ledSignal1 == '2'){ If ledSignal1 = 2 do following
  zigBee.print('7'); // Sends 7 over zigBee connection 
  digitalWrite(ledPin1, HIGH); // Sets the LED on
  delay(1000); // Waits for one second
else{
  digitalWrite(ledPin1, LOW); // Sets the LED off
  delay(1000); // Waits for one second        
}}}  
  
//led 2
  if (zigBee.available()) { // If zigBee connection detected
  ledSignal2 = zigBee.read(); // Whatever is read from zigBee connection becomes servoSignals value 
  if (ledSignal2 == '3'){ If ledSignal2 = 3 do following
  zigBee.print('8'); // Sends 8 over zigBee connection 
  digitalWrite(ledPin2, HIGH); // Sets the LED on
  delay(1000); // Waits for one second
else{
  digitalWrite(ledPin2, LOW); // Sets the LED off
  delay(1000); // Waits for one second        
}}} 

//led 3
  if (zigBee.available()) { // If zigBee connection detected
  ledSignal3 = zigBee.read(); // Whatever is read from zigBee connection becomes servoSignals value 
  if (ledSignal3 == '4'){ If ledSignal3 = 4 do following
  zigBee.print('9'); // Sends 9 over zigBee connection 
  digitalWrite(ledPin3, HIGH); // Sets the LED on
  delay(1000); // Waits for one second
else{
  digitalWrite(ledPin3, LOW); // Sets the LED off
  delay(1000); // Waits for one second        
}}}  
  
  
}
