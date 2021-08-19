#include <led_control.h>

#define LED_0 12
LedControl control;

void setup() {
  control(LED_0); // Define led pin
}

void loop() {
  control.led_on();
  delay(1000);
  control.led_off();
  delay(1000);
}
