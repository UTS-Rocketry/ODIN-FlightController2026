#ifndef TELEMETRY_H
#define TELEMETRY_H

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"
#include "stm32f4xx_hal.h"
#include <stdint.h>
#include <stdio.h>

/* Serial print for flight sensor values */
void serial_print(const FlightSensorData *sensordata);

#ifdef __cplusplus
}
#endif

#endif