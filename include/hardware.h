#pragma once

// Common values:
#define LEDMODULE_PWM_FREQ 1000

/**
 * @brief LED-UP1-4x24V
 */
#ifdef BOARD_LEDUP14x24V

    #define HARDWARE_NAME "LED-UP1-4x24V"

    #define OKNXHW_UP1_CONTROLLER2040
    #include "OpenKNXHardware.h"

    #undef SAVE_INTERRUPT_PIN

    #define INFO_LED_PIN                            12
    #define INFO_LED_PIN_ACTIVE_ON                  HIGH

    #define OPENKNX_LED_TEMPSENS_WIRE               Wire
    #define OPENKNX_LED_TEMPSENS_ADDR               0x49
    #define OPENKNX_LED_TEMPSENS_PIN_SCL            29
    #define OPENKNX_LED_TEMPSENS_PIN_SDA            28

    #define LEDMODULE_DIMMMER_RP2040
    #define LED_PWM_PIN_A                           24
    #define LED_PWM_PIN_B                           22
    #define LED_PWM_PIN_C                           20
    #define LED_PWM_PIN_D                           18
    #define LEDMODULE_PWM_PINS                      LED_PWM_PIN_A, LED_PWM_PIN_B, LED_PWM_PIN_C, LED_PWM_PIN_D
    #define LEDMODULE_MAX_LIGHT_CHANNELS            4    

    #define BI_PIN_A                                13
    #define BI_PIN_B                                14
    #define BI_PIN_C                                15
    #define BI_PIN_D                                17
    #define OPENKNX_BI_GPIO_COUNT                   4
    #define OPENKNX_BI_GPIO_PINS                    BI_PIN_A, BI_PIN_B, BI_PIN_C, BI_PIN_D

    /*#define I2C_WIRE Wire1
    #define I2C_SDA_PIN 26
    #define I2C_SCL_PIN 27
    */
#endif

/**
 * @brief LED-REG6-16x24V
 */
#ifdef BOARD_LED_REG6_16x24V

    #define HARDWARE_NAME                           "LED-REG6-16x24V"

    // TODO: Add correct configurations
    #define OKNXHW_REG1_BASE_V1
    //#define OKNXHW_UP1_CONTROLLER2040
    #include "OpenKNXHardware.h"

    #undef SAVE_INTERRUPT_PIN

    
    #define LEDMODULE_DIMMER_PCA9685
    #define LEDMODULE_WIRE                          Wire
    #define LEDMODULE_WIRE_SDA                      28
    #define LEDMODULE_WIRE_SCL                      29
    #define LEDMODULE_WIRE_CLOCK_FREQ               100000
    #define LEDMODULE_MAX_LIGHT_CHANNELS            16
    #define LEDMODULE_PCA_ADDR                      0x40

    //#define OPENKNX_LED_TEMPSENS_WIRE               Wire
    //#define OPENKNX_LED_TEMPSENS_PIN_SCL            29
    //#define OPENKNX_LED_TEMPSENS_PIN_SDA            28

    #define BI_PIN_A                                13
    #define BI_PIN_B                                14
    #define BI_PIN_C                                15
    #define BI_PIN_D                                17
    #define OPENKNX_BI_GPIO_COUNT                   4
    #define OPENKNX_BI_GPIO_PINS                    BI_PIN_A, BI_PIN_B, BI_PIN_C, BI_PIN_D
#endif

/**
 * @brief LED-UP1-6x24V
 */
#ifdef BOARD_LEDUP16x24V

    #define HARDWARE_NAME                           "LED-UP1-6x24V"

    // TODO: Add correct configurations
    #define OKNXHW_UP1_CONTROLLER2040
    #include "OpenKNXHardware.h"

    #define LEDMODULE_DIMMER_PCA9685
    #define LEDMODULE_WIRE                          Wire1
    #define LEDMODULE_WIRE_SDA                      14
    #define LEDMODULE_WIRE_SCL                      15
    #define LEDMODULE_WIRE_CLOCK_FREQ               1000000
    #define LEDMODULE_MAX_LIGHT_CHANNELS            6
#endif


