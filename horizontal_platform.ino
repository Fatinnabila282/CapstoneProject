#include <Servo.h> // include servo library

Servo myservo1; // create servo object for servo 1

void setup() {
  myservo1.attach(9); // attach servo 1 to pin 9
}

void loop() {

// turn clockwise
myservo1.write(20);
delay(3000);

//stop motor
myservo1.detach(); 
delay(500); 

myservo1.attach(9);

//turn counterclockwise
myservo1.write(160);
delay(3000);
}
