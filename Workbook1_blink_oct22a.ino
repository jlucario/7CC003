/*
  Blink
  Turns on LED for one second, then off for one second, repeats
  
  This example code is in the public domain
*/

void setup() {
  //initialize the digital pin as an output:
  pinMode(13, OUTPUT);
}
 
void loop() {
  digitalWrite(13, HIGH);   //set the LED on
  delay(1000);              //wait for a second
  digitalWrite(13, LOW);    //set the LED off
  delay(1000);              //wait for a second
}
