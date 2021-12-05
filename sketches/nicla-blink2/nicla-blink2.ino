#include "Nicla_System.h"

#define BLINK_RAINBOW 1

void setup() {
  nicla::begin();
  nicla::leds.begin();
}

#if defined(BLINK_RAINBOW)
typedef struct {
  unsigned char r;
  unsigned char g;
  unsigned char b;
} RGB_type;

static RGB_type colors[] = {
  {255,   0,   0},  // Red
  {  0, 255,   0},  // Green
  {  0,   0, 255},  // Blue
  {255, 255, 125},  // Raspberry
  {  0, 255, 255},  // Cyan
  {255,   0, 255},  // Magenta
  {255, 255,   0},  // Yellow
  {255, 255, 255}   // White
};
#define NUM_COLORS (sizeof(colors) / sizeof(RGB_type))

static int ix_color = 0;
#endif /* defined(BLINK_RAINBOW) */

void loop() {
#if defined(BLINK_RAINBOW)
  int r, g, b;
  r = colors[ix_color].r;
  g = colors[ix_color].g;
  b = colors[ix_color].b;
  nicla::leds.setColor(r, g, b);
  delay(1000);
  ix_color = (ix_color + 1) % NUM_COLORS;
#else
  nicla::leds.setColor(green);
  delay(1000);
  nicla::leds.setColor(off);
  delay(1000);
#endif
}
