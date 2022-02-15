/*
 * main.c
 *
 *  Created on: 2/12/2022
 *      Author: Loujayne Khalil
 */
#define F_CPU 8000000UL

#include "MCAL/DIO/Dio.h"
#include "DIO.h"
#include "HAL/LCD/LCD.h"
#include "MCAL/timer/timer.h"
#include "HAL/Ultrasonic/ultrasonic.h"
#include "motor.h"
#include "Servo_Motor.h"

extern uint32_t distance;

int main() {
	Dio_init();			            	//initialize DIO
	lcd_init();			            	//initialize LCD
	ultrasonic_init();	                //initialize ultrasonic
	ServoMotor_Initialization();       	//initialize servo
	MOTOR_init();                       //initialize DC Motor
	sei();


	//initial states for start up
	Dio_write(SS, HIGH);					//set H enable 1 (named according to the name of pin on board)
	Dio_write(MOSI, HIGH);					//set H enable 2 (named according to the name of pin on board)
    ServoMotor_Rotate(Angle_N90);			//set servo initial angle
	_delay_ms(1500);
	

	while (1) {
	
		ultra_triger();			//take reading of ultrasonic and print on LCD
		_delay_ms(15);
		ServoMotor_Rotate(Angle_N90);
		_delay_ms(1000);
		FORWARD();
		_delay_ms(100);

		if (distance <= 30) {
			STOP();
			_delay_ms(500);
			ServoMotor_Rotate(Angle_N90);		//look left
			_delay_ms(2500);
			ultra_triger();
			_delay_ms(100);
			if (distance <= 30) {
				ServoMotor_Rotate(45);	//look right
				_delay_ms(500);
				ultra_triger();
				_delay_ms(500);
				if (distance <= 30) {
					ServoMotor_Rotate(90);
					_delay_ms(100);
					BACKWARD();
					_delay_ms(500);
					RIGHT();
					_delay_ms(100);
					STOP();
					_delay_ms(100);
				} else {
					LEFT();
					_delay_ms(250);
					STOP();
					ServoMotor_Rotate(90);
					_delay_ms(100);
				}
			} else {
				RIGHT();
				_delay_ms(250);
				STOP();
				ServoMotor_Rotate(90);
				_delay_ms(100);
			}
		}
	}
	
	
	return 0;
}
