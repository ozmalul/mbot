#include "MeMCore.h" // הוספת ספריה

MeDCMotor motor3(M1);
MeDCMotor motor4(M2);
int  motorSpeed = 100;
void setup(){
}
void loop(){
  motor3.run(motorSpeed);
  motor4.run(motorSpeed);
  delay(2000);
  motor3.stop();
  motor4.stop();
  delay(100);
  motor3.run(-motorSpeed);
  motor4.run(-motorSpeed);
  delay(2000);
  motor3.stop();
  motor4.stop();
  delay(2000);
}
