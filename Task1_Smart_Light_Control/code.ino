int sensorPin = A0;
int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(sensorPin);
  Serial.println(value);

  if(value < 300) {
    digitalWrite(ledPin, HIGH);  // Light ON
  } else {
    digitalWrite(ledPin, LOW);   // Light OFF
  }

  delay(500);
}
