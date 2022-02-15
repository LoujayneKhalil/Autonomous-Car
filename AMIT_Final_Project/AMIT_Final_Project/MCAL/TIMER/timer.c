/*
 * timer.c
 *
 *  Created on: 2/7/2022
 *      Author: Loujayne Khalil
 */

#include "timer.h"

void timer0_init(void)	//Initializes Timer0 with 1024 prescaler.
{
	/* Disable Timer 0 */
	TCCR0 = DISABLE_MODULE_VALUE;
	/* Setting pre scaler */
	TCCR0 = (PRESCLR1_VALUE);
	/* Initializing the timer with zero */
	TCNT0 = ZER0_INITIALIZER;
	/* Timer overflow interrupt enable*/
	TIMSK |= (1 << TOIE0);

	return;
}
