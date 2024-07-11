unsigned const LED = 8;
unsigned const BUTTON = 7;
unsigned int bState = 0;

void setup()
{
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{ 
  if(digitalRead(BUTTON) == 1) { 
  	digitalWrite(LED, HIGH);
    bState += 1;
    if(bState % 2 == 0){
      digitalWrite(LED, LOW);
      bState = 0;
    }
  	delay(100);
  }
  
}

/*

https://www.tinkercad.com/things/jfdyiquXgRG-copy-of-arduino-led-onoff-control-with-one-push-button/editel?sharecode=2vigjNlfO1ab847jhM6uwncUuqrI2C8sHb28S-zlBAo

*/