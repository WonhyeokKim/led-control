#ifndef LED_CONTROL_H
#define LED_CONTROL_H

#include "Arduino.h"

class LedControl {
	private:
		int pin;
		String prefix;
	public:
		LedControl(int led_pin);
	
		void button_control(int button_pin);
		void button_control(int button_pin, int delay_sec);
		
		void pot_control(int pot_pin, int mode, bool debug);
		
		void led_on();
		void led_off();
};

class LedSpectrom {
    private:
        int minimum_pin;
        int maximum_pin;
        
        String prefix;
    public:
        LedSpectrom(int minimum_led_pin, int maximum_led_pin);
        void led_spectrom(int button_pin, int delay, bool upper);
};
#endif
