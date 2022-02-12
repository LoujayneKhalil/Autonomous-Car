/*
 * main.c
 *
 *  Created on: 2/12/2022
 *      Author: Loujayne Khalil
 */
#define F_CPU 16000000UL

#include "MCAL/DIO/Dio.h"
#include "HAL/LCD/LCD.h"
#include "MCAL/TIMER/timer.h"
#include "HAL/Servo/SERVO.h"
#include "HAL/Ultrasonic/ultrasonic.h"
#include "HAL/DC_Motor/DC.h"

extern uint32_t distance;

int main() {
	Dio_init();				//initialize DIO
	lcd_init();				//initialize LCD
	ultrasonic_init();		//initialize ultrasonic
	tim1_pwm();				//initialize servo
	sei();

	//initial states for start up
	Dio_write(SS, HIGH);		//set H enable 1 (named according to the name of pin on board)
	Dio_write(MOSI, HIGH);		//set H enable 2 (named according to the name of pin on board)
	servo_write(90);			//set servo initial angle
	_delay_ms(500);

	while (1) {
		ultra_triger();			//take reading of ultrasonic and print on LCD
		_delay_ms(15);
		servo_write(90);
		forward();
		_delay_ms(100);

		if (distance <= 30) {
			stop();
			_delay_ms(100);
			servo_write(45);		//look left
			_delay_ms(500);
			ultra_triger();
			_delay_ms(500);
			if (distance <= 30) {
				servo_write(135);	//look right
				_delay_ms(500);
				ultra_triger();
				_delay_ms(500);
				if (distance <= 30) {
					servo_write(90);
					_delay_ms(100);
					backward();
					_delay_ms(1000);
					right();
					_delay_ms(250);
					stop();
					_delay_ms(1000);
				} else {
					left();
					_delay_ms(250);
					stop();
					servo_write(90);
					_delay_ms(1000);
				}
			} else {
				right();
				_delay_ms(250);
				stop();
				servo_write(90);
				_delay_ms(1000);
			}
		}
	}
	return 0;
}
