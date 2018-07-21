const int LED = 7;
int sw = false;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  Serial.println("hello world");
  delay(1000);
  digitalWrite(LED, sw);
  if(Serial.available()){
    char ch = Serial.read();
    Serial.println(ch);
    if(ch == 'a') sw=!sw;
  }
}
