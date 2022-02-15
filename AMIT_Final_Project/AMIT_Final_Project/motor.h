/*
 * motor.h
 *
 *  Created on: 2/8/2022
 *      Author: Loujayne Khalil
 */

#ifndef MOTOR_H_
#define MOTOR_H_

#include "STD_Types.h"
#include "Bit_Math.h"
#include "Configuration.h"

#endif /* MOTOR_H_ */

/*Functions prototypes*/
void MOTOR_init(void);
void FORWARD(void);
void BACKWARD(void);
void LEFT(void);
void RIGHT(void);
void STOP(void);

/*MOTOR PINS*/
#define MOTOR_IN1_PIN PB3
#define MOTOR_IN2_PIN PB4
#define MOTOR_IN1_PORT PORTC
#define MOTOR_IN2_PORT PORTC
#define MOTOR_IN1_PORT_DIR DDRC
#define MOTOR_IN2_PORT_DIR DDRC


#define MOTOR_IN3_PIN PB5
#define MOTOR_IN4_PIN PB6
#define MOTOR_IN3_PORT PORTC
#define MOTOR_IN4_PORT PORTC
#define MOTOR_IN3_PORT_DIR DDRC
#define MOTOR_IN4_PORT_DIR DDRC


