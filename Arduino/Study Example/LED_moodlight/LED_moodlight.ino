const int LED = 3;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  for(int i=0;i<256;i++){
    analogWrite(LED, i);
    delay(5);
  }
  for(int i=255;i>=0;i--){
    analogWrite(LED, i);
    delay(5);
  }
}
