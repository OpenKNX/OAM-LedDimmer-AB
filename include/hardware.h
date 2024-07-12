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

    #define TEMPSENS_PIN_SCL                        29
    #define TEMPSENS_PIN_SDA                        28

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
    #define OPENKNX_BASIC_BINARY_INPUT_GPIO_PINS    BI_PIN_A, BI_PIN_B, BI_PIN_C, BI_PIN_D

    /*#define I2C_WIRE Wire1
    #define I2C_SDA_PIN 26
    #define I2C_SCL_PIN 27
    */
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
    #define OPENKNX_BASIC_BINARY_INPUT_GPIO_PINS    BI_PIN_A, BI_PIN_B, BI_PIN_C, BI_PIN_D
#endif
