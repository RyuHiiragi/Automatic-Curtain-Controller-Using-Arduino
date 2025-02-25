#include <Servo.h>

// Define pins
const int ldrPin = A0; // LDR connected to analog pin A0
const int servoPin = 9; // Servo connected to digital pin 9

// Create a servo object
Servo curtainServo;

// Define thresholds for light intensity
const int lightThreshold = 500; // Adjust based on testing

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Attach the servo to the specified pin
  curtainServo.attach(servoPin);

  // Set initial position of the servo (closed position)
  curtainServo.write(0);
}

void loop() {
  // Read the light intensity from the LDR
  int lightValue = analogRead(ldrPin);
  Serial.print("Light Intensity: ");
  Serial.println(lightValue);

  // Control the servo based on light intensity
  if (lightValue > lightThreshold) {
    // Open the curtains
    curtainServo.write(90); // Adjust angle for fully open position
    Serial.println("Curtains Opened");
  } else {
    // Close the curtains
    curtainServo.write(0); // Adjust angle for fully closed position
    Serial.println("Curtains Closed");
  }

  delay(1000); // Adjust loop speed
}
