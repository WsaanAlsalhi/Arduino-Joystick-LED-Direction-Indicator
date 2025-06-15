const int joystickX = A0;  // X-axis
const int joystickY = A1;  // Y-axis
const int ledUp = 6;       // LED for Up
const int ledDown = 7;     // LED for Down
const int ledLeft = 8;     // LED for Left
const int ledRight = 9;    // LED for Right

const int threshold = 100; // Sensitivity threshold
const int center = 512;    // Center value of joystick

void setup() {
  pinMode(ledUp, OUTPUT);
  pinMode(ledDown, OUTPUT);
  pinMode(ledLeft, OUTPUT);
  pinMode(ledRight, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int xValue = analogRead(joystickX);
  int yValue = analogRead(joystickY);

  // Turn on LEDs based on joystick direction
  if (yValue > center + threshold) {
    digitalWrite(ledUp, HIGH);  // Turn on UP LED
  } else {
    digitalWrite(ledUp, LOW);   // Turn off UP LED
  }

  if (yValue < center - threshold) {
    digitalWrite(ledDown, HIGH); // Turn on DOWN LED
  } else {
    digitalWrite(ledDown, LOW);  // Turn off DOWN LED
  }

  if (xValue < center - threshold) {
    digitalWrite(ledLeft, HIGH); // Turn on LEFT LED
  } else {
    digitalWrite(ledLeft, LOW);  // Turn off LEFT LED
  }

  if (xValue > center + threshold) {
    digitalWrite(ledRight, HIGH); // Turn on RIGHT LED
  } else {
    digitalWrite(ledRight, LOW);  // Turn off RIGHT LED
  }

  // Print values for debugging
  Serial.print("X: ");
  Serial.print(xValue);
  Serial.print(" | Y: ");
  Serial.println(yValue);

  delay(100);
}
