/*
 * Dio_config.c
 *
 *  Created on: Sep 17, 2021
 *      Author: FADY
 */

#include "Dio_config.h"

pin_config_type pin_config[] =
		{

		//basic ports
		{ DIO_PortA, DIO_Pin1, INPUT },		//potentiometer
		{ DIO_PortA, DIO_Pin2, OUTPUT },	//relay
		{ DIO_PortA, DIO_Pin3, OUTPUT },	//buzzer
		{ DIO_PortB, DIO_Pin0, INPUT },		//button 0
		{ DIO_PortC, DIO_Pin2, INPUT },		//led 0
		{ DIO_PortC, DIO_Pin3, OUTPUT },	//h-a1
		{ DIO_PortC, DIO_Pin4, OUTPUT },	//h-a1
		{ DIO_PortC, DIO_Pin5, OUTPUT },	//h-a3
		{ DIO_PortC, DIO_Pin6, OUTPUT },	//h-a4
		{ DIO_PortC, DIO_Pin7, OUTPUT },	//led 1
		{ DIO_PortD, DIO_Pin0, OUTPUT },	//RX / trigger
		{ DIO_PortD, DIO_Pin1, OUTPUT },	//TX / H_EN2
		{ DIO_PortD, DIO_Pin2, INPUT },		//button 2 / INT0 / echo
		{ DIO_PortD, DIO_Pin3, OUTPUT },	//led 2
		{ DIO_PortD, DIO_Pin4, OUTPUT },	//H_EN1
		{ DIO_PortD, DIO_Pin5, OUTPUT },	//servo
		{ DIO_PortD, DIO_Pin6, INPUT },		//button 1
		{ DIO_PortD, DIO_Pin7, INPUT },		//LED Dimming

		//LCD
		{ DIO_PortA, DIO_Pin4, OUTPUT },	//lcd d4
		{ DIO_PortA, DIO_Pin5, OUTPUT },	//lcd d5
		{ DIO_PortA, DIO_Pin6, OUTPUT },	//lcd d6
		{ DIO_PortA, DIO_Pin7, OUTPUT },	//lcd d7
		{ DIO_PortB, DIO_Pin1, OUTPUT },	//lcd RS
		{ DIO_PortB, DIO_Pin2, OUTPUT },	//lcd RW
		{ DIO_PortB, DIO_Pin3, OUTPUT },	//lcd E / LED Dimming

		//serial comm.
		{ DIO_PortB, DIO_Pin4, OUTPUT },	//SS / H_EN1
		{ DIO_PortB, DIO_Pin5, OUTPUT },	//MOSI / H_EN2
		{ DIO_PortB, DIO_Pin6, INPUT },		//MISO
		{ DIO_PortB, DIO_Pin7, OUTPUT },	//SCK

		//KEYPAD
/*		{ DIO_PortD, DIO_Pin0, OUTPUT },	//keypad r0
		{ DIO_PortD, DIO_Pin1, OUTPUT },	//keypad r1
		{ DIO_PortD, DIO_Pin2, OUTPUT },	//keypad r2
		{ DIO_PortD, DIO_Pin3, OUTPUT },	//keypad r3
		{ DIO_PortD, DIO_Pin4, INPUT },		//keypad c0
		{ DIO_PortD, DIO_Pin5, INPUT },		//keypad c1
		{ DIO_PortD, DIO_Pin6, INPUT },		//keypad c2
		{ DIO_PortD, DIO_Pin7, INPUT },		//keypad c3		*/
		};
