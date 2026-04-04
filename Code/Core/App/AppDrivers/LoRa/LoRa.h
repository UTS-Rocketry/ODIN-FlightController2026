#ifndef  LORA_H
#define LORA_H

#ifdef __cplusplus
extern "C" {
#endif



/*register Defines */

#define REG_FIFO 0x00
#define REG_OPMODE 0x01

#define REG_FR_MSB 0x06
#define REG_FR_MID 0x07
#define REG_FR_LSB 0x08

#define REG_PA_CONFIG 0x09
#define REG_PA_RAMP 0x0A

/* Overload Current protection */
#define REG_OCP 0x0B

#define REG_LNA 0x0C

#define REG_FIFO_ADDR_PTR 0x0D
#define REG_FIFO_TX_BASE_ADDR 0x0E
#define REG_FIFO_RX_BASE_ADDR 0x0F
#define REG_FIFO_RX_CURRENT_ADDR 0x10

#define REG_IRQ_FLAGS_MASK 0x11
#define REG_IRQ_FLAGS 0x12

#define REG_RX_NB_BYTES 0x13
#define REG_RX_HEADER_CNT_VALUE_MSB 0x14
#define REG_RX_HEADER_CNT_VALUE_LSB 0x15

#define REG_RX_PACKET_CNT_VALUE_MSB 0x16
#define REG_RX_PACKET_CNT_VALUE_LSB 0x17

#define REG_MODEM_STAT 0x18

#define REG_PKT_SNR_VALUE 0x19
#define REG_PKT_RSSI_VALUE 0x1A
#define REG_RSSI_VALUE 0x1B

#define REG_HOP_CHANNEL 0x1C









#ifdef __cplusplus
}
#endif

#endif