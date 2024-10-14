int Led1=13;
int Led2=9;

void setup() {
  
  // put your setup code here, to run once:
  
pinMode(Led1,OUTPUT);
pinMode(Led2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(Led1,HIGH);
digitalWrite(Led2,HIGH);
delay(5000);
digitalWrite(Led1,LOW);
digitalWrite(Led2,LOW);
delay(500);


}
