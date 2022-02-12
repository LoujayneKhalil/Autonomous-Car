/*
 * ultrasonic.h
 *
 *  Created on: 2/10/2022
 *      Author: Loujayne Khalil
 */

#ifndef HAL_ULTRASONIC_ULTRASONIC_H_
#define HAL_ULTRASONIC_ULTRASONIC_H_

#include<avr/io.h>
#include <avr/interrupt.h>
#include<string.h>
#include <stdlib.h>
#define F_CPU 16000000UL
#include <util/delay.h>
#include "../../MCAL/timer/timer.h"
#include "../../HAL/LCD/LCD.h"

#define   TRIGER_DDR    DDRD
#define   ECHO_DDR      DDRD
#define   TRIGER_PORT   PORTD
#define   ECHO_PULLUP   PORTD
#define   TRIGER        0
#define   ECHO          2

//	API functions

void ultrasonic_init(void);
void enable_ex_interrupt(void);
void ultra_triger(void);
extern char *itoa(int __val, char *__s, int __radix);

#endif /* HAL_ULTRASONIC_ULTRASONIC_H_ */
