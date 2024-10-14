 const int Led1=13;

void setup() {
  
  // put your setup code here, to run once:
  
  pinMode(Led1,OUTPUT);
   Serial.begin(9600);

}
void loop()
{
  // put your main code here, to run repeatedly:
  
   if(Serial.available() > 0)
   {
    char incomingByte = Serial.read();
     if (incomingByte == 'H')
     {
      digitalWrite(Led1,HIGH);
     }
     else if(incomingByte == 'L')
     {
      digitalWrite(Led1,LOW);
     }
   }
}
