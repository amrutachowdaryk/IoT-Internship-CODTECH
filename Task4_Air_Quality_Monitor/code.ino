void setup() {
  Serial.begin(9600);
}

void loop() {
  int air = analogRead(A0);
  Serial.println(air);
  delay(1000);
}
