// Define the LED pins
const int ledPins[5] = {2;

// Set the delay between each LED
const float delayTime = 100;

// Set the initial LED index
int ledIndex = 0;

void setup() {
  // Set all LED pins as outputs
  for (int i = 0; i < 5; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Turn on the current LED
  digitalWrite(ledPins[ledIndex], HIGH);

  // Delay for the set amount of time
  delay(delayTime);

  // Turn off the current LED
  digitalWrite(ledPins[ledIndex], LOW);

  // Increment the LED index
  ledIndex++;

  // If the LED index is at the end of the array, reset it to the beginning
  if (ledIndex >= 5) {
    ledIndex = 0;
  }
}

