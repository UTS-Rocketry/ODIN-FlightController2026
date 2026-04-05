#ifndef  LORA_H
#define LORA_H

#ifdef __cplusplus
extern "C" {
#endif

/*REGISTER DEFINES *******************************************************************************/

#define REG_FIFO                    0x00
#define REG_OPMODE                  0x01

#define REG_FR_MSB                  0x06
#define REG_FR_MID                  0x07
#define REG_FR_LSB                  0x08

#define REG_PA_CONFIG               0x09
#define REG_PA_RAMP                 0x0A

/* Overload Current protection */
#define REG_OCP                     0x0B

#define REG_LNA                     0x0C

#define REG_FIFO_ADDR_PTR           0x0D
#define REG_FIFO_TX_BASE_ADDR       0x0E
#define REG_FIFO_RX_BASE_ADDR       0x0F
#define REG_FIFO_RX_CURRENT_ADDR    0x10

#define REG_IRQ_FLAGS_MASK          0x11
#define REG_IRQ_FLAGS               0x12

#define REG_RX_NB_BYTES             0x13
#define REG_RX_HEADER_CNT_VALUE_MSB 0x14
#define REG_RX_HEADER_CNT_VALUE_LSB 0x15

#define REG_RX_PACKET_CNT_VALUE_MSB 0x16
#define REG_RX_PACKET_CNT_VALUE_LSB 0x17

#define REG_MODEM_STAT              0x18

#define REG_PKT_SNR_VALUE           0x19
#define REG_PKT_RSSI_VALUE          0x1A
#define REG_RSSI_VALUE              0x1B

#define REG_HOP_CHANNEL             0x1C

#define REG_MODEM_CONFIG_1          0x1D
#define REG_MODEM_CONFIG_2          0x1E

#define REG_SYMB_TIMEOUT_LSB        0x1F

#define REG_PREAMBLE_MSB            0x20
#define REG_PREAMBLE_LSB            0x21

#define REG_PAYLOAD_LENGTH          0x22
#define REG_MAX_PAYLOAD_LENGTH      0x23

#define REG_HOP_PERIOD              0x24
#define REG_FIFO_RX_BYTE_ADDR       0x25
#define REG_MODEM_CONFIG_3          0x26


/*FREQ ERROR*/
#define REG_FEI_MSB                 0x28
#define REG_FEI_MID                 0x29
#define REG_FEI_LSB                 0x2A


#define REG_RSSI_WIDEBAND           0x2C

#define REG_DETECT_OPTIMIZE         0x31
#define REG_INVERT_IQ               0x33
#define REG_DETECTION_THRESHOLD     0x37
#define REG_INVERT_IQ_2             0x3B


/*SYNCWORD TO WRITE IN INIT*/
#define REG_SYNC_WORD               0x39

#define REG_DIO_MAPPING_1           0x40
#define REG_DIO_MAPPING_2           0x41
#define REG_VERSION                 0x42

#define REG_TCXO                    0x4B
#define REG_PA_DAC                  0x4D

/*BITMASKS ***************************************************************************************/

/*OPERATION MODES*/
#define MODE_LONG_RANGE             0x80
#define MODE_SLEEP                  0x00
#define MODE_STAND_BY               0x01
#define MODE_FSTX                   0x02
#define MODE_TRANSMIT               0x03
#define MODE_FSRX                   0x04
#define MODE_RX_CONTINUEOUS         0x05
#define MODE_RX_SINGLE              0x06
#define MODE_CAD                    0x07

/*IRQ FLAGS*/
#define IRQ_CAD_DETECTED_MASK       0x01
#define IRQ_FHSS_CHANGE_MASK        0x02
#define IRQ_CAD_DONE_MASK           0x04
#define IRQ_TX_DONE_MASK            0x08
#define IRQ_VALID_HEADER_MASK       0x10
#define IRQ_PAYLOAD_CRC_ERR_MASK    0x20
#define IRQ_RX_DONE_MASK            0x40
#define IRQ_RX_TIMEOUT_MASK         0x80


/*STRUCTS ****************************************************************************************/

typedef struct {

}



#ifdef __cplusplus
}
#endif

#endif