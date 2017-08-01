/*
  Blink
  Turns the LED on and off
  
  */
  
  void setup() {
    //initialize the digital pin as output:
    pinMode(13, OUTPUT);
  }
  
  void loop() {
    digitalWrite(13,HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
    }
