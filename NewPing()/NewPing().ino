//Alden Dent
//NewPing()

#include "Arduino.h"
#include <NewPing.h>

#define TRIGGER_PIN  3
#define ECHO_PIN     2
#define MAX_DISTANCE 100


NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
 
void setup() {
  Serial.begin(9600);
}
 
void loop() {
  delay(50);
  Serial.print("Ping: ");
  Serial.print(sonar.ping_cm());	//Print distance in cm on a LCD
  Serial.println("cm");
  analogWrite(9, sonar.ping_cm()*6); //Brighten or dim an LED
}