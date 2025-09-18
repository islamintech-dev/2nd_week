const int LED_PIN = 7;  

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Step 1: Turn LED ON for 1 second
  digitalWrite(LED_PIN, HIGH);
  delay(1000);


  for (int i = 0; i < 5; i++) {
    digitalWrite(LED_PIN, HIGH);
    delay(2000);
    digitalWrite(LED_PIN, LOW);
    delay(2000);
  }

  // Step 3: Turn LED OFF
  digitalWrite(LED_PIN, LOW);

 
  while (1) {

  }
}
