/*
 * main.c
 *
 * Created: 7/1/2022 9:00:45 PM
 *  Author: Mohamed Hosam
 */ 

#include <xc.h>
#include <avr/io.h>  // To use the terms used in avr programming.
#include <util/delay.h> // To use the delay function.

int main(void)
{
	DDRD = 0b10000000; // Port D7 as output pin.
	PORTD= 0b00000000; // Port D7 is given low (sink pin).
	
    while(1)
    {
        PORTD = 0b10000000; // Port D7 is given high.
		_delay_ms(10000); // delay function.
		PORTD = 0b00000000; // Port D7 is given low.
		_delay_ms(10000); // delay function.
    }
}