#include "Arduino.h"
#include "led_control.h"

LedControl::LedControl(int led_pin) {
	pinMode(led_pin, OUTPUT);
	pin = led_pin;
}

void LedControl::button_led(int button_pin) {
	pinMode(button_pin, INPUT_PULLUP);
	if (digitalRead(button_pin) != 1) {
		digitalWrite(pin, 1);
	} else {
		digitalWrite(pin, 0);
	}
}

void LedControl::button_led(int button_pin, int delay_sec) {
	pinMode(button_pin, INPUT_PULLUP);
	if (digitalRead(button_pin) != 1) {
		digitalWrite(pin, 1);
		delay(delay_sec * 1000);
		
		digitalWrite(pin, 0);
		delay(delay_sec * 1000);
	} else {
		digitalWrite(pin, 0);
	}
}

void LedControl::led_on() {
	digitalWrite(pin, 1);
}

void LedControl::led_off() {
	digitalWrite(pin, 0);
}
