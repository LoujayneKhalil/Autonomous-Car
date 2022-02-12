/*
 * SERVO.h
 *
 *  Created on: 2/10/2022
 *      Author: Loujayne Khalil
 */

#ifndef HAL_SERVO_SERVO_H_
#define HAL_SERVO_SERVO_H_

#include <avr/io.h>
#include <avr/interrupt.h>

void tim1_pwm(void);
float servo_write(uint8_t angle);

#endif /* HAL_SERVO_SERVO_H_ */
