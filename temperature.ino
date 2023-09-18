int t=0;
void setup()
{
  pinMode(t, INPUT);
  Serial.begin(9600);
  
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
  
}