/*
 * Servo_Motor_Configuration.h
 *
 *  Created on: 2/9/2022
 *      Author: Loujayne Khalil
 */


#ifndef SERVO_MOTOR_CONFIGURATION_H_
#define SERVO_MOTOR_CONFIGURATION_H_

#include "DIO.h"
/*
#define Angle_0 5
#define Angle_P90 7
#define Angle_N90 10
*/
typedef enum
{
	Angle_0 = 7,
	Angle_P90 = 10,
	Angle_N90 = 5,
}
Servo_Angle;

#endif /* SERVO_MOTOR_CONFIGURATION_H_ */