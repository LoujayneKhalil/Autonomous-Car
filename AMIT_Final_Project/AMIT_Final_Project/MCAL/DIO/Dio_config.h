/*
 * Dio_config.h
 *
 *  Created on: Sep 17, 2021
 *      Author: FADY
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
