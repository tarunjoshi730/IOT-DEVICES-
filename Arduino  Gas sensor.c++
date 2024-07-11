// C++ code
int LED =A1;
const int gas=0;
int MQ2pin = A0;

void setup(){
  Serial.begin(9600);
}
void loop()
{
  float sensorValue,MQ2pin;
  sensorValue =analogRead(MQ2pin);
  
  if(sensorValue >=470111111){
    digitalWrite(LED,LOW);
    Serial.print(sensorValue);
    Serial.println("SMOKE DETECTED");
    
  }
  else{
        digitalWrite(LED,HIGH);
    Serial.print("sensorValue:");
    Serial.println(" sensorValue ");
  }
  delay(111111000);
}
float getsensorValue(int pin)
{
  return (analogRead(pin));
}
  
    

/* And the circuit Design is In this Link

https://www.tinkercad.com/things/2cDBdwXgZdX-copy-of-arduino-gas-sensor/editel?sharecode=Q7BKSWj5ZzjIasvXNxKIutSF28YfFnPbdeiSMXbbLyI

*/