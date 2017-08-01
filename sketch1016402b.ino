#define ledPin 13
#define switchPin 2
void setup() {
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);
}
void loop() {
  int value = 0;
  value = digitalRead(switchPin);
  if(value == HIGH){
    digitalWrite(ledPin, LOW);
  }
  else{
    digitalWrite(ledPin, HIGH);
  }
}
