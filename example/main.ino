#include <led_control.h>

#define LED 12

void setup() {}

void loop() {
  LedControl control = LedControl(LED) // Define led pin
  control.led_on();
  delay(1000);
  control.led_off();
  delay(1000);
}
