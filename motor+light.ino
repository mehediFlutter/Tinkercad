#include<Servo.h>
Servo myservo;
int pos = 0;
int pin=2;

void setup(){
  myservo.attach(1);
  pinMode(pin, OUTPUT);
  
}

void loop(){
  for(pos; pos<=180; pos++){
    myservo.write(pos);
    digitalWrite(pin, HIGH);
        delay(100);
    
    digitalWrite(pin, LOW);
       delay(100);
  }
  for(pos=180; pos>=0; pos--){
    myservo.write(pos);
    digitalWrite(pin,HIGH);
    delay(100);
    
      digitalWrite(pin,LOW);
    delay(100);
    
    
  }
 // digitalWrite(pin, HIGH);
 // delay(100.5); // Wait for 1000 millisecond(s)
 // digitalWrite(pin, LOW);
  //delay(100.5); // Wait for 1000 millisecond(s)
}