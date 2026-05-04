#include "indicators.h"

void buzzer_function(int time)
{
    HAL_GPIO_WritePin(GPIOC, BuzzerControl_Pin, GPIO_PIN_SET);
    HAL_Delay(time);

    HAL_GPIO_WritePin(GPIOC, BuzzerControl_Pin, GPIO_PIN_RESET);
    HAL_Delay(time);
}