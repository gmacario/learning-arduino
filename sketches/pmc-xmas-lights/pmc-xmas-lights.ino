/* pmc-xmax-lights.ino

  Based on Machine Control - Digital Output Example

  The circuit:
   - Portenta H7
   - Machine Control
  This example code is in the public domain.
*/

#include <Arduino_MachineControl.h>

using namespace machinecontrol;

void setup() {
  Serial.begin(9600);
  // The loop starts only when the Serial Monitor is opened.
  //while (!Serial);

  //Set over current behavior of all channels to latch mode:
  digital_outputs.setLatch();
  
  //At startup set all channels to OPEN
  digital_outputs.setAll(0);
}

static int bit_count = 0;
byte var = 1;

void loop() {
#if 1
  uint8_t value = 1 << bit_count;
  Serial.print("digital_outputs.setAll(value=");
  Serial.print(value);
  Serial.println(")");
  digital_outputs.setAll(value);
  delay(100);

  if (var == 1)
    bit_count++;
  else
    bit_count--;
  
#else
  Serial.println("DIGITAL OUT:");

  // Toggle each channel for 1 s, one by one

  digital_outputs.set(1, HIGH);
  Serial.print("CH1 is CLOSED for 1 s...");
  delay(1000);
  digital_outputs.set(1, LOW);
  Serial.println("now is OPEN.");

  Serial.println();
  delay(1000);
#endif
}
