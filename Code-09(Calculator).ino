 float num1,num2;
 char o;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   if(Serial.available() > 0)
   {
   float  num1=Serial.parseFloat();
   char  o=Serial.read();
   float num2=Serial.parseFloat();
   
       
   
    switch(o)
    {
       Serial.print(num1);
       Serial.print(o);
       Serial.print(num2);
       Serial.print("=");
  
   
      case '+':
      Serial.println(num1+num2);
      break;
      case '-':
      Serial.println(num1-num2);
      break;
      case '*':
      Serial.println(num1*num2);
      break;
      case '/':
      if(num2==0)
      Serial.println("error");
      else
      Serial.println(num1/num2);
      break;
   }

   }
}
