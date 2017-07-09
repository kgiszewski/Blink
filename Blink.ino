#include "sounds.h"  

SoundPlayer soundPlayer;
#define PIN_3 3

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(PIN_3, OUTPUT);
}

void loop() {
  soundPlayer._1up();
  digitalWrite(LED_BUILTIN, HIGH);   // turn the RED LED on
  delay(100);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the RED LED off by making the voltage LOW
  delay(100); 
  
  digitalWrite(PIN_3, HIGH);   // turn the GREEN LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(PIN_3, LOW);    // turn the GREEN LED off by making the voltage LOW
  delay(100); 
  
  delay(2000);  // pause 2 seconds
}