/**
 * @brief  RVNSPRK Test Configuration
 */
#ifdef BOARD_LEDRVNSPRK

    #define HARDWARE_NAME                           "RVNSPRK TEST"
    #define PROG_LED_PIN                            23
    #define PROG_LED_PIN_ACTIVE_ON                  HIGH
    #define PROG_BUTTON_PIN                         24
    #define PROG_BUTTON_PIN_INTERRUPT_ON            FALLING
    #define SAVE_INTERRUPT_PIN                      10
    #define KNX_SERIAL                              Serial1
    #define KNX_UART_RX_PIN                         13
    #define KNX_UART_TX_PIN                         12

    #define LEDMODULE_DIMMMER_RP2040
    #define LED_PWM_PIN_A                           28
    #define LED_PWM_PIN_B                           29
    #define LED_PWM_PIN_C                           20
    #define LED_PWM_PIN_D                           21
    #define LEDMODULE_PWM_PINS                      LED_PWM_PIN_A, LED_PWM_PIN_B, LED_PWM_PIN_C, LED_PWM_PIN_D
    #define LEDMODULE_MAX_LIGHT_CHANNELS            4     

    #define BI_PIN_A                                18
    #define BI_PIN_B                                14
    #define BI_PIN_C                                15
    #define BI_PIN_D                                17
    #define OPENKNX_BI_GPIO_PINS                    BI_PIN_A, BI_PIN_B, BI_PIN_C, BI_PIN_D
    #define OPENKNX_BI_GPIO_COUNT                   4

    #define OPENKNX_LED_TEMPSENS_WIRE               Wire
    #define OPENKNX_LED_TEMPSENS_ADDR               0x49
    #define OPENKNX_LED_TEMPSENS_PIN_SCL            5
    #define OPENKNX_LED_TEMPSENS_PIN_SDA            4
#endif




/**
 * @brief  AB-SmartHouse Constant Voltage (CV) UP 6CH
 */
#ifdef BOARD_AB_SMARTHOUSE_CV_UP_6CH
    #define DEVICE_ID                               "AB-DIM-CV-UP-6CH"
    #define HARDWARE_NAME                           "AB-DIM-CV-UP-6CH"
    #define DEVICE_NAME                             "AB-SmartHouse LED-Dimmer CV UP 6CH"
    #define INFO_LED_PIN                            11
    #define INFO_LED_PIN_ACTIVE_ON                  HIGH
    #define PROG_LED_PIN                            10
    #define PROG_LED_PIN_ACTIVE_ON                  HIGH
    #define PROG_BUTTON_PIN                         9
    #define PROG_BUTTON_PIN_INTERRUPT_ON            FALLING
    #define SAVE_INTERRUPT_PIN                      0
    #define KNX_SERIAL                              Serial1
    #define KNX_UART_RX_PIN                         13
    #define KNX_UART_TX_PIN                         12

    #define LEDMODULE_DIMMMER_RP2040
    #define LED_PWM_PIN_A                           1
    #define LED_PWM_PIN_B                           2
    #define LED_PWM_PIN_C                           3
    #define LED_PWM_PIN_D                           4
    #define LED_PWM_PIN_E                           5
    #define LED_PWM_PIN_F                           6
    #define LEDMODULE_PWM_PINS                      LED_PWM_PIN_A, LED_PWM_PIN_B, LED_PWM_PIN_C, LED_PWM_PIN_D, LED_PWM_PIN_E, LED_PWM_PIN_F
    #define LEDMODULE_MAX_LIGHT_CHANNELS            6
    #define LEDMODULE_VOLTAGE_MEASURE_PIN           29
    #define LEDMODULE_VOLTAGE_MEASURE_FACTOR        15.2429343
    #define LEDMODULE_EXT0_PIN                      23
    #define LEDMODULE_EXT1_PIN                      24

    #define OPENKNX_BI_GPIO_COUNT                   0

    #define OPENKNX_LED_TEMPSENS_WIRE               Wire
    #define OPENKNX_LED_TEMPSENS_ADDR               0x48
    #define OPENKNX_LED_TEMPSENS_PIN_SCL            21
    #define OPENKNX_LED_TEMPSENS_PIN_SDA            20
