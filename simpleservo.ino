/*******************************************************************************
* POP-BOT V1.0
* Filename : SimpleServo.pde
* Simple servo motor controlling
********************************************************************************/
int i;
void setup(){
//---- Servo Motor ----//
pinMode(8,OUTPUT); // Servo Motor
pinMode(7,OUTPUT); // Servo Motor
}
void loop(){
for (i=0;i<100;i++){
digitalWrite(7, HIGH); // Set Servo Di7
digitalWrite(8, HIGH); // Set Servo Di8
delayMicroseconds(500); // Positive Delay
digitalWrite(7,LOW);
digitalWrite(8,LOW);
delay(20); // Negative delay
}
for (i=0;i<100;i++){
digitalWrite(7, HIGH); // Set Servo Di7
digitalWrite(8, HIGH); // Set Servo Di8
delayMicroseconds(2300); // Positive delay
digitalWrite(7,LOW);
digitalWrite(8,LOW);
delay(20); // Negative delay
}
}
