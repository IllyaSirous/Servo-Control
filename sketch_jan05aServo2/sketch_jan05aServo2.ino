#include <Servo.h>

Servo servo1, servo2, servo3, servo4;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  servo1.attach(7);  // attaches the servo on pin 9 to the servo object
  servo2.attach(6);
  servo3.attach(5);
}

void loop (){
  servo1.write(0);
  delay(1000);
  servo1.write(180);
  delay(3000);
  servo2.write(0);
  delay(1000);
  servo2.write(180);
  delay(3000);
  servo3.write(0);
  delay(1000);
  servo3.write(180);
  delay(3000);
}
