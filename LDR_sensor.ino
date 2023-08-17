// C++ code
//LDR sensor 
int LED=9;
void setup()
{
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
}

void loop()
{
  int voltage=analogRead(A0);
  Serial.println(voltage);
  if(voltage<=200){
    digitalWrite(LED,HIGH);
   }
  else{
    digitalWrite(LED,LOW);
  }
    
}