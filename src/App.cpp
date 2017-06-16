/*
 * App.cpp
 *
 * Created: 6/16/2017 8:38:05 AM
 *  Author: mkamuda
 */ 

#include <App.h>

void App::Setup()
{
	//Set the PB0 and PB1 to OUTPUT
	DDRB = 0b000001;
	PORTB = 0b000000;	
}

void App::Loop()
{
	for(int index = 0; index < rand() % 50 + 1; ++index)
	{
		PORTB = 0b000001;
		_delay_ms(10);
		PORTB = 0b000000;
	}
	//Delay between blinks
	int waitTime = rand() % 100 + 10;
	
	for(int index = 0; index < waitTime; ++index)
	{
		_delay_ms(1);	
	}
}