void setup() {
  // initialize the digital pin as an output:
  pinMode(13, OUTPUT);
  // initialize the digital pin as an output:
  pinMode(12, OUTPUT);
  // initialize the digital pin as an output:
  pinMode(11, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  delay(50);
  digitalWrite(13, LOW);
  delay(50);
  digitalWrite(11, HIGH);
  delay (500);
  digitalWrite(11, LOW);
  delay(50);
}
