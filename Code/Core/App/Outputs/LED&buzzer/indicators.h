#ifndef INDICATORS_H
#define INDICATORS_H

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"
#include "stm32f4xx_hal.h"
#include <stdint.h>

/* Buzzer function
   time = buzzer on/off delay in ms
*/
void buzzer_function(int time);

#ifdef __cplusplus
}
#endif

#endif