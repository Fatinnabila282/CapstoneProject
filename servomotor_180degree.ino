/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-mg996r
 */

#include <Servo.h>

Servo servo;  // create servo object to control a servo

void setup() {
  servo.attach(8);  // attaches the servo on pin 9 to the servo objectư
  servo.write(180);   // rotate slowly servo to 0 degrees immediately
}

void loop() {
  for (int angle = 0; angle <= 180; angle += 1) {  // rotate slowly from 0 degrees to 180 degrees, one by one degree
    // in steps of 1 degree
    servo.write(angle);  // control servo to go to position in variable 'angle'
    delay(20);         // waits 10ms for the servo to reach the position
    Serial.println("gogo");
  }

  for (int angle = 180; angle >= 0; angle -= 1) {  // rotate from 180 degrees to 0 degrees, one by one degree
    servo.write(angle);                        // control servo to go to position in variable 'angle'
    delay(20);                               // waits 10ms for the servo to reach the position
  }
}


