
 float j;

void setup() {
  
  // put your setup code here, to run once:
  
  Serial.begin(9600);
}

void loop() {
  
  // put your main code here, to run repeatedly:
     for(float j=0;j<360.00;j=j+2)
    {
   Serial.print(sin(j*(PI/180.00)));
   Serial.print("  ");
   Serial.println(cos(j*(PI/180.00)));
    }
}
