// C++ code
//Motor control
//int p=12,n=13;
int p=10,n=11;
void setup()
{
  pinMode(p,OUTPUT);
  pinMode(n,OUTPUT);
}

void loop()
{
 /* digitalWrite(p, HIGH);
  digitalWrite(n, LOW);
  delay(2000);
  digitalWrite(n, HIGH); //Direction control
  digitalWrite(p, LOW);
  delay(2000);*/
  analogWrite(p, 120);//Speed control + direction control
  analogWrite(n, 0);
  delay(2000);
  analogWrite(n, 120);
  analogWrite(p, 0);
  delay(2000);
  
}