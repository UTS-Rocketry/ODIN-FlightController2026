#include "main.h"


#include <stdint.h>
#include <stdio.h>
#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_def.h"

#include "lsm6dsox_reg.h"
#include "BMP388.h"
#include "h3lis331dl_reg.h"

int _write(int file, char *ptr, int len) {
    HAL_UART_Transmit(&huart4, (uint8_t*)ptr, len, HAL_MAX_DELAY);
    return len;
}

void BMP388_handleinit (BMP388Handle_TypeDef *bmp) {
  
  bmp->hspi = &hspi1;  // confirm this is correct
  bmp->cs_port = CSBarometer_GPIO_Port;
  bmp->cs_pin = CSBarometer_Pin;

  if (BMP388_Init(bmp) != HAL_OK) {
      printf("BMP388 init FAILED\r\n");
  } else {
    printf("BMP388 OK\r\n");
  }

}

void lsm6dso_handleinit(lsm6dso_HandleTypedef *imu) {

  imu->hspi = &hspi1;
  imu->cs_port = CS_IMU_GPIO_Port;
  imu->cs_pin = CS_IMU_Pin;
  if (lsm6dso_init(imu) != HAL_OK) {
    printf("IMU init FAILED\r\n");
  } else {
      printf("IMU OK\r\n");
  }

}

void h3lis331dl_handleinit(h3lis331dl_HandleTypeDef *accel) {

  
  accel->hspi = &hspi1;
  accel->cs_port = CSAccelerometer_GPIO_Port;
  accel->cs_pin = CSAccelerometer_Pin;

  if (h3lis331dl_init(accel) != HAL_OK) {
      printf("ACCEL init FAILED\r\n");
  } else {
      printf("ACCEL OK\r\n");
  }

}

