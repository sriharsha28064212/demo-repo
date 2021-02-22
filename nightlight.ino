int sensepin = 0;
int ledpin = 9;
void setup()
{
  pinMode(ledpin, OUTPUT);
}
void loop()
{
  int val=analogRead(sensepin);
  if(val<800) 
    digitalWrite(ledpin, HIGH);
  else
    digitalWrite(ledpin,LOW);
} 
  
