#ifndef __TRIGGER_H__
#define __TRIGGER_H__

#include <stdbool.h>
#include <stm32f3xx_hal.h>
#include <stm32f3xx_hal_gpio.h>

#define TRIGGER_PORT		GPIOC
#define TRIGGER_PIN 		GPIO_PIN_13
#define TRIGGER_CLK_ENABLE	__HAL_RCC_GPIOA_CLK_ENABLE

void trigger_init(void);
void trigger_set(bool state);

#endif /* __TRIGGER_H__ */