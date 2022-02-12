/*
 * Dio_types.h
 *
 *  Created on: Sep 17, 2021
 *      Author: FADY
 */

#ifndef MCAL_DIO_DIO_TYPES_H_
#define MCAL_DIO_DIO_TYPES_H_

typedef enum {
	LOW, HIGH
} state_type;

typedef enum {

	//Port A
	PINA_0,
	POT,
	Relay,
	Buzzer,
	D4,
	D5,
	D6,
	D7,

	//Port B
	Button0,
	RS,
	RW,		Slave1 = 10,
	E,		Slave2 = 11,
	SS,
	MOSI,
	MISO,
	SCK,

	//Port C
	PINC_0,
	PINC_1,
	LED0,
	H_A1,
	H_A2,
	H_A3,
	H_A4,
	LED1,

	//Port D
	RX,			ROW0=24,
	TX,			ROW1=25,
	Button2,	ROW2=26,
	LED2,		ROW3=27,
	H_EN1,		COL0=28,
	H_EN2,		COL1=29,
	Button1,	COL2=30,
	servo,		COL3=31

} Channel_Type;

typedef enum {
	DIO_PortA,
	DIO_PortB,
	DIO_PortC,
	DIO_PortD
} Dio_port_type;

typedef enum {
	DIO_Pin0,
	DIO_Pin1,
	DIO_Pin2,
	DIO_Pin3,
	DIO_Pin4,
	DIO_Pin5,
	DIO_Pin6,
	DIO_Pin7
} Dio_pin_type;

typedef enum{
	INPUT,
	OUTPUT
}Dio_dir_type;

#endif /* MCAL_DIO_DIO_TYPES_H_ */
