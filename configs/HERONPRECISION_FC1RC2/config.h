/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU     STM32H743 //actually h753

#define BOARD_NAME        HERONPRECISION_FC1RC2
#define MANUFACTURER_ID   HRON

#define USE_GYRO
#define USE_ACC
// #define USE_ACCGYRO_BMI270
#define USE_ACC_SPI_ICM42688P
#define USE_GYRO_SPI_ICM42688P
#define USE_MAG
#define USE_MAG_LIS3MDL
#define USE_BARO
#define USE_BARO_SPI_BMP388
#define USE_MAX7456
#define MAX_SUPPORTED_MOTORS 12 //experimental

#define BEEPER_PIN           PE1
#define MOTOR1_PIN           PE9
#define MOTOR2_PIN           PE11
#define MOTOR3_PIN           PE13
#define MOTOR4_PIN           PE14
#define MOTOR5_PIN           PD12
#define MOTOR6_PIN           PD13
#define MOTOR7_PIN           PD14
#define MOTOR8_PIN           PD15
#define SERVO1_PIN           PA0 //schem as m13
#define SERVO2_PIN          PA1
#define SERVO3_PIN          PB10
#define SERVO4_PIN          PB11
// #define LED_STRIP_PIN     PE1 //used as beeper
#define UART1_TX_PIN         PA2 //real uart 2
#define UART2_TX_PIN         PB9 //real uart 4
#define UART3_TX_PIN         PD8
#define UART4_TX_PIN         PB14 //real uart 1
#define UART6_TX_PIN         PC6
#define UART7_TX_PIN         PE8
//#define UART8_TX_PIN       PE1 //used as beeper
#define UART1_RX_PIN         PA3 //real uart 2
#define UART2_RX_PIN         PB8 //real uart 4
#define UART3_RX_PIN         PD9
#define UART4_RX_PIN         PA10
#define UART6_RX_PIN         PC7
#define UART7_RX_PIN         PA8
#define UART8_RX_PIN         PE0
#define I2C1_SCL_PIN         PB6
#define I2C1_SDA_PIN         PB7
#define LED0_PIN             PA13 //blue LED
#define LED1_PIN             PA15 //green LED
#define LED2_PIN             PA14 //red (amber) LED
#define SPI1_SCK_PIN         PB3
#define SPI4_SCK_PIN         PE2
#define SPI6_SCK_PIN         PA5
#define SPI1_SDI_PIN         PB4
#define SPI4_SDI_PIN         PE5
#define SPI6_SDI_PIN         PA6
#define SPI1_SDO_PIN         PB5
#define SPI4_SDO_PIN         PE6
#define SPI6_SDO_PIN         PA7
//#define CAMERA_CONTROL_PIN   PE9
#define ADC_VBAT_PIN         PC0
//#define ADC_RSSI_PIN         PC5
#define ADC_CURR_PIN         PC3
#define ADC_EXTERNAL1_PIN    PC4 //CURR_2
#define SDIO_CK_PIN          PC12
#define SDIO_CMD_PIN         PD2
#define SDIO_D0_PIN          PC8
#define SDIO_D1_PIN          PC9
#define SDIO_D2_PIN          PC10
#define SDIO_D3_PIN          PC11

#define PINIO1_PIN           PC13 //M9-10 - pull down to enable
#define PINIO2_PIN           PE7 //M11-12 - pull down to enable
#define PINIO3_PIN           PE10 // analog video camera picker - high for 1
#define BARO_CS_PIN          PE3
#define MAG_CS_PIN           PE4
#define MAX7456_SPI_CS_PIN   PA4
#define COMPASS_EXTI_PIN     PE15
#define GYRO_1_EXTI_PIN      PB1
#define GYRO_2_EXTI_PIN      PB0
#define GYRO_1_CS_PIN        PB2
#define GYRO_2_CS_PIN        PB15
#define USB_DETECT_PIN       PA9

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PE9, 2,  0) \
    TIMER_PIN_MAP( 1, PE11, 2,  1) \
    TIMER_PIN_MAP( 2, PE13, 2,  2) \
    TIMER_PIN_MAP( 3, PE14, 2,  3) \
    TIMER_PIN_MAP( 4, PD12, 2,  4) \
    TIMER_PIN_MAP( 5, PD13, 2,  5) \
    TIMER_PIN_MAP( 6, PD14, 2,  6) \
    TIMER_PIN_MAP( 7, PD15, 2,  7) \
    TIMER_PIN_MAP( 8, PA0, 2, 8) \
    TIMER_PIN_MAP( 9, PA1, 2, 9) \
    TIMER_PIN_MAP( 10, PB10, 2, 10) \
    TIMER_PIN_MAP( 11, PB11, 2, 11)


#define SPI1_TX_DMA_OPT    13
#define ADC1_DMA_OPT        8
#define ADC3_DMA_OPT        9
#define TIMUP1_DMA_OPT      2
#define TIMUP2_DMA_OPT      2
#define TIMUP3_DMA_OPT      2
#define TIMUP4_DMA_OPT      2
#define TIMUP5_DMA_OPT      0
#define TIMUP8_DMA_OPT      1

#define USE_SPI_MAG
#define MAG_SPI_INSTANCE SPI4
#define USE_SPI_BARO
#define BARO_SPI_INSTANCE SPI4

#define DEFAULT_BLACKBOX_DEVICE     BLACKBOX_DEVICE_SDCARD
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_VOLTAGE_METER_SCALE 109
#define DEFAULT_CURRENT_METER_SCALE 168
#define BEEPER_INVERTED
#define SDCARD_DETECT_PIN NONE
#define SDIO_DEVICE SDIODEV_1
#define SDIO_USE_4BIT 1
#define SYSTEM_HSE_MHZ 25
#define MAX7456_SPI_INSTANCE SPI6
#define PINIO1_CONFIG 1
#define PINIO2_CONFIG 1
//#define PINIO1_BOX 0
//#define PINIO2_BOX 40
#define GYRO_1_SPI_INSTANCE SPI1
#define GYRO_1_ALIGN CW180_DEG
//#define GYRO_1_ALIGN_YAW 1800
#define GYRO_2_SPI_INSTANCE SPI1
#define GYRO_2_ALIGN CW270_DEG
//#define GYRO_2_ALIGN_YAW 2700

//todo: gpio for can switch, gyro orientation, figure out the DMA stuff, ADC calculation, better GPIO settings, verify beeper is safe
