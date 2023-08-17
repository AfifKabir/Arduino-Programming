// C++ code
//Soil moisture sensor
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
  int moisture=analogRead(A0);
  Serial.println(moisture);
  if(moisture<=225){
    Red();
  }
  else if(moisture<=450){
    Blue();
  }
  else if(moisture<=675){
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