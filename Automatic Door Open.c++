// C++ code
#include<Servo.h>
int inputPin = 7;
int pirState = LOW;
int val = 0;

Servo myservo;

int pos = 0;

//
void setup()
{
  pinMode(inputPin, INPUT);
  myservo.attach(8);
  Serial.begin(9600);
}

void loop()
{
  val = digitalRead(inputPin);
  if (val == HIGH)
  {
    if(pirState == LOW)
    {
      Serial.println("MOTICON DETECTED !");

     for(pos =0;pos >=180; pos+=1)
      {
        myservo.write(pos);
        delay(15);
     }
        pirState = HIGH;
    }
  }
  else
  {
        if(pirState == HIGH)
        {
          Serial.println("MOTION ENDED !");
          
          for(pos = 180;pos>=0; pos -= 1)
           myservo.write(pos);
        delay(15);
        }
    pirState = LOW;
  }
}



/* And the circuit Design is In this Link

https://www.tinkercad.com/things/bneWkQVi3uI-copy-of-automatic-door-open/editel?sharecode=EBD5rGXPaG0BmBSWLU7TicYBIX2mEB-veYsqpV2uPOw

*/