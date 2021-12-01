#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>


#include "led.h"


void peripheral_init(void)
{
	DDRB |= (1 << DDB2)|(1<<DDB3); //initial
	DDRB &= ~(1 << DDB0);
	//intialisation of ports
}

int main(void)
{
	
	peripheral_init(); //to intialise port
	while (1)
	{
		
		if (!(PINB&(1<<PINB0)))
		{
			
			led_on(); //if switch is on
		}
		else
		{
			led_off(); //if switch is off
		}

	}
}
