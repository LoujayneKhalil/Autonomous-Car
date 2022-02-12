/*
 * Dio.h
 *
 *  Created on: Sep 11, 2021
 *      Author: FADY
 */

#ifndef MCAL_DIO_DIO_H_
#define MCAL_DIO_DIO_H_
#include <avr/io.h>
#include "../../STD_Types.h"
#include "../../Bit_Math.h"
#include "Dio_types.h"
#include "Dio_config.h"

#define high 1
#define low 0

#include "../../Bit_Math.h"
#include "../../STD_Types.h"

void Dio_init(void);
void Dio_write(Channel_Type channel, state_type state);
state_type Dio_read(Channel_Type channel);

#endif /* MCAL_DIO_DIO_H_ */
