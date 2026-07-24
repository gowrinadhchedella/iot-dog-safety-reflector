const int pirPin = 2;
const int relayPin = 8;
const int ledPin = 13;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(relayPin, OUTPUT);
  pinMode(ledPin, OUTPUT);

  digitalWrite(relayPin, LOW);
  digitalWrite(ledPin, LOW);

  Serial.begin(9600);
}

void loop() {
  int motion = digitalRead(pirPin);

  if (motion == HIGH) {
    Serial.println("Animal Detected!");

    digitalWrite(relayPin, HIGH);   // Turn ON ultrasonic emitter
    digitalWrite(ledPin, HIGH);     // LED indication

    delay(5000);                    // Keep ON for 5 seconds

    digitalWrite(relayPin, LOW);
    digitalWrite(ledPin, LOW);
  }
  else {
    Serial.println("No Animal");

    digitalWrite(relayPin, LOW);
    digitalWrite(ledPin, LOW);
  }

  delay(200);
}
