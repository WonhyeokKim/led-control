#include <led_control.h>

#define LED 12

#define S_LED 7
#define E_LED 12

#define BUTTON_0
#define BUTTON_1

void setup() {}

void loop() {
  LedControl control = LedControl(LED) // Define led pin
  control.led_on();
  delay(1000);
  control.led_off();
  delay(1000);
  
  LedSpectrom spectrom = LedSpectrom(S_LED, E_LED);
  spectrom.led_spectrom(BUTTON_0, 500, true);
  spectrom.led_spectrom(BUTTON_1, 500, false);
}
