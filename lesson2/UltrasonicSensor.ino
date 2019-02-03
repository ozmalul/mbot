#include "MeMCore.h"
MeUltrasonicSensor ultraSensor(PORT_3); /* Ultrasonic module can ONLY be connected to port 3, 4, 6, 7, 8 of base shield. */
void setup(){
  Serial.begin(9600);
}
void loop(){
  int distance = ultraSensor.distanceCm();
  Serial.print("Distance : ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(100); /* the minimal measure interval is 100 milliseconds */
  if(distance > 30){
      Serial.print("far ");    
  }
  else{
    
      Serial.print("close ");
  }
}
