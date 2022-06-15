#include <Servo.h>

#define forward 3
#define backward 4
#define frontWheelSignal A5

Servo frontWheel;


void setup() {
  frontWheel.attach(frontWheelSignal);
  
  for(int pin = 2; pin <= 4; pin++) {
    pinMode(pin, OUTPUT);
  }
}


void moveForward() {
  digitalWrite(backward, LOW);
  digitalWrite(forward, HIGH);
}


void moveBackward() {
  digitalWrite(forward, LOW);
  digitalWrite(backward, HIGH);
}


void stop() {
  digitalWrite(forward, LOW);
  digitalWrite(backward, LOW);
}


void steer(int angle) {
  frontWheel.write(angle);
}


void loop() {
  steer(90); // Motor Straight
  stop();
  delay(1000);
  
  steer(115);
  moveForward();
  delay(1000);
  
  steer(90);
  stop();
  delay(1000);
  
  steer(65);
  moveBackward();
  delay(1000);
}
