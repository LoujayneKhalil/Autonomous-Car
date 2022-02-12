/*
 * Dio.c
 *
 *  Created on: Sep 11, 2021
 *      Author: FADY
 */

#include "Dio.h"

extern pin_config_type pin_config[32];

void Dio_init(void) {
	int i = 0;
	for (i = 0; i < (sizeof(pin_config) / sizeof(pin_config[0])); i++) {
		switch (pin_config[i].Port) {
		case DIO_PortA:
			if (pin_config[i].Dir == OUTPUT) {
				SET_BIT(DDRA, pin_config[i].Pin);
			} else {
				CLR_BIT(DDRA, pin_config[i].Pin);
			}
			break;
		case DIO_PortB:
			if (pin_config[i].Dir == OUTPUT) {
				SET_BIT(DDRB, pin_config[i].Pin);
			} else {
				CLR_BIT(DDRB, pin_config[i].Pin);
			}
			break;
		case DIO_PortC:
			if (pin_config[i].Dir == OUTPUT) {
				SET_BIT(DDRC, pin_config[i].Pin);
			} else {
				CLR_BIT(DDRC, pin_config[i].Pin);
			}
			break;
		case DIO_PortD:
			if (pin_config[i].Dir == OUTPUT) {
				SET_BIT(DDRD, pin_config[i].Pin);
			} else {
				CLR_BIT(DDRD, pin_config[i].Pin);
			}
			break;
		default:
			break;
		}
	}
}

/*
 0 -> PORT A
 1 -> PORT B
 2 -> PORT C
 3 -> PORT D
 */

void Dio_write(Channel_Type channel, state_type state) {
	Dio_port_type Port_variable = channel / 8;
	Dio_pin_type Pin_num = channel % 8;
	switch (Port_variable) {
	case 0:
		if (state == 1) {
			SET_BIT(PORTA, Pin_num);
		} else {
			CLR_BIT(PORTA, Pin_num);
		}
		break;
	case 1:
		if (state == 1) {
			SET_BIT(PORTB, Pin_num);
		} else {
			CLR_BIT(PORTB, Pin_num);
		}
		break;
	case 2:
		if (state == 1) {
			SET_BIT(PORTC, Pin_num);
		} else {
			CLR_BIT(PORTC, Pin_num);
		}
		break;
	case 3:
		if (state == 1) {
			SET_BIT(PORTD, Pin_num);
		} else {
			CLR_BIT(PORTD, Pin_num);
		}
		break;
	}
}

state_type Dio_read(Channel_Type channel) {

	state_type state = 0;
	Dio_port_type port = channel / 8;
	Dio_pin_type pin = channel % 8;
	switch (port) {
	case 0:
		state = GET_BIT(PINA, pin);
		break;
	case 1:
		state = GET_BIT(PINB, pin);
		break;
	case 2:
		state = GET_BIT(PINC, pin);
		break;
	case 3:
		state = GET_BIT(PIND, pin);
		break;
	default:
		state = -1;
		break;
	}
	return state;
}
