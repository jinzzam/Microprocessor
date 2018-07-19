const int LED = 7;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(800);
  digitalWrite(LED, LOW);
  delay(800);
}
