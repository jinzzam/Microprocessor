const int pinLED = 3;

void setup() {
  Serial.begin(9600);
  pinMode(pinLED, OUTPUT);
}

void loop() {
  analogWrite(pinLED, 0);
  delay(300);
  analogWrite(pinLED, 64);
  delay(300);
  analogWrite(pinLED, 128);
  delay(300);
  analogWrite(pinLED, 255);
  delay(300);
}
