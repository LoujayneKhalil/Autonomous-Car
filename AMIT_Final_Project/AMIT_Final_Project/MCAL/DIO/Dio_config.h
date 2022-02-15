/*
 * Dio_config.h
 *
 *  Created on: 2/8/2022
 *      Author: Loujayne Khalil
 */

#ifndef MCAL_DIO_DIO_CONFIG_H_
#define MCAL_DIO_DIO_CONFIG_H_
#include "Dio.h"

typedef struct {
	Dio_port_type Port;
	Dio_pin_type Pin;
	Dio_dir_type Dir;
} pin_config_type;

#endif /* MCAL_DIO_DIO_CONFIG_H_ */
