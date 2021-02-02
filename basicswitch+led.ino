int ledpin=13,switchpin=8;
void setup()
{
  pinMode(switchpin, INPUT);
  pinMode(ledpin,OUTPUT);
}

void loop()
{
  if(digitalRead(switchpin)==HIGH)
     {
       digitalWrite(ledpin, HIGH);
     }
  else
     {
       digitalWrite(ledpin,LOW);
     }
}  

