// Splicer RGB Filter Wheel
// Two output pins of MESA 7i96 select the 4 stages of the filter wheel
// M110 = no filter    = false / false
// M111 = red filter   = true / false
// M112 = green filter = true / true
// M113 = blue filter  = false / true
// When mounting the servo after transport, the filter needs to be in the no-filter position

#include <Servo.h>

Servo myServo; // Create a Servo object

// Define the input pins
const int pinA = 2;
const int pinB = 3;

// Define the angles for the servo
const int angle0 = 0;
const int angle45 = 45;
const int angle90 = 90;
const int angle135 = 135;

// Define the output pin for the servo
const int servoPin = 9;

// Servo speed (degrees per step)
int servoSpeed = 2; // Change this value to adjust the speed (1 is slow, larger values are faster)

void setup() {
  pinMode(pinA, INPUT_PULLUP); // Set pin A as input with internal pull-up resistor
  pinMode(pinB, INPUT_PULLUP); // Set pin B as input with internal pull-up resistor
  myServo.attach(servoPin);   // Attach the servo to the pin
  myServo.write(angle0);      // Initialize servo position at 0 degrees
}

void loop() {
  int stateA = digitalRead(pinA); // Read the state of pin A
  int stateB = digitalRead(pinB); // Read the state of pin B
  // Serial.println("B : ",digitalRead(3));

  // // Since internal pull-ups are enabled, HIGH means unpressed, LOW means pressed
  // stateA = !stateA; // Invert the state (LOW becomes HIGH, HIGH becomes LOW)
  // stateB = !stateB; // Invert the state (LOW becomes HIGH, HIGH becomes LOW)

  // Determine the target angle based on the logic
  int targetAngle;
  if (stateA == LOW && stateB == LOW) {
    targetAngle = angle0; // 0 degrees
  } else if (stateA == HIGH && stateB == LOW) {
    targetAngle = angle45; // 45 degrees
  } else if (stateA == LOW && stateB == HIGH) {
    targetAngle = angle90; // 90 degrees
  } else if (stateA == HIGH && stateB == HIGH) {
    targetAngle = angle135; // 135 degrees
  }

  // Smoothly move the servo to the target angle
  moveServoSmoothly(targetAngle);
}

// Function to move the servo smoothly to a target angle
void moveServoSmoothly(int targetAngle) {
  int currentAngle = myServo.read(); // Get the current angle of the servo
  if (currentAngle < targetAngle) {
    for (int angle = currentAngle; angle <= targetAngle; angle += servoSpeed) {
      myServo.write(angle);
      delay(15); // Delay for smooth movement
    }
  } else if (currentAngle > targetAngle) {
    for (int angle = currentAngle; angle >= targetAngle; angle -= servoSpeed) {
      myServo.write(angle);
      delay(15); // Delay for smooth movement
    }
  }
}
