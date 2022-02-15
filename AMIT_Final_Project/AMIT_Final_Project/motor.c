/*
 * motor.c
 *
 *  Created on: 2/8/2022
 *      Author: Loujayne Khalil
 */
#include "motor.h"

/* Functions Definitions */
void MOTOR_init(void) 
{
	/*make MOTOR IN1, IN2 , IN3 and IN4 output */
	SET_BIT(MOTOR_IN1_PORT_DIR, MOTOR_IN1_PIN);
	SET_BIT(MOTOR_IN2_PORT_DIR, MOTOR_IN2_PIN);

	SET_BIT(MOTOR_IN3_PORT_DIR, MOTOR_IN3_PIN);
	SET_BIT(MOTOR_IN4_PORT_DIR, MOTOR_IN4_PIN);

}

void FORWARD(void) 
{
	/*set rotation direction of motor*/
	SET_BIT(MOTOR_IN1_PORT, MOTOR_IN1_PIN);		    // HIGH
	CLR_BIT(MOTOR_IN2_PORT, MOTOR_IN2_PIN);			// LOW

	SET_BIT(MOTOR_IN3_PORT, MOTOR_IN3_PIN);			 // HIGH
	CLR_BIT(MOTOR_IN4_PORT, MOTOR_IN4_PIN);			 // LOW
}

void BACKWARD(void) 
{
	/*set rotation direction of motor*/
	CLR_BIT(MOTOR_IN1_PORT, MOTOR_IN1_PIN);			// LOW
	SET_BIT(MOTOR_IN2_PORT, MOTOR_IN2_PIN);			// HIGH

	CLR_BIT(MOTOR_IN3_PORT, MOTOR_IN3_PIN);			// LOW
	SET_BIT(MOTOR_IN4_PORT, MOTOR_IN4_PIN);			// HIGH

}
void LEFT(void)
 {
	/*set rotation direction of motor*/
	SET_BIT(MOTOR_IN1_PORT, MOTOR_IN1_PIN); // HIGH
	CLR_BIT(MOTOR_IN2_PORT, MOTOR_IN2_PIN); // LOW

	CLR_BIT(MOTOR_IN3_PORT, MOTOR_IN3_PIN); // LOW
	CLR_BIT(MOTOR_IN4_PORT, MOTOR_IN4_PIN); // LOW
}

void RIGHT(void) 
{
	/*set rotation direction of motor*/
	CLR_BIT(MOTOR_IN1_PORT, MOTOR_IN1_PIN); // LOW
	CLR_BIT(MOTOR_IN2_PORT, MOTOR_IN2_PIN); // LOW

	SET_BIT(MOTOR_IN3_PORT, MOTOR_IN3_PIN); // HIGH
	CLR_BIT(MOTOR_IN4_PORT, MOTOR_IN4_PIN); // LOW

}
void STOP(void) {
	/*set rotation direction of motor*/
	CLR_BIT(MOTOR_IN1_PORT, MOTOR_IN1_PIN); // LOW
	CLR_BIT(MOTOR_IN2_PORT, MOTOR_IN2_PIN); // LOW 

	CLR_BIT(MOTOR_IN3_PORT, MOTOR_IN3_PIN); // LOW
	CLR_BIT(MOTOR_IN4_PORT, MOTOR_IN4_PIN); // LOW

}

