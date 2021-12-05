int led_r = A4;
int led_g = A5;
int led_b = A6;

void setup() {
    pinMode(led_r, OUTPUT);
    pinMode(led_g, OUTPUT);
    pinMode(led_b, OUTPUT);
}

void loop() {
    int value_r, value_g, value_b;

    value_r = random (0, 256);
    value_g = random (0, 256);
    value_b = random (0, 256);

    analogWrite(led_r, value_r);
    analogWrite(led_g, value_g);
    analogWrite(led_b, value_b);
    delay(2000);
}
