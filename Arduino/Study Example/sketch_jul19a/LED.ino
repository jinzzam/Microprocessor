const int pinLED = 7;

void setup() {
  pinMode(pinLED, OUTPUT);
}

void loop() {
  digitalWrite(pinLED, HIGH);
  delay(500);
  digitalWrite(pinLED, LOW);
  delay(500);
}
