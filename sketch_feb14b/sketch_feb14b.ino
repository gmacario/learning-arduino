/*
  Turns on an LED for one seconds, then off for one second, repeat.

  This example is adapted from Examples > 01.Basics > Blink

 */

// On the Arduino UNO the onboard LED is attached to digital pin 13
#define LED 13

void setup() {
  // put your setup code here, to run once:

  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(LED, HIGH);     // turn the LED on
  delay(1000);
  digitalWrite(LED, LOW);      // turn the LED off
  delay(1000);
}
