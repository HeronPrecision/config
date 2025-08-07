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

//#define MANUFACTURER HERONPRECISION
#define MANUFACTURER_ID   HRON
#define BOARD_NAME        HRON_CHICKADEE

#define FC_TARGET_MCU     STM32H743 //Actually the H753

#define USE_ACC
#define USE_ACC_SPI_ICM42688P
#define USE_GYRO
#define USE_GYRO_SPI_ICM42688P
#define USE_MAG
//#define USE_MAG_BMM350
#define USE_BARO
//#define USE_BARO_SPI_ICP20100
#define USE_MAX7456
#define MAX_SUPPORTED_MOTORS 12 //experimental
#define PINIO_COUNT 6
#define GYRO_COUNT 3

#define BEEPER_PIN           PE1 //possible alt functions: led_strip_pin, UART 8 TX
#define MOTOR1_PIN           PE9
#define MOTOR2_PIN           PE11
#define MOTOR3_PIN           PE13
#define MOTOR4_PIN           PE14
#define MOTOR5_PIN           PD12
#define MOTOR6_PIN           PD13
#define MOTOR7_PIN           PD14
#define MOTOR8_PIN           PD15
// For the following 4 motors to act as motors (not CAN), PD10 (pinio3) and PD11 (pinio4) must be used as GPIOs and set "HIGH"
#define SERVO1_PIN           PA0 //M9 - shared by pin H1 in CAN connector
#define SERVO2_PIN          PA1 //M10 - shared with L1
#define SERVO3_PIN          PB10 //M11 - shared with H2
#define SERVO4_PIN          PB11 //M12 - shared with L2
// M13-M16 are alt functions of UART4 and UART2 below
// #define LED_STRIP_PIN     PE1 //used as beeper
#define UART1_TX_PIN         PB14
#define UART2_TX_PIN         PA2 //M15 alt function
#define UART3_TX_PIN         PD8
#define UART4_TX_PIN         PB9 //M13 alt function
#define UART6_TX_PIN         PC6
#define UART7_TX_PIN         PE8
//#define UART8_TX_PIN       PE1 //used as beeper
#define UART1_RX_PIN         PA10
#define UART2_RX_PIN         PA3 //M16 alt function
#define UART3_RX_PIN         PD9
#define UART4_RX_PIN         PB8 //M14 alt function
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
#define ADC_VBAT_PIN         PC0
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
#define PINIO3_PIN           PD10 //route picker, high for motors
#define PINIO4_PIN           PD11 //route picker, high for motors
#define PINIO5_PIN           PE10 // analog video camera picker - high for 1
#define PINIO6_PIN           PE12 // TX6 enable - high for gnd
#define BARO_CS_PIN          PE3
#define MAX7456_SPI_CS_PIN   PA4
#define GYRO_1_EXTI_PIN      PB1
#define GYRO_2_EXTI_PIN      PD5
#define GYRO_3_EXTI_PIN      PE15
#define GYRO_1_CLKIN_PIN     PB0
#define GYRO_2_CLKIN_PIN     PB0
#define GYRO_3_CLKIN_PIN     PB0
#define GYRO_1_CS_PIN        PB2
#define GYRO_2_CS_PIN        PB15
#define GYRO_3_CS_PIN        PE4
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


// #define SPI1_TX_DMA_OPT    13
#define ADC1_DMA_OPT        8
#define ADC3_DMA_OPT        9
#define TIMUP1_DMA_OPT      2
#define TIMUP2_DMA_OPT      2
#define TIMUP3_DMA_OPT      2
#define TIMUP4_DMA_OPT      2
#define TIMUP5_DMA_OPT      0
#define TIMUP8_DMA_OPT      1

#define USE_SPI_BARO
#define BARO_SPI_INSTANCE SPI4

#define DEFAULT_BLACKBOX_DEVICE     BLACKBOX_DEVICE_SDCARD
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_VOLTAGE_METER_SCALE 143
#define DEFAULT_VOLTAGE_METER_DIVIDER 12
#define DEFAULT_CURRENT_METER_SCALE 168
#define BEEPER_INVERTED
#define SDCARD_DETECT_PIN NONE
#define SDIO_DEVICE SDIODEV_1
#define SDIO_USE_4BIT 1
#define SYSTEM_HSE_MHZ 25
#define MAX7456_SPI_INSTANCE SPI6
#define PINIO1_CONFIG 1 //set default low as enabled
#define PINIO2_CONFIG 1 //set default low as enabled
#define PINIO3_CONFIG 129 //set default high to select motors enabled
#define PINIO4_CONFIG 129 //set default high to select motors enabled
#define PINIO5_CONFIG 129 //set default high to cam 1
#define PINIO6_CONFIG 129 //set default high for GND
#define DEFAULT_GYRO_TO_USE GYRO_CONFIG_USE_GYRO_ALL //GYRO_CONFIG_USE_GYRO_BOTH
#define GYRO_1_SPI_INSTANCE SPI1
#define GYRO_1_ALIGN CW180_DEG
#define GYRO_2_SPI_INSTANCE SPI1
#define GYRO_2_ALIGN CW90_DEG
#define GYRO_3_SPI_INSTANCE SPI4
