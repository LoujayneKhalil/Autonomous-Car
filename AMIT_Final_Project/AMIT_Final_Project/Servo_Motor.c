/*
 * Servo_Motor.c
 *
 *  Created on: 2/9/2022
 *      Author: Loujayne Khalil
 */


#include "Servo_Motor.h"

// PWM initialization
void ServoMotor_Initialization(void)
{
	//Define Direction of OC1A
	SET_BIT(DDRD, PD5);
	//Choose mode of the timer (Input capture mode)
	SET_BIT(TCCR1B, WGM13);SET_BIT(TCCR1B, WGM12);SET_BIT(TCCR1A, WGM11);CLR_BIT(TCCR1A, WGM10);
	//Choose non-inverting mode
	SET_BIT(TCCR1A, COM1A1);CLR_BIT(TCCR1A, COM1A0);
	//Choose Pre-scaler
	SET_BIT(TCCR1B, CS12);CLR_BIT(TCCR1B, CS11);CLR_BIT(TCCR1B, CS10);
	//Set new value for top
	ICR1 = 625;
}
void ServoMotor_Rotate(uint8_t angle)
{
	OCR1A = ((angle * ICR1) / 100) - 1;
}