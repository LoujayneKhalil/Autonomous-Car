/*
 * lcd_config.h
 *
 *  Created on: 2/10/2022
 *      Author: Loujayne Khalil
 */

#ifndef HAL_LCD_LCD_CONFIG_H_
#define HAL_LCD_LCD_CONFIG_H_

#include <avr/io.h>

//LCD DATA AND CONTROL PORTS
#define   DATA_BUS_A 	    PORTA
#define   DATA_DDR	    	 DDRA
#define   CTL_BUS		     PORTB
#define   CTL_DDR		     DDRB

//LCD DATA PINS
#define   LCD_D4			   4
#define   LCD_D5			   5
#define   LCD_D6			   6
#define   LCD_D7			   7

// LCD CONTROL PINS
#define   LCD_EN			   3
#define	  LCD_RW			   2
#define	  LCD_RS			   1

#endif /* LCD_LCD_CONFIG_H_ */