/*
 * Glow a RGB LED on a Spark Core
 * Adapted from https://learn.adafruit.com/rgb-led-strips/example-code
 */

int led_r = A4;
int led_g = A5;
int led_b = A6;

int FADESPEED = 5;     // make this higher to slow down

void setup() {
    Serial.begin(9600);
    pinMode(led_r, OUTPUT);
    pinMode(led_g, OUTPUT);
    pinMode(led_b, OUTPUT);
}

void loop() {
  int r, g, b;

  Serial.println("fade from blue to violet");
  for (r = 0; r < 256; r++) {
    analogWrite(led_r, r);
    delay(FADESPEED);
  }
  Serial.println("fade from violet to red");
  for (b = 255; b > 0; b--) {
    analogWrite(led_b, b);
    delay(FADESPEED);
  }
  Serial.println("fade from red to yellow");
  for (g = 0; g < 256; g++) {
    analogWrite(led_g, g);
    delay(FADESPEED);
  }
  Serial.println("fade from yellow to green");
  for (r = 255; r > 0; r--) {
    analogWrite(led_r, r);
    delay(FADESPEED);
  }
  Serial.println("fade from green to teal");
  for (b = 0; b < 256; b++) {
    analogWrite(led_b, b);
    delay(FADESPEED);
  }
  Serial.println("fade from teal to blue");
  for (g = 255; g > 0; g--) {
    analogWrite(led_g, g);
    delay(FADESPEED);
  }
}