#endif

/**
 * @brief  AB-SmartHouse Constant Voltage (CV) REG 12CH
 */
#ifdef BOARD_AB_SMARTHOUSE_CV_REG_12CH
    #define DEVICE_ID                               "AB-DIM-CV-REG-12CH"
    #define HARDWARE_NAME                           "AB-DIM-CV-REG-12CH"
    #define DEVICE_NAME                             "AB-SmartHouse LED-Dimmer CV REG 12CH"
    #define INFO_LED_PIN                            11
    #define INFO_LED_PIN_ACTIVE_ON                  HIGH
    #define PROG_LED_PIN                            10
    #define PROG_LED_PIN_ACTIVE_ON                  HIGH
    #define PROG_BUTTON_PIN                         9
    #define PROG_BUTTON_PIN_INTERRUPT_ON            FALLING
    #define SAVE_INTERRUPT_PIN                      0
    #define KNX_SERIAL                              Serial1
    #define KNX_UART_RX_PIN                         13
    #define KNX_UART_TX_PIN                         12

    #define LEDMODULE_DIMMMER_RP2040
    #define LED_PWM_PIN_A                           25
    #define LED_PWM_PIN_B                           24
    #define LED_PWM_PIN_C                           23
    #define LED_PWM_PIN_D                           22
    #define LED_PWM_PIN_E                           21
    #define LED_PWM_PIN_F                           20
    #define LED_PWM_PIN_G                           19
    #define LED_PWM_PIN_H                           18
    #define LED_PWM_PIN_I                           14
    #define LED_PWM_PIN_J                           15
    #define LED_PWM_PIN_K                           16
    #define LED_PWM_PIN_L                           17
    #define LEDMODULE_PWM_PINS                      LED_PWM_PIN_A, LED_PWM_PIN_B, LED_PWM_PIN_C, LED_PWM_PIN_D, LED_PWM_PIN_E, LED_PWM_PIN_F, LED_PWM_PIN_G, LED_PWM_PIN_H, LED_PWM_PIN_I, LED_PWM_PIN_J, LED_PWM_PIN_K, LED_PWM_PIN_L
    #define LEDMODULE_MAX_LIGHT_CHANNELS            12
    #define LEDMODULE_VOLTAGE_MEASURE_PIN           29
    #define LEDMODULE_VOLTAGE_MEASURE_FACTOR        15.2429343
    #define LEDMODULE_FRONT_PLATE_USED              true

    #define OPENKNX_BI_GPIO_COUNT                   0

    #define OPENKNX_GPIO_NUM                        2
    #define OPENKNX_GPIO_TYPES                      OPENKNX_GPIO_T_TCA9555, OPENKNX_GPIO_T_TCA9555
    #define OPENKNX_GPIO_ADDRS                      0x20, 0x21
    #define OPENKNX_GPIO_INTS                       0xFF, 0x08

    #define OPENKNX_GPIO_WIRE                       Wire1
    #define OPENKNX_GPIO_SDA                        6
    #define OPENKNX_GPIO_SCL                        7
    #define OPENKNX_GPIO_CLOCK                      400000

    #define OPENKNX_LED_TEMPSENS_ADDR               0x48
#endif

/**
 * @brief  AB-SmartHouse Constant Current (CC) UP 8CH
 */
