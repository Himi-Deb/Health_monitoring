#include<lm35.h>
int PulsePin = 0;
int LED13 = 13;
int Signal;
int Threshold = 1500;

lm35 temps(1);

void setup() {
 Serial.begin(9600);
 pinMode(LED13, OUTPUT);
}

void loop() {
 Signal = analogRead(PulsePin);
 Serial.print("BPM is : "); 
 Serial.println(Signal);
  if(Signal > Threshold){
    digitalWrite(LED13, HIGH);    
    }else{
      digitalWrite(LED13, HIGH);
      }
 temps.MeasureTemp();
 Serial.print("Temperature is : ");
 Serial.print(temps.TempInCelcius + 20);
 Serial.println("C");
delay(500);

}
