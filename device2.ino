//Device 2 - exterior
#include <SoftwareSerial.h> // Imports software serial library 
#include <Servo.h> // Imports servo library

SoftwareSerial zigBee(3,2); //Creates a serial connection between XBee and Arduino using pins 3 and 2

// Button     
const int buttonPin = 12; // The number of the pushbutton pin
int buttonState = 0; // Variable for reading the pushbutton status
const int ledPin = 13; // The number of led
  
// Servo
Servo myservo; // Create servo object to control a servo 
int servoSignal = 0; // Creates and sets integer servoSignal to 0
int pos = 0; // Creates and sets integer pos to 0 which stores the servo position 

void setup(){
  Serial.begin(4800); // Begins hardware serial (PC<->Arduino)
  zigBee.begin(4800); //Begins software serial (PC<->Arduino)
  pinMode(buttonPin, INPUT); // Initialize pushbutton pin as an input
  pinMode(ledPin, OUTPUT); // Sets led pin as an output
  myservo.attach(9);  // Sets servo to pin 9
   
}

void loop(){ 
// Led button
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) { If button pressed do following
  digitalWrite(ledPin, HIGH); // Sets the LED on
  zigBee.print('6'); // Sends 6 over zigBee connection
  Serial.println("Outside light activated"); // Prints out in serial monitor
  delay(500); // Sets a delay of half a second
  }                     
  else{
  digitalWrite(ledPin, LOW); // Sets the LED off
  delay(1000); // Waits for one second
  }      

// Servo
if (zigBee.available()) { // If zigBee connection detected
  servoSignal = zigBee.read(); // Whatever is read from zigBee connection becomes servoSignals value 
  if (servoSignal == '1'){ If servoSignal = 1 do following
  myservo.write(pos); // Tells servo to go to position in variable 'pos'
  zigBee.print('5'); // Sends 5 over zigBee connection 
  delay(15); // Waits 15ms for the servo to reach the position
  }
  else{
    for(pos = 0; pos < 180; pos += 1){ // Goes from 0 degrees to 180 degrees
    myservo.write(pos); // Tell servo to go to position in variable 'pos'
    zigBee.print('5'); // Sends 1 over zigBee connection 
    delay(200); // increasing time by this formula 180 degrees * 200 == 36000
   }}}}
