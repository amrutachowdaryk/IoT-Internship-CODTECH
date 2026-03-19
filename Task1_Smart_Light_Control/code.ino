void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    String cmd = Serial.readStringUntil('\n');
    cmd.trim();

    if (cmd == "ON") digitalWrite(13, HIGH);
    else if (cmd == "OFF") digitalWrite(13, LOW);
  }
}
