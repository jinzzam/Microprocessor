void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("hello ");
  Serial.println("world!");
  delay(700);
}
