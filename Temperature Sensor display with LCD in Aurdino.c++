#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
float value;
int tmp = A1;
void setup(){
	pinMode(tmp,INPUT);
}

void loop(){
	value = analogRead(tmp)*0.004882814;
  	value = (value - 0.5) * 100.0;
  	lcd.setCursor(0,1);
	lcd.print("Tmp:");
  	lcd.print(value);
  	delay(1000);
  	lcd.clear();
	
}

/* And the circuit Design is In this Link

https://www.tinkercad.com/things/2qHojNZKeBp-copy-of-temperature-sensor-display-with-lcd-in-aurdino/editel?sharecode=2bdS0C9vP1WRNTwAEo8AbGmJF1bIefPNytsC3BAC70w

*/