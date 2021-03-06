/**
  ******************************************************************************
  * File Name          : main.hpp
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  ** This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * COPYRIGHT(c) 2017 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H
  /* Includes ------------------------------------------------------------------*/

/* Includes ------------------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define ADDRESS_BUS13_Pin GPIO_PIN_13
#define ADDRESS_BUS13_GPIO_Port GPIOC
#define ADDRESS_BUS14_Pin GPIO_PIN_14
#define ADDRESS_BUS14_GPIO_Port GPIOC
#define ADDRESS_BUS15_Pin GPIO_PIN_15
#define ADDRESS_BUS15_GPIO_Port GPIOC
#define ADDRESS_BUS0_Pin GPIO_PIN_0
#define ADDRESS_BUS0_GPIO_Port GPIOC
#define ADDRESS_BUS1_Pin GPIO_PIN_1
#define ADDRESS_BUS1_GPIO_Port GPIOC
#define ADDRESS_BUS2_Pin GPIO_PIN_2
#define ADDRESS_BUS2_GPIO_Port GPIOC
#define ADDRESS_BUS3_Pin GPIO_PIN_3
#define ADDRESS_BUS3_GPIO_Port GPIOC
#define Z80_WAIT_Pin GPIO_PIN_4
#define Z80_WAIT_GPIO_Port GPIOA
#define Z80_INT_Pin GPIO_PIN_5
#define Z80_INT_GPIO_Port GPIOA
#define Z80_RESET_Pin GPIO_PIN_6
#define Z80_RESET_GPIO_Port GPIOA
#define Z80_BUSREQ_Pin GPIO_PIN_7
#define Z80_BUSREQ_GPIO_Port GPIOA
#define ADDRESS_BUS4_Pin GPIO_PIN_4
#define ADDRESS_BUS4_GPIO_Port GPIOC
#define ADDRESS_BUS5_Pin GPIO_PIN_5
#define ADDRESS_BUS5_GPIO_Port GPIOC
#define Z80_NMI_Pin GPIO_PIN_0
#define Z80_NMI_GPIO_Port GPIOB
#define Z80_M1_Pin GPIO_PIN_1
#define Z80_M1_GPIO_Port GPIOB
#define Z80_MREQ_Pin GPIO_PIN_2
#define Z80_MREQ_GPIO_Port GPIOB
#define Z80_MREQ_EXTI_IRQn EXTI2_IRQn
#define Z80_IORQ_Pin GPIO_PIN_7
#define Z80_IORQ_GPIO_Port GPIOE
#define Z80_RD_Pin GPIO_PIN_8
#define Z80_RD_GPIO_Port GPIOE
#define Z80_RD_EXTI_IRQn EXTI9_5_IRQn
#define Z80_CLK_Pin GPIO_PIN_9
#define Z80_CLK_GPIO_Port GPIOE
#define Z80_WR_Pin GPIO_PIN_10
#define Z80_WR_GPIO_Port GPIOE
#define Z80_WR_EXTI_IRQn EXTI15_10_IRQn
#define Z80_RFSH_Pin GPIO_PIN_11
#define Z80_RFSH_GPIO_Port GPIOE
#define Z80_HALT_Pin GPIO_PIN_12
#define Z80_HALT_GPIO_Port GPIOE
#define Z80_BUSACK_Pin GPIO_PIN_13
#define Z80_BUSACK_GPIO_Port GPIOE
#define SRAM_CS_Pin GPIO_PIN_14
#define SRAM_CS_GPIO_Port GPIOE
#define SRAM_OE_Pin GPIO_PIN_15
#define SRAM_OE_GPIO_Port GPIOE
#define SRAM_WE_Pin GPIO_PIN_10
#define SRAM_WE_GPIO_Port GPIOB
#define EEPROM_CE_Pin GPIO_PIN_14
#define EEPROM_CE_GPIO_Port GPIOB
#define EEPROM_OE_Pin GPIO_PIN_15
#define EEPROM_OE_GPIO_Port GPIOB
#define increase_clk_Pin GPIO_PIN_14
#define increase_clk_GPIO_Port GPIOD
#define decrease_clk_Pin GPIO_PIN_15
#define decrease_clk_GPIO_Port GPIOD
#define ADDRESS_BUS6_Pin GPIO_PIN_6
#define ADDRESS_BUS6_GPIO_Port GPIOC
#define ADDRESS_BUS7_Pin GPIO_PIN_7
#define ADDRESS_BUS7_GPIO_Port GPIOC
#define ADDRESS_BUS8_Pin GPIO_PIN_8
#define ADDRESS_BUS8_GPIO_Port GPIOC
#define ADDRESS_BUS9_Pin GPIO_PIN_9
#define ADDRESS_BUS9_GPIO_Port GPIOC
#define Z80_DATA_DIR_Pin GPIO_PIN_12
#define Z80_DATA_DIR_GPIO_Port GPIOA
#define ADDRESS_BUS10_Pin GPIO_PIN_10
#define ADDRESS_BUS10_GPIO_Port GPIOC
#define ADDRESS_BUS11_Pin GPIO_PIN_11
#define ADDRESS_BUS11_GPIO_Port GPIOC
#define ADDRESS_BUS12_Pin GPIO_PIN_12
#define ADDRESS_BUS12_GPIO_Port GPIOC
#define DATA_BUS0_Pin GPIO_PIN_0
#define DATA_BUS0_GPIO_Port GPIOD
#define DATA_BUS1_Pin GPIO_PIN_1
#define DATA_BUS1_GPIO_Port GPIOD
#define DATA_BUS2_Pin GPIO_PIN_2
#define DATA_BUS2_GPIO_Port GPIOD
#define DATA_BUS3_Pin GPIO_PIN_3
#define DATA_BUS3_GPIO_Port GPIOD
#define DATA_BUS4_Pin GPIO_PIN_4
#define DATA_BUS4_GPIO_Port GPIOD
#define DATA_BUS5_Pin GPIO_PIN_5
#define DATA_BUS5_GPIO_Port GPIOD
#define DATA_BUS6_Pin GPIO_PIN_6
#define DATA_BUS6_GPIO_Port GPIOD
#define DATA_BUS7_Pin GPIO_PIN_7
#define DATA_BUS7_GPIO_Port GPIOD
#define OnboardLED_Pin GPIO_PIN_9
#define OnboardLED_GPIO_Port GPIOB

/* ########################## Assert Selection ############################## */
/**
  * @brief Uncomment the line below to expanse the "assert_param" macro in the 
  *        HAL drivers code
  */
/* #define USE_FULL_ASSERT    1U */

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
 extern "C" {
#endif
void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)
#ifdef __cplusplus
}
#endif

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MAIN_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
