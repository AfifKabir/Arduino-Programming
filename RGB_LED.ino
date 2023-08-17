// C++ code
//RGB LED
int red=13,blue=12,green=11;
void setup()
{
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop()
{
 //RGBblink();
 //yellow_blink();
 //magenta_blink();
 //cyan_blink();
 //white_blink();
}
void RGBblink(){
  digitalWrite(red, HIGH);
  delay(1000);
  digitalWrite(red, LOW);
  delay(1000); 
  digitalWrite(green, HIGH);
  delay(1000);
  digitalWrite(green, LOW);
  delay(1000);
  digitalWrite(blue, HIGH);
  delay(1000);
  digitalWrite(blue, LOW);
  delay(1000);

}
void yellow_blink(){
  digitalWrite(red, HIGH);
  digitalWrite(green, HIGH);
  delay(1000);
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  delay(1000);
}
void magenta_blink(){
  digitalWrite(red, HIGH);
  digitalWrite(blue, HIGH);
  delay(1000);
  digitalWrite(red, LOW);
  digitalWrite(blue, LOW);
  delay(1000);
}
void cyan_blink(){
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
  delay(1000);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  delay(1000);
}
void white_blink(){
  digitalWrite(red, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
  delay(1000);
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  delay(1000);

}
