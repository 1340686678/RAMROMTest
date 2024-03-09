#ifndef __LEDDEV_H
#define __LEDDEV_H

#include "stm32h7xx_hal_gpio.h"

typedef enum
{
  LED_ON = GPIO_PIN_RESET,
  LED_OFF = GPIO_PIN_SET
} LED_State;

#endif
