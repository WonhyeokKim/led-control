# led_control
This is arduino led control library

## How to use this library
Unzip realese file and put in unziped folder `%USERPROFILE%\Documents\Arduino\libraries\` (If you not exist this folder, please create it).<br/>
If you complete upper task you'll write code
```c
#include <led_control.h>
...
```

## Documentation
This is default code
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
