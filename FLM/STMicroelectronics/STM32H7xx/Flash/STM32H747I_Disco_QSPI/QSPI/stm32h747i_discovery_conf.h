/**
  ******************************************************************************
  * @file    stm32h747i_discovery_conf_template.h
  * @author  MCD Application Team
  * @brief   STM32H747I_DISCO board configuration file.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2018 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef STM32H747I_DISCO_CONF_H
#define STM32H747I_DISCO_CONF_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

/* COM define */
#define USE_COM_LOG                         0U
#define USE_BSP_COM_FEATURE                 0U

/* LCD controllers defines */
#define USE_LCD_CTRL_OTM8009A               1U
#define USE_LCD_CTRL_ADV7533                1U

#define LCD_LAYER_0_ADDRESS                 0xC0000000U
#define LCD_LAYER_1_ADDRESS                 0xC0200000U

#define USE_DMA2D_TO_FILL_RGB_RECT          0U
/* Camera sensors defines */
#define USE_CAMERA_SENSOR_OV9655            1U

/* Audio codecs defines */
#define USE_AUDIO_CODEC_WM8994              1U

/* TS supported features defines */
#define USE_TS_GESTURE                      1U
#define USE_TS_MULTI_TOUCH                  1U

/* Default TS touch number */
#define TS_TOUCH_NBR                        2U

/* IRQ priorities */
#define BSP_SDRAM_IT_PRIORITY               15U
#define BSP_CAMERA_IT_PRIORITY              15U
#define BSP_BUTTON_USER_IT_PRIORITY         15U
#define BSP_AUDIO_OUT_IT_PRIORITY           14U
#define BSP_AUDIO_IN_IT_PRIORITY            15U
#define BSP_SD_IT_PRIORITY                  14U
#define BSP_SD_RX_IT_PRIORITY               14U
#define BSP_SD_TX_IT_PRIORITY               15U
#define BSP_TS_IT_PRIORITY                  15U

#ifdef __cplusplus
}
#endif

#endif /* STM32H747I_DISCO_CONF_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
