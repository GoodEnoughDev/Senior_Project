/*
 * z80_functions.c
 *
 *  Created on: Nov 19, 2017
 *      Author: andrewpbingham
 */
#include "z80_functions.h"
#include "tim.h"
#include "stm32f1xx_hal.h"
#include "main.h"
#include "stdlib.h"
#include  <errno.h>
#include  <sys/unistd.h>
#include "usart.h"


uint16_t read_z80_address_bus(){
	uint16_t address = (GPIOC -> IDR);
	return address;
}

uint8_t read_z80_data_bus(){
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.Pin = DATA_BUS0_Pin|DATA_BUS1_Pin
						|DATA_BUS2_Pin|DATA_BUS3_Pin
						|DATA_BUS4_Pin|DATA_BUS5_Pin
						|DATA_BUS6_Pin|DATA_BUS7_Pin;
	GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

	uint8_t data = GPIOD -> IDR && 0x000000FF;
	return data;
}
void write_z80_data_bus(uint8_t data){
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.Pin = DATA_BUS0_Pin|DATA_BUS1_Pin
						|DATA_BUS2_Pin|DATA_BUS3_Pin
						|DATA_BUS4_Pin|DATA_BUS5_Pin
						|DATA_BUS6_Pin|DATA_BUS7_Pin;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_MEDIUM;
	HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

	HAL_GPIO_WritePin(Z80_DATA_DIR_GPIO_Port,Z80_DATA_DIR_Pin,GPIO_PIN_RESET);
	GPIOD -> ODR &= 0xFFFF0000;
	GPIOD -> ODR |= data;
}

void init_z80_control_signals(){
	HAL_GPIO_WritePin(Z80_RESET_GPIO_Port,Z80_RESET_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(Z80_INT_GPIO_Port,Z80_INT_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(Z80_HALT_GPIO_Port,Z80_HALT_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(Z80_WAIT_GPIO_Port,Z80_WAIT_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(Z80_NMI_GPIO_Port,Z80_NMI_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(EEPROM_CE_GPIO_Port,EEPROM_CE_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(EEPROM_OE_GPIO_Port,EEPROM_OE_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(SRAM_CS_GPIO_Port,SRAM_CS_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(SRAM_OE_GPIO_Port,SRAM_OE_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(SRAM_WE_GPIO_Port,SRAM_WE_Pin,GPIO_PIN_SET);
}

void init_z80_clk(int frequency){
	MX_TIM5_Init();
	update_CLK_frequency(frequency);
	HAL_TIM_PWM_Start(&htim5, TIM_CHANNEL_1);
}

void update_CLK_frequency(int frequency){
	if(frequency < 100)
		frequency = 100;

	if(frequency > 6000000)
		frequency = 6000000;

	// ARR of 5 gives us an upper limit of 6MHz and lower of 22Hz
	int arr = 5;
	int prescaler = HAL_RCC_GetHCLKFreq()/((frequency*(arr+1))-1);
	int ccr1 = (arr + 1) /2;

	TIM5 -> ARR = arr;
	TIM5 -> PSC = prescaler;
	TIM5 -> CCR1 = ccr1;
}

void reset_z80(){
	HAL_GPIO_WritePin(Z80_RESET_GPIO_Port,Z80_RESET_Pin,GPIO_PIN_RESET);
	HAL_Delay(10);
	HAL_GPIO_WritePin(Z80_RESET_GPIO_Port,Z80_RESET_Pin,GPIO_PIN_SET);
}

void send_address(uint8_t address[]){
//	for(int i = 0;i <= 9; i++){
//		HAL_UART_Transmit(&huart1, &address[i], sizeof(&address[i]), 10);
//	}
	HAL_UART_Transmit(&huart1, address, 10, 100);
}

//int _write(int file, char *data, int len)
//{
//   if ((file != STDOUT_FILENO) && (file != STDERR_FILENO))
//   {
//      errno = EBADF;
//      return -1;
//   }
//
//   // arbitrary timeout 1000
//   HAL_StatusTypeDef status =
//      HAL_UART_Transmit(&huart1, (uint8_t*)data, len, 10);
//
//   // return # of bytes written - as best we can tell
//   return (status == HAL_OK ? len : 0);
//}
