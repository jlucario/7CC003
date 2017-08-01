#define pwmOut 11
int brightness = 0;
int fadeAmount = 0;

void setup() {
  pinMode(pwmOut, OUTPUT);
}

void loop() {
  analogWrite(pwmOut, brightness);
  brightness = brightness + fadeAmount;
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount;
  }
  delay(100);
}
