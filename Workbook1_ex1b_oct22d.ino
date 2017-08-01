/*
  
*/

void setup() {
  //initialize the digital pins as outputs:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}
 
void loop() {
  digitalWrite(13, HIGH);   //set the LED on
  delay(500);               //wait for half a second
  digitalWrite(13, LOW);    //set the LED off
  digitalWrite(13, HIGH);   //set the LED on
  digitalWrite(12, HIGH);   //set the LED on
  delay(500);               //wait for half a second
  digitalWrite(13, LOW);    //set the LED off
  digitalWrite(12, LOW);    //set the LED off
  digitalWrite(11, HIGH);   //set the led off
  delay(500);               //wait for half a second
  digitalWrite(11, LOW);    //set the LED off
  digitalWrite(12, HIGH);   //set the LED on
  delay(500);               //wait for half a second
  digitalWrite(12, LOW);    //set the LED off
}
