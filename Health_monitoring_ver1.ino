#include<lm35.h>

lm35 temps(1);

void setup() {
 Serial.begin(9600);
}

void loop() {

 temps.MeasureTemp();
 Serial.print(temps.TempInCelcius + 20);
 Serial.println("C");
delay(500);
}
