void setup(){
  pinMode(8,OUTPUT);//red
  pinMode(10,OUTPUT);//yellow
  pinMode(12,OUTPUT);//green
}

void loop(){
  digitalWrite(8,HIGH);
  delay(1000);
  
  digitalWrite(10,HIGH);
  delay(1000);
  
  digitalWrite(10,LOW);
  digitalWrite(12,LOW);
  
  digitalWrite(12,HIGH);
  delay(100);
  digitalWrite(12,LOW);
  delay(100);
  digitalWrite(12,HIGH);
  delay(100);
  digitalWrite(12,LOW);
  delay(100);
}