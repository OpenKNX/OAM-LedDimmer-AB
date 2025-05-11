#pragma once

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

    #define OPENKNX_BI_GPIO_COUNT                   4
    #define OPENKNX_BI_GPIO_PINS                    0x0108, 0x0109, 0x0110, 0x0111
    #define OPENKNX_BI_ONLEVEL                      LOW

    #define OPENKNX_SWA_CHANNEL_COUNT               1
    #define OPENKNX_SWA_SET_PINS                    0x0100
    #define OPENKNX_SWA_RESET_PINS                  0x0101
    #define OPENKNX_SWA_SET_ACTIVE_ON               LOW
    #define OPENKNX_SWA_RESET_ACTIVE_ON             LOW
    #define OPENKNX_SWA_BISTABLE_IMPULSE_LENGTH     50

    #define OPENKNX_GPIO_NUM                        1
    #define OPENKNX_GPIO_TYPES                      OPENKNX_GPIO_T_TCA9555
    #define OPENKNX_GPIO_ADDRS                      0x20
    #define OPENKNX_GPIO_INTS                       23

    #define OPENKNX_GPIO_WIRE                       Wire
    #define OPENKNX_GPIO_SDA                        20
    #define OPENKNX_GPIO_SCL                        21
    #define OPENKNX_GPIO_CLOCK                      400000

    #define OPENKNX_LED_TEMPSENS_ADDR               0x48
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
    #define OPENKNX_LED_GPIO_OUTPUT_OFFSET          0x0100
    #define OPENKNX_LED_GPIO_OUTPUT_ACTIVE_ON       HIGH
    #define OPENKNX_LED_GPIO_INPUT_OFFSET           0x0200
    #define OPENKNX_LED_GPIO_INPUT_ACTIVE_ON        LOW

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
    //#define OPENKNX_BI_GPIO_PINS                    0x0108, 0x0109, 0x0110, 0x0111
    #define OPENKNX_BI_ONLEVEL                      LOW

    #define OPENKNX_SWA_CHANNEL_COUNT               1
    #define OPENKNX_SWA_SET_PINS                    0x0100
    #define OPENKNX_SWA_RESET_PINS                  0x0101
    #define OPENKNX_SWA_SET_ACTIVE_ON               LOW
    #define OPENKNX_SWA_RESET_ACTIVE_ON             LOW
    #define OPENKNX_SWA_BISTABLE_IMPULSE_LENGTH     50

    #define OPENKNX_GPIO_NUM                        1
    #define OPENKNX_GPIO_TYPES                      OPENKNX_GPIO_T_TCA9555
    #define OPENKNX_GPIO_ADDRS                      0x20
    #define OPENKNX_GPIO_INTS                       18

    #define OPENKNX_GPIO_WIRE                       Wire
    #define OPENKNX_GPIO_SDA                        20
    #define OPENKNX_GPIO_SCL                        21
    #define OPENKNX_GPIO_CLOCK                      400000

    #define OPENKNX_LED_TEMPSENS_ADDR               0x48
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

    #define OPENKNX_BI_GPIO_COUNT                   4
    #define OPENKNX_BI_GPIO_PINS                    0x0108, 0x0109, 0x0110, 0x0111
    #define OPENKNX_BI_ONLEVEL                      LOW

    #define OPENKNX_SWA_CHANNEL_COUNT               1
    #define OPENKNX_SWA_SET_PINS                    0x0100
    #define OPENKNX_SWA_RESET_PINS                  0x0101
    #define OPENKNX_SWA_SET_ACTIVE_ON               LOW
    #define OPENKNX_SWA_RESET_ACTIVE_ON             LOW
    #define OPENKNX_SWA_BISTABLE_IMPULSE_LENGTH     50

    #define OPENKNX_GPIO_NUM                        1
    #define OPENKNX_GPIO_TYPES                      OPENKNX_GPIO_T_TCA9555
    #define OPENKNX_GPIO_ADDRS                      0x20
    #define OPENKNX_GPIO_INTS                       18

    #define OPENKNX_GPIO_WIRE                       Wire
    #define OPENKNX_GPIO_SDA                        20
    #define OPENKNX_GPIO_SCL                        21
    #define OPENKNX_GPIO_CLOCK                      400000

    #define OPENKNX_LED_TEMPSENS_ADDR               0x48
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