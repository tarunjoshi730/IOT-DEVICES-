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
  if (analogRead(A0)>500)
  {
  digitalWrite(9, LOW);
  }
  else
  {
  digitalWrite(9, HIGH);
  }
  delay(10);
  // Wait for 1000 millisecond(s)
}

/*

https://www.tinkercad.com/things/1FLNljRf30U-copy-of-automatic-street-light/editel?sharecode=XjmKttGhRw6iepFm28Cz6-fyNAJmu3rNjNYBHsYVHcs

*/