#ifdef BOARD_AB_SMARTHOUSE_CC_UP_8CH
    #define DEVICE_ID                               "AB-DIM-CC-UP-8CH"
    #define HARDWARE_NAME                           "AB-DIM-CC-UP-8CH"
    #define DEVICE_NAME                             "AB-SmartHouse LED-Dimmer CC UP 8CH"
    #define INFO_LED_PIN                            11
    #define INFO_LED_PIN_ACTIVE_ON                  HIGH
    #define PROG_LED_PIN                            10
    #define PROG_LED_PIN_ACTIVE_ON                  HIGH
    #define PROG_BUTTON_PIN                         9
    #define PROG_BUTTON_PIN_INTERRUPT_ON            FALLING
    #define SAVE_INTERRUPT_PIN                      12
    #define KNX_SERIAL                              Serial1
    #define KNX_UART_RX_PIN                         17
    #define KNX_UART_TX_PIN                         16

    #define LEDMODULE_DIMMMER_RP2040
    #define LED_PWM_PIN_A                           1
    #define LED_PWM_PIN_B                           2
    #define LED_PWM_PIN_C                           3
    #define LED_PWM_PIN_D                           4
    #define LED_PWM_PIN_E                           5
    #define LED_PWM_PIN_F                           6
    #define LED_PWM_PIN_G                           7
    #define LED_PWM_PIN_H                           8
    #define LEDMODULE_PWM_PINS                      LED_PWM_PIN_A, LED_PWM_PIN_B, LED_PWM_PIN_C, LED_PWM_PIN_D, LED_PWM_PIN_E, LED_PWM_PIN_F, LED_PWM_PIN_G, LED_PWM_PIN_H
    #define LEDMODULE_MAX_LIGHT_CHANNELS            8
    #define LEDMODULE_VOLTAGE_MEASURE_PIN           29
    #define LEDMODULE_VOLTAGE_MEASURE_FACTOR        20.608751
    #define LEDMODULE_EXT0_PIN                      18
    #define LEDMODULE_EXT1_PIN                      19
    #define LEDMODULE_DIM_TYPE_PIN                  24

    #define OPENKNX_BI_GPIO_COUNT                   0

    #define OPENKNX_LED_TEMPSENS_WIRE               Wire
    #define OPENKNX_LED_TEMPSENS_ADDR               0x48
    #define OPENKNX_LED_TEMPSENS_PIN_SCL            21
    #define OPENKNX_LED_TEMPSENS_PIN_SDA            20
#endif

/**
 * @brief  AB-SmartHouse Constant Current (CC) UP 16CH
 */
#ifdef BOARD_AB_SMARTHOUSE_CC_UP_16CH
    #define DEVICE_ID                               "AB-DIM-CC-UP-16CH"
    #define HARDWARE_NAME                           "AB-DIM-CC-UP-16CH"
    #define DEVICE_NAME                             "AB-SmartHouse LED-Dimmer CC UP 16CH"
    #define INFO_LED_PIN                            11
    #define INFO_LED_PIN_ACTIVE_ON                  HIGH
    #define PROG_LED_PIN                            10
    #define PROG_LED_PIN_ACTIVE_ON                  HIGH
    #define PROG_BUTTON_PIN                         9
    #define PROG_BUTTON_PIN_INTERRUPT_ON            FALLING
    #define SAVE_INTERRUPT_PIN                      12
    #define KNX_SERIAL                              Serial1
    #define KNX_UART_RX_PIN                         17
    #define KNX_UART_TX_PIN                         16

    #define LEDMODULE_DIMMMER_RP2040
    #define LED_PWM_PIN_A                           1
    #define LED_PWM_PIN_B                           2
    #define LED_PWM_PIN_C                           3
    #define LED_PWM_PIN_D                           4
    #define LED_PWM_PIN_E                           5
    #define LED_PWM_PIN_F                           6
    #define LED_PWM_PIN_G                           7
    #define LED_PWM_PIN_H                           8
    #define LED_PWM_PIN_I                           13
    #define LED_PWM_PIN_J                           14
    #define LED_PWM_PIN_K                           15
    #define LED_PWM_PIN_L                           25
    #define LED_PWM_PIN_M                           26
    #define LED_PWM_PIN_N                           27
    #define LED_PWM_PIN_O                           28
    #define LED_PWM_PIN_P                           0
    #define LEDMODULE_PWM_PINS                      LED_PWM_PIN_A, LED_PWM_PIN_B, LED_PWM_PIN_C, LED_PWM_PIN_D, LED_PWM_PIN_E, LED_PWM_PIN_F, LED_PWM_PIN_G, LED_PWM_PIN_H, LED_PWM_PIN_I, LED_PWM_PIN_J, LED_PWM_PIN_K, LED_PWM_PIN_L, LED_PWM_PIN_M, LED_PWM_PIN_N, LED_PWM_PIN_O, LED_PWM_PIN_P
    #define LEDMODULE_MAX_LIGHT_CHANNELS            16
    #define LEDMODULE_VOLTAGE_MEASURE_PIN           29
    #define LEDMODULE_VOLTAGE_MEASURE_FACTOR        20.608751
    #define LEDMODULE_EXT0_PIN                      18
    #define LEDMODULE_EXT1_PIN                      19
    #define LEDMODULE_DIM_TYPE_PIN                  24

    #define OPENKNX_BI_GPIO_COUNT                   0

    #define OPENKNX_LED_TEMPSENS_WIRE               Wire
    #define OPENKNX_LED_TEMPSENS_ADDR               0x48
    #define OPENKNX_LED_TEMPSENS_PIN_SCL            21
    #define OPENKNX_LED_TEMPSENS_PIN_SDA            20
