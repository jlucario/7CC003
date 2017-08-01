#define pwmOut 11
int brightness = 0;//Begin with LED off
int fadeAmount = 5;//This will be used to alter the pulse width

void setup() {
  pinMode(pwmOut, OUTPUT);
}
 
void loop() {
  analogWrite(pwmOut, brightness);   
  brightness = brightness + fadeAmount;
  //if brightness is 0, or brightness is max, invert fadeAmount
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ;
  }
  // wait a bit
  delay(100);
}
