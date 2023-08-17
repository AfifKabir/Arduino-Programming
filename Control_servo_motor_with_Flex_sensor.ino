// C++ code
//Control servo motor with Flex sensor
#include<Servo.h>
int sensor_pin=A0;
int servo_pin=7;
Servo myservo;
void setup()
{
  Serial.begin(9600);
  myservo.attach(servo_pin);
  
}

void loop()
{
 int angle= Angle();
 myservo.write(angle);
 Serial.println(angle);
}
int Angle(){
  int sensor_value=analogRead(sensor_pin);
  int angle_value=map(sensor_value,682,275,0,180);
  return angle_value;                    
}