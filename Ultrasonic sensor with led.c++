int trigger =12;
int echo =13;
int led =8;

long duration =0;
int cm =0;
int inch = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  digitalWrite(trigger,LOW);
  digitalWrite(trigger,HIGH);
  digitalWrite(trigger,LOW);
  
  duration = pulseIn(echo, HIGH);
  cm = duration*0.34/2;
  inch = duration*0.0133/2;
  
  if(inch <40)
  {
    digitalWrite(led,HIGH);
  }
  else
    {
    digitalWrite(led,LOW);
  }
    if(inch <40)
  {
    Serial.print("INCHES:");
    Serial.println(inch);
      Serial.print("CM:");
    Serial.println(cm);
  }
  
  delay(500);
}

  

/* And the circuit Design is In this Link

https://www.tinkercad.com/things/lp2hCEjif8h-copy-of-ultrasonic-sensor-with-led/editel?sharecode=8MA_X1gKHKnvXObeLQMbZYTZoJmMsgfCJ9SXH_bgyPA

*/