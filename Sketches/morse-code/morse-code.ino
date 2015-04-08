/*
  Morse_Code
  Blink on-board LED with "SOS" in Morse Code
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

#define DOT_TIME_MS  150

// HlHlHllllHHHlHHHlHHHllllHlHlHlllllll

// the loop routine runs over and over again forever:
void loop() {
  int k;
  
  // S
  for (k = 0; k < 3; k++) {
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(DOT_TIME_MS);
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
    delay(DOT_TIME_MS);
  }
  delay(3 * DOT_TIME_MS);      // inter-character pause
  // O
  for (k = 0; k < 3; k++) {
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(3 * DOT_TIME_MS);
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
    delay(DOT_TIME_MS);
  }
  delay(3 * DOT_TIME_MS);      // inter-character pause
  // S
  for (k = 0; k < 3; k++) {
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(DOT_TIME_MS);
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
    delay(DOT_TIME_MS);
  }
  delay(6 * DOT_TIME_MS);      // inter-word pause
}
