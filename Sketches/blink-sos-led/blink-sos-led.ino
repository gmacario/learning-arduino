/*
  Blink
  Turns a LED on and off for some time, repeatedly.
 
  This example code is in the public domain.
 */
 
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

int tick = 200;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

void dits(int n)
{
  for (int k = 0; k < n; k++) {
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(tick);
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
    delay(tick);
  }
}

void dahs(int n)
{
  for (int k = 0; k < n; k++) {
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(3 * tick);
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
    delay(tick);
  }
}

// the loop routine runs over and over again forever:
void loop() {
  
//  int k = 0;
//  while (true) {
//    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
//    delay((k + 1) * 50);       // wait for some time
//    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
//    delay((16 - k) * 50);      // wait for some remaining time
//    k = (k + 1) % 16;
//  }

  dits(3);
  delay(2 * tick);
  dahs(3);
  delay(2 * tick);
  dits(3);
  delay(10 * tick);
}
