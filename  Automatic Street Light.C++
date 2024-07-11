// C++ code
//
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop()
{
  Serial.println(analogRead(A0));
  if (analogRead(A0) > 1000) {
    digitalWrite(9, HIGH);
  } else {
    digitalWrite(9, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}


/* And the circuit Design is In this Link
https://www.tinkercad.com/things/iifJKNyjKHz-copy-of-automatic-street-light/editel?sharecode=oJsKVcwlfJMheEADX0s6zfU79Z4yBxsOxCcWbUjLQNU
*/