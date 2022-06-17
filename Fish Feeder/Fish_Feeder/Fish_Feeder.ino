#include<Servo.h>
 Servo myservo;
void setup() {
  myservo.attach(9);
}
void loop() {
  myservo.write(80);
  delay (1000);
  myservo.write(110);
  delay (60\);
  myservo.write(80);
  delay(86400000);
}
