const int pinLED = 7;
bool sw = true;
char toggle = 'a';

void setup() {
  Serial.begin(9600);
  pinMode(pinLED, OUTPUT);
}

void loop() {
  digitalWrite(pinLED, sw);
  if(Serial.available()){
    char ch = Serial.read();
    Serial.println(ch);
    if(toggle == ch){
      sw=!sw;
    }
  }
}