#endif

/**
 * @brief  AB-SmartHouse Constant Voltage (CC) REG 12CH
 */
#ifdef BOARD_AB_SMARTHOUSE_CC_REG_12CH
    #define DEVICE_ID                               "AB-DIM-CC-REG-12CH"
    #define HARDWARE_NAME                           "AB-DIM-CC-REG-12CH"
    #define DEVICE_NAME                             "AB-SmartHouse LED-Dimmer CC REG 12CH"
    #define INFO_LED_PIN                            11
    #define INFO_LED_PIN_ACTIVE_ON                  HIGH
    #define PROG_LED_PIN                            10
    #define PROG_LED_PIN_ACTIVE_ON                  HIGH
    #define PROG_BUTTON_PIN                         9
    #define PROG_BUTTON_PIN_INTERRUPT_ON            FALLING
    #define SAVE_INTERRUPT_PIN                      0
    #define KNX_SERIAL                              Serial1
    #define KNX_UART_RX_PIN                         13
    #define KNX_UART_TX_PIN                         12

    #define LEDMODULE_DIMMMER_RP2040
    #define LED_PWM_PIN_A                           25
    #define LED_PWM_PIN_B                           24
    #define LED_PWM_PIN_C                           23
    #define LED_PWM_PIN_D                           22
    #define LED_PWM_PIN_E                           21
    #define LED_PWM_PIN_F                           20
    #define LED_PWM_PIN_G                           19
    #define LED_PWM_PIN_H                           18
    #define LED_PWM_PIN_I                           14
    #define LED_PWM_PIN_J                           15
    #define LED_PWM_PIN_K                           16
    #define LED_PWM_PIN_L                           17
    #define LEDMODULE_PWM_PINS                      LED_PWM_PIN_A, LED_PWM_PIN_B, LED_PWM_PIN_C, LED_PWM_PIN_D, LED_PWM_PIN_E, LED_PWM_PIN_F, LED_PWM_PIN_G, LED_PWM_PIN_H, LED_PWM_PIN_I, LED_PWM_PIN_J, LED_PWM_PIN_K, LED_PWM_PIN_L
    #define LEDMODULE_MAX_LIGHT_CHANNELS            12
    #define LEDMODULE_VOLTAGE_MEASURE_PIN           29
    #define LEDMODULE_VOLTAGE_MEASURE_FACTOR        20.608751
    #define LEDMODULE_DIM_TYPE_PIN                  28
    #define LEDMODULE_FRONT_PLATE_USED              true

    #define OPENKNX_BI_GPIO_COUNT                   0

    #define OPENKNX_GPIO_NUM                        2
    #define OPENKNX_GPIO_TYPES                      OPENKNX_GPIO_T_TCA9555, OPENKNX_GPIO_T_TCA9555
    #define OPENKNX_GPIO_ADDRS                      0x20, 0x21
    #define OPENKNX_GPIO_INTS                       0xFF, 0x08

    #define OPENKNX_GPIO_WIRE                       Wire1
    #define OPENKNX_GPIO_SDA                        6
    #define OPENKNX_GPIO_SCL                        7
    #define OPENKNX_GPIO_CLOCK                      400000

    #define OPENKNX_LED_TEMPSENS_ADDR               0x48
#endif