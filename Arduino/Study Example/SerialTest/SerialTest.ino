int val = 1;
const int LED = 7;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  Serial.println(val++);
  digitalWrite(LED, HIGH);
  delay(800);
  digitalWrite(LED, LOW);
  delay(800);
}
