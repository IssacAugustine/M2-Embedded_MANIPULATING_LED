#include "led.h"
#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>



void switch_off()
{
       PORTB &= (~(1<<PINB2))&(~(1<<PINB3));

}
