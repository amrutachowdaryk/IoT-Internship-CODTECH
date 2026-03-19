int light = 12;
int fan = 11;

void setup() {
  pinMode(light, OUTPUT);
  pinMode(fan, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    int val = Serial.parseInt();

    if (val == 1) digitalWrite(light, HIGH);
    if (val == 2) digitalWrite(light, LOW);
    if (val == 3) digitalWrite(fan, HIGH);
    if (val == 4) digitalWrite(fan, LOW);
  }
}
