// Device 1 - Remote control

#include <SoftwareSerial.h> // Imports the software serial library

SoftwareSerial zigBee(3,2); // Creates a serial connection between XBee and Arduino using pins 3 and 2



// Buttons     
const int buttonPin0 = 10; // The number of the pushbutton pin
int buttonState0 = 0; // Variable for reading the pushbutton status
const int buttonPin1 = 11; // The number of the pushbutton pin
int buttonState1 = 0; // Variable for reading the pushbutton status
const int buttonPin2 = 12; // The number of the pushbutton pin
int buttonState2 = 0; // Variable for reading the pushbutton status
const int buttonPin3 = 13; // The number of the pushbutton pin
int buttonState3 = 0; // Variable for reading the pushbutton status

// Servo
int servoSignal = 0; // Creates and sets integer servoSignal to 0

// Led's
int ledSignal1 = 0; // Creates and sets integer ledSignal1 to 0
int ledSignal2 = 0; // Creates and sets integer ledSignal2 to 0
int ledSignal3 = 0; // Creates and sets integer ledSignal3 to 0
int ledSignal4 = 0; // Creates and sets integer ledSignal4 to 0

void setup(){
  Serial.begin(4800); // Begins hardware serial (PC<->Arduino)
  zigBee.begin(4800); // Begins software serial (PC<->Arduino)
}  

 
void loop(){

   //button0
 buttonState0 = digitalRead(buttonPin0);
 if (buttonState0 == HIGH) { 
   // If button pressed send following to device 1
   zigBee.print('1'); // Sends 1 over zigBee connection
   Serial.println("Button 0 pressed"); // prints out in serial monitor 
   delay(500); // Wait for half a second 
   }
}

 //button1
 buttonState1 = digitalRead(buttonPin1);
 if (buttonState1 == HIGH) { 
   // If button pressed send following to device 1
   zigBee.print('2'); // Sends 2 over zigBee connection
   Serial.println("Button 1 pressed"); // prints out in serial monitor 
   delay(500); // Wait for half a second 
   }
}

 //button2
 buttonState2 = digitalRead(buttonPin2);
 if (buttonState2 == HIGH) { 
   // If button pressed send following to device 1
   zigBee.print('3'); // Sends 3 over zigBee connection
   Serial.println("Button 2 pressed"); // prints out in serial monitor 
   delay(500); // Wait for half a second 
   }
}

 //button3
 buttonState3 = digitalRead(buttonPin3);
 if (buttonState3 == HIGH) { 
   // If button pressed send following to device 1
   zigBee.print('4'); // Sends 4 over zigBee connection
   Serial.println("Button 3 pressed"); // prints out in serial monitor 
   delay(500); // Wait for half a second 
   }
}

 //Servo signal
if (zigBee.available()) { // If zigBee connection detected
  servoSignal = zigBee.read(); // Whatever is read from zigBee connection becomes servoSignals value 
  if (servoSignal == '5'){ If servoSignal = 5 do following
  Serial.println("Servo activated"); // prints out in serial monitor 
  delay(500); // Waits 500ms
  }
 //Led signal
if (zigBee.available()) { // If zigBee connection detected
  ledSignal1 = zigBee.read(); // Whatever is read from zigBee connection becomes servoSignals value 
  if (ledSignal1 == '6'){ If servoSignal = 6 do following
  Serial.println("Led 1 activated"); // prints out in serial monitor 
  delay(500); // Waits 500ms
  }
  
if (zigBee.available()) { // If zigBee connection detected
  ledSignal2 = zigBee.read(); // Whatever is read from zigBee connection becomes servoSignals value 
  if (ledSignal2 == '7'){ If servoSignal = 7 do following
  Serial.println("Led 2 activated"); // prints out in serial monitor 
  delay(500); // Waits 500ms
  }
  
if (zigBee.available()) { // If zigBee connection detected
  ledSignal3 = zigBee.read(); // Whatever is read from zigBee connection becomes servoSignals value 
  if (ledSignal3 == '8'){ If ledSignal3 = 8 do following
  Serial.println("Led 3 activated"); // prints out in serial monitor 
  delay(500); // Waits 500ms
  }

if (zigBee.available()) { // If zigBee connection detected
  ledSignal4 = zigBee.read(); // Whatever is read from zigBee connection becomes servoSignals value 
  if (ledSignal4 == '9'){ If ledSignal4 = 9 do following
  Serial.println("Led 4 activated"); // prints out in serial monitor 
  delay(500); // Waits 500ms
  }         
  

}
