int xPin = 34;   // VRX pin
int yPin = 35;   // VRY pin
int buttonPin = 32; // SW pin

void setup() {
  Serial.begin(115200);
  pinMode(buttonPin, INPUT_PULLUP); // Pull-up for the button
}

void loop() {
  int xValue = analogRead(xPin);  // Read the X-axis value
  int yValue = analogRead(yPin);  // Read the Y-axis value

  // Map the values for better visualization in the Serial Plotter
  int vx = map(xValue, 0, 4095, -100, 100);
  int vy = map(yValue, 0, 4095, -100, 100);

  // Print vx and vy on separate lines
  Serial.print("vx: ");
  Serial.println(vx); // End line for vx
  Serial.print("vy: ");
  Serial.println(vy); // End line for vy

  delay(100); // Adjust delay as needed for smooth plotting
}
