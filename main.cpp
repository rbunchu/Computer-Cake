/*
 * ComputerCake.cpp
 *
 * Created: 6/14/2017 1:46:48 PM
 * Author : mkamuda
 */ 


#define F_CPU 20000000UL

#include <avr/io.h>
#include <avr/delay.h>
#include <stdlib.h>


int main(void)
{
	DDRB = 0b000011;
	//Set 5V to PB1 to light up a power diode
	PORTB = 0b000010;
	
    /* Replace with your application code */
    while (1) 
    {
		for(int index = 0; index < rand() % 50 + 1; ++index)
		{
			PORTB |= 0b000001 << PINB0;
			_delay_ms(10);
			PORTB ^= 0b000001 << PINB0;
		}
		//Delay between blinks
		int waitTime = rand() % 100 + 10;
			
		for(int index = 0; index < waitTime; ++index)
		{
			_delay_ms(1);
		}
    }
}

