const int pinLED = 4;
const int pinBTN = 2;
int val;
bool light = false;

void setup() {
  Serial.begin(9600);
  pinMode(pinLED, light);
  pinMode(pinBTN, INPUT_PULLUP);
}

void loop() {
  digitalWrite(pinLED, light);
  val = digitalRead(pinBTN);
  Serial.println(val);
  if(val == 0){
    light = !light;
  }
}
