#define rightside 2
#define leftside 3

#define rightForward 5
#define rightReverse 4

#define leftForward 7
#define leftReverse 6


void setup() {
  for(int pin = 2; pin <= 9; pin++) {
    pinMode(pin, OUTPUT);
  }
}


void moveForward() {
  digitalWrite(rightReverse, LOW);
  digitalWrite(leftReverse, LOW);
  
  digitalWrite(rightForward, HIGH);
  digitalWrite(leftForward, HIGH);
}


void moveBackwards() {
  digitalWrite(rightForward, LOW);
  digitalWrite(leftForward, LOW);
  
  digitalWrite(rightReverse, HIGH);
  digitalWrite(leftReverse, HIGH);
}


void moveRight() {
  digitalWrite(rightReverse, LOW);
  digitalWrite(leftForward, LOW);
  
  digitalWrite(rightForward, HIGH);
  digitalWrite(leftReverse, HIGH);
}


void moveLeft() {
  digitalWrite(rightForward, LOW);
  digitalWrite(leftReverse, LOW);
  
  digitalWrite(rightReverse, HIGH);
  digitalWrite(leftForward, HIGH);
}


void stop() {
  // Turns off all motors

  digitalWrite(rightForward, LOW);
  digitalWrite(rightReverse, LOW);
  digitalWrite(leftForward, LOW);
  digitalWrite(leftReverse, LOW);
}


void loop() {
  digitalWrite(rightside, HIGH);
  digitalWrite(leftside, HIGH);
  
  moveForward();
  delay(800);
  stop();
  delay(400);
  moveBackwards();
  delay(400);
  stop();
  delay(400);
}
