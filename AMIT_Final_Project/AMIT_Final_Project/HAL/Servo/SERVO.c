/*
 * SERVO.c
 *
 *  Created on: 2/10/2022
 *      Author: Loujayne Khalil
 */

#include "SERVO.h"

void tim1_pwm(void)				//initialize servo
{
	TCCR1A |= (1 << COM1A1) | (1 << COM1B1) | (1 << WGM11);
	TCCR1B |= (1 << WGM13) | (1 << WGM12) | (1 << CS11) | (1 << CS10);
	ICR1 = 4999;
}

float servo_write(uint8_t angle)	//set servo angle
{
	OCR1A = (int) ((angle * 2.78f) + 125);
}
