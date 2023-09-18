int trig = 4;
int echo = 2;
void setup(){
  pinMode(trig , OUTPUT);
  pinMode(echo , INPUT);
  Serial.begin(9600);
}

void loop(){
  long duration, cm,in ;
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo , HIGH);
  cm=(duration/2)/29.1;
  in = (cm/2.4);
  Serial.print(cm);
  Serial.println(" CM");
  Serial.print(in);
  Serial.println(" Inches");
  delay(1000);
}