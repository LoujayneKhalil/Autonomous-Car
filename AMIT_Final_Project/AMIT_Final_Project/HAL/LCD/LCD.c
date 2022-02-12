/*
 * LCD.c
 *
 *  Created on: 2/10/2022
 *      Author: Loujayne Khalil
 */

#include "LCD.h"

// Initialize LCD pins as output and setting up the operation mode(4-bit)
void lcd_init(void)	
{

	DATA_DDR = (1 << LCD_D7) | (1 << LCD_D6) | (1 << LCD_D5) | (1 << LCD_D4);
	CTL_DDR |= (1 << LCD_EN) | (1 << LCD_RW) | (1 << LCD_RS);

	DATA_BUS_A = (0 << LCD_D7) | (0 << LCD_D6) | (1 << LCD_D5) | (0 << LCD_D4);
	CTL_BUS |= (1 << LCD_EN) | (0 << LCD_RW) | (0 << LCD_RS);

	_delay_ms(5);
	CTL_BUS &= ~(1 << LCD_EN);
	_delay_ms(5);

	lcd_send_command(LCD_CMD_4BIT_2ROW_5X7);
	_delay_ms(5);
	lcd_send_command(LCD_CMD_DISPLAY_CURSOR_BLINK);
	_delay_ms(5);
	lcd_send_command(0x80);

}

//Sending a command to LCD 
void lcd_send_command(uint8_t command)	
{
	DATA_BUS_A = ((command & 0b11110000));
	CTL_BUS &= ~(1 << LCD_RS);
	CTL_BUS |= (1 << LCD_EN);
	_delay_ms(5);
	CTL_BUS &= ~(1 << LCD_EN);
	_delay_ms(5);
	DATA_BUS_A = ((command & 0b00001111) << 4);
	CTL_BUS |= (1 << LCD_EN);
	_delay_ms(5);
	CTL_BUS &= ~(1 << LCD_EN);
	_delay_ms(5);
}

//Printing a full word to the LCD
void lcd_write_word(uint8_t word[20])	
{
	int i = 0;
	while (word[i] != '\0') {
		lcd_write_character(word[i]);
		i++;
	}
}

// Sending one character to LCD
void lcd_write_character(uint8_t character)	
{

	DATA_BUS_A = ((character & 0b11110000));
	CTL_BUS |= (1 << LCD_RS);
	CTL_BUS |= (1 << LCD_EN);
	_delay_ms(5);
	CTL_BUS &= ~(1 << LCD_EN);
	_delay_ms(5);
	DATA_BUS_A = ((character & 0b00001111) << 4);
	CTL_BUS |= (1 << LCD_EN);
	_delay_ms(5);
	CTL_BUS &= ~(1 << LCD_EN);
	_delay_ms(5);
}

//Clearing the LCD screen
void lcd_clear(void)	
{
	lcd_send_command(LCD_CMD_CLEAR_DISPLAY);
	_delay_ms(5);
}

void lcd_goto_xy(uint8_t line, uint8_t pos)		
{
	lcd_send_command((0x80 | (line << 6)) + pos);
	_delay_us(50);
}
