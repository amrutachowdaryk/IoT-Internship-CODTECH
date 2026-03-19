int sensor = 2;
int alarm = 13;

void setup() {
  pinMode(sensor, INPUT);
  pinMode(alarm, OUTPUT);
}

void loop() {
  if (digitalRead(sensor) == HIGH) {
    digitalWrite(alarm, HIGH);
  } else {
    digitalWrite(alarm, LOW);
  }
}
