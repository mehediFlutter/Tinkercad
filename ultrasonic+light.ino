int trig = 1;
int echo =2;
int pin = 8;
void setup(){
  pinMode(trig,OUTPUT);
  pinMode(echo , INPUT);
  pinMode(pin,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  long duration, cm,in;
  digitalWrite(trig , LOW);
  delayMicroseconds(2);
  digitalWrite(trig , HIGH);
  delayMicroseconds(10);
  digitalWrite(trig , LOW);
  
  duration = pulseIn(echo,HIGH);
  cm = (duration/2)/29.1;
    in = (cm/2.4);
  Serial.print("Distance ");
  Serial.println(cm);
  Serial.print(in);
  Serial.println(" Inches");
  
  if(cm>200){
    digitalWrite(pin , HIGH);
    
  } 
}