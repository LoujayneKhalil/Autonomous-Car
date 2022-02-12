/*
 * DC.c
 *
 *  Created on: 2/10/2022
 *      Author: Loujayne Khalil
 */

#include "DC.h"

// Set motor to move forward
void forward (void)
{	
	Dio_write(H_A1, HIGH);
	Dio_write(H_A3, LOW);
	Dio_write(H_A2, LOW);
	Dio_write(H_A4, HIGH);
}

// Set motor to move backward
void backward (void)
{
	Dio_write(H_A1, LOW);
	Dio_write(H_A3, HIGH);
	Dio_write(H_A2, HIGH);
	Dio_write(H_A4, LOW);

}

// Set motor to move left
void left (void)
{
	Dio_write(H_A1, HIGH);
	Dio_write(H_A3, HIGH);
	Dio_write(H_A2, LOW);
	Dio_write(H_A4, LOW);

}
// Set motor to move right
void right (void)
{
	Dio_write(H_A1, LOW);
	Dio_write(H_A3, LOW);
	Dio_write(H_A2, HIGH);
	Dio_write(H_A4, HIGH);

}

// Set motor to stop moving
void stop (void){
	Dio_write(H_A1, LOW);
	Dio_write(H_A3, LOW);
	Dio_write(H_A2, LOW);
	Dio_write(H_A4, LOW);

}
