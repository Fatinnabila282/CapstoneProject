// Define the L293D control pins
const int motorPin1 = 3; // Pin 2 of L293D
const int motorPin2 = 4; // Pin 7 of L293D

void setup() {
  // Set all the motor control pins to outputs
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
}

void loop() {
  // Clockwise rotation
  Serial.println("Clockwise");
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  delay(2000); // Rotate motor for 2 seconds

  // Stop the motor
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  delay(1000); // Motor stops for 1 second

  // Anticlockwise rotation
  Serial.println("Anticlockwise");
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  delay(2000); // Rotate motor for 2 seconds

  // Stop the motor
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  delay(1000); // Motor stops for 1 second
}

