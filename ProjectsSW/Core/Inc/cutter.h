/*
 * cutter.h
 *
 *  Created on: May 19, 2020
 *      Author: AnnaV
 */

#ifndef INC_CUTTER_H_
#define INC_CUTTER_H_

#include "stm32f7xx_hal.h"

#define SIZE			16
#define LCD_ADDR		(0x27 << 1)
#define LCD_DELAY_MS	5

#define PIN_RS    (1 << 0)
#define PIN_EN    (1 << 2)
#define BACKLIGHT (1 << 3)

#define ROW_SIZE		4
#define COL_SIZE		4
#define DEBOUNCE_TIME	5	//50ms

void LCD_Init(uint8_t lcd_addr);
void LCD_Write(uint8_t lcd_addr);
void Keypad_Init(void);
void Save_Coord(uint32_t address, float coord);
void Set_Inverter(uint8_t dir, uint16_t speed);
void Change_Speed(uint16_t speed);
void Brush_Brake_Off(void);
void Brush_Brake_On(void);
void Move_Brush(void);
void Solid_On();
void Solid_Off();
void Pressing_On(void);
void Pressing_Off(void);
void Cutting_On(void);
void Cutting_Off(void);

uint8_t Read_Keypad(void);
uint8_t Read_Pedal(void);
uint8_t Read_Knife_Sensors(void);
uint8_t Read_Hand_Catch_Input(void);
uint8_t Convert_Key_to_Char(uint8_t key);
uint16_t Read_Encoder(void);

uint32_t Read_Coord(uint32_t address);

#endif /* INC_CUTTER_H_ */
