// C++ code
//Force sensor
int red=13,blue=12,green=8;
void setup()
{
 Serial.begin(9600);
 pinMode(red,OUTPUT);
 pinMode(blue,OUTPUT);
 pinMode(green,OUTPUT);
  
}

void loop()
{
  int voltage=analogRead(A0);
  Serial.println(voltage);
  if(voltage<=115){
    Red();
  }
  else if(voltage<=230){
    Blue();
  }
  else if(voltage<=345){
    Green();
  }
  else{
    Yellow();
  }

}
void Red(){
digitalWrite(red,HIGH);
digitalWrite(blue,LOW);
digitalWrite(green,LOW);
}
void Blue(){
digitalWrite(blue,HIGH);
digitalWrite(green,LOW);
digitalWrite(red,LOW);
}
void Green(){
digitalWrite(green,HIGH);
digitalWrite(blue,LOW);
digitalWrite(red,LOW);
}
void Yellow(){
digitalWrite(red,HIGH);
digitalWrite(green,HIGH);
digitalWrite(blue,LOW);
}