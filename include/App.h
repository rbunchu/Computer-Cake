/*
 * App.h
 *
 * Created: 6/16/2017 8:36:58 AM
 *  Author: mkamuda
 */ 


#ifndef APP_H_
#define APP_H_

#define F_CPU 20000000UL

#include <avr/io.h>
#include <avr/delay.h>
#include <stdlib.h>

class App
{
	public:
		static void Setup(void);
		static void Loop(void);	
};



#endif /* APP_H_ */