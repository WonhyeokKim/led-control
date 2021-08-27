# led_control
This is arduino led control library

## How to use this library
Unzip realese file and put in unziped folder `%USERPROFILE%\Documents\Arduino\libraries\` (If you not exist this folder, please create it).<br/>
If you complete upper task you'll write code
```c
#include <led_control.h>
...
```

## Example
[Example Code](https://github.com/WonhyeokKim/led_control/blob/master/example/main.ino)

## Documentation
### This is default using code
```c
#include <led_control.h>

void setup() {}

void loop() {
  LedControl led = LedControl(12);
  
  led.led_on();
  delay(1000);
  led.led_off();
}
```
- LedControl(pin)<br/>
This is define led pin class. If you wanna define pin, you'll input class instance in number.

- led_on()<br/>
This is turn on led pin.

- led_off()<br/>
This is turn off led pin.

### Spectrom code
```c
#include <led_control.h>

#define START_PIN 7
#define END_PIN 12

#define BUTTON_0 2
#define BUTTON_1 3

void setup() {
  Serial.begin(9600);
}

void loop() {
  LedSpectrom led = LedSpectrom(START_PIN, END_PIN);
  led.led_spectrom(BUTTON_0, 500, true);
  led.led_spectrom(BUTTON_1, 500, false);
}
```

- LedSpectrom(minimum_pin, maximum_pin)<br/>
This is define led pin class. If you wanna define pin, you'll input class instance in number.
but their included loop function. `minimum_pin..maximumpin`

- led_spectrom(int button_pin, int delay, bool upper)<br/>
This is turn on led with spectrom.
