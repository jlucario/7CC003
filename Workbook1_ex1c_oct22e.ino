/*Using #define means that we can give our pins (or any other
constants) names to more easily track them in code. Unlike
variable declerations, they dont take up any program memory
space - Good for low memory devices like this*/
#define switchPin 2

/*switchPin is an INPUT
  ledPin is an OUTPUT*/
void setup() {
  pinMode(switchPin, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
int value = 0; //Declare an integer 'value' and set to zero

  value = digitalRead(switchPin);
  if(value == HIGH) {
     digitalWrite(13, HIGH);
     digitalWrite(12, HIGH);
     digitalWrite(11, HIGH);
     
  }
  else {
  digitalWrite(13, HIGH);   //set the LED on
  delay(500);               //wait for half a second
  digitalWrite(13, LOW);    //set the LED off
  digitalWrite(12, HIGH);   //set the LED on
  delay(500);               //wait for half a second
  digitalWrite(12, LOW);    //set the LED off
  digitalWrite(11, HIGH);   //set the led off
  delay(500);               //wait for half a second
  digitalWrite(11, LOW);    //set the LED off
  }
}
