/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define oled_sda_Pin GPIO_PIN_13
#define oled_sda_GPIO_Port GPIOC
#define AIN1_Pin GPIO_PIN_14
#define AIN1_GPIO_Port GPIOC
#define oled_scl_Pin GPIO_PIN_15
#define oled_scl_GPIO_Port GPIOC
#define BIN1_Pin GPIO_PIN_0
#define BIN1_GPIO_Port GPIOC
#define AIN1C1_Pin GPIO_PIN_1
#define AIN1C1_GPIO_Port GPIOC
#define h7_Pin GPIO_PIN_2
#define h7_GPIO_Port GPIOC
#define BIN2_Pin GPIO_PIN_1
#define BIN2_GPIO_Port GPIOA
#define h8_Pin GPIO_PIN_4
#define h8_GPIO_Port GPIOA
#define E1A_Pin GPIO_PIN_6
#define E1A_GPIO_Port GPIOA
#define E1B_Pin GPIO_PIN_7
#define E1B_GPIO_Port GPIOA
#define buzzer_Pin GPIO_PIN_5
#define buzzer_GPIO_Port GPIOC
#define mpu_scl_Pin GPIO_PIN_10
#define mpu_scl_GPIO_Port GPIOB
#define mpu_sda_Pin GPIO_PIN_11
#define mpu_sda_GPIO_Port GPIOB
#define PWMB_Pin GPIO_PIN_6
#define PWMB_GPIO_Port GPIOC
#define h1_Pin GPIO_PIN_9
#define h1_GPIO_Port GPIOC
#define PWMA_Pin GPIO_PIN_8
#define PWMA_GPIO_Port GPIOA
#define h2_Pin GPIO_PIN_15
#define h2_GPIO_Port GPIOA
#define key3_Pin GPIO_PIN_10
#define key3_GPIO_Port GPIOC
#define h3_Pin GPIO_PIN_11
#define h3_GPIO_Port GPIOC
#define key4_Pin GPIO_PIN_12
#define key4_GPIO_Port GPIOC
#define key2_Pin GPIO_PIN_2
#define key2_GPIO_Port GPIOD
#define key1_Pin GPIO_PIN_3
#define key1_GPIO_Port GPIOB
#define h4_Pin GPIO_PIN_4
#define h4_GPIO_Port GPIOB
#define E2A_Pin GPIO_PIN_6
#define E2A_GPIO_Port GPIOB
#define E2B_Pin GPIO_PIN_7
#define E2B_GPIO_Port GPIOB
#define h5_Pin GPIO_PIN_8
#define h5_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
