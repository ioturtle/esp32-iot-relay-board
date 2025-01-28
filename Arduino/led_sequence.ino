// Define LED pins
const int ledPins[] = {18, 19, 23, 25};  //relay1, relay2, relay3, relay4
const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);

void setup() {
  // Initialize each pin as OUTPUT
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW); // Ensure all LEDs/Relays are off initially
  }
}

void loop() {
  // Turn on LEDs/Relays in sequence
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(500); // Delay for visibility
  }

  // Turn off LEDs/Relays in reverse sequence
  for (int i = numLeds - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], LOW);
    delay(500); // Delay for visibility
  }
}
