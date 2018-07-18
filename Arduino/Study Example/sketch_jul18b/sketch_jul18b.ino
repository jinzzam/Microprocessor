int num;
int temp;
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("this num : ");
  Serial.println(num++);
  delay(800);
  if(Serial.available()){
    Serial.print("input data : ");
    Serial.println(Serial.available());
  }
}

