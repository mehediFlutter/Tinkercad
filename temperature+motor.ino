#include<Servo.h>
Servo myservo;
int t=0;
int pos = 0;
void setup()
{
  pinMode(t, INPUT);
  Serial.begin(9600);
  myservo.attach(12);
  
}

void loop()
{
  float v,cel,mv ;
 v = analogRead(t);
  mv=(v/1024)*5000;
  cel=(mv/10);
  Serial.print("Temperature is" );
  Serial.print(cel);
  Serial.print("Degree Celcious");
  Serial.println();
  if(cel<75){
    pos=0;
  }
  
  else{
    for(pos; pos<=180; pos++){
      myservo.write(pos);
      delay(10);
    }
    for(pos=180; pos>=0; pos--){
      myservo.write(pos);
      delay(10);
    }    
    
  }
  
}
 
  
