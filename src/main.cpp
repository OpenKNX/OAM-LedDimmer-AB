#include "OpenKNX.h"
#include "Logic.h"
#include "GpioBinaryInputModule.h"
#include "VirtualButtonModule.h"
#include "FileTransferModule.h"
#include "FunctionBlocksModule.h"

#if OPENKNX_SWA_CHANNEL_COUNT > 0 && SWA_ChannelCount > 0
    #include "SwitchActuatorModule.h"
#endif

#include "LedModule.h"
#include "SensorDevices.h"
#include "SensorModule.h"

void setup()
{
    const uint8_t firmwareRevision = 0;
    openknx.init(firmwareRevision);

    openknx.addModule(1, openknxLogic);
#if OPENKNX_BI_GPIO_COUNT > 0 && BI_ChannelCount > 0
    openknx.addModule(2, openknxGpioBinaryInputModule);
#endif
    openknx.addModule(3, openknxVirtualButtonModule);
#if OPENKNX_SWA_CHANNEL_COUNT > 0 && SWA_ChannelCount > 0
    openknx.addModule(4, openknxSwitchActuatorModule);
#endif
    openknx.addModule(9, openknxFileTransferModule);
    openknx.addModule(5, openknxSensorModule);
    openknx.addModule(6, openknxSensorDevicesModule);
    
    openknx.addModule(7, openknxLedModule);
    openknx.addModule(8, openknxFunctionBlocksModule);

    openknx.setup();

#ifdef BOARD_AB_SMARTHOUSE_CV_UP_6CH
    openknx.gpio.pinMode(LEDMODULE_HWV2_CHECK_PIN, INPUT_PULLUP);
    bool hwV2 = digitalRead(LEDMODULE_HWV2_CHECK_PIN) == LEDMODULE_HWV2_CHECK_PIN_ACTIVE_ON;

    openknx_gpio_number_t saveInterruptPin = hwV2 ? SAVE_INTERRUPT_PIN_HWV2 : SAVE_INTERRUPT_PIN_HWV1;
    openknx.gpio.pinMode(saveInterruptPin, INPUT);
    openknx.gpio.attachInterrupt(
        saveInterruptPin,
        [](openknx_gpio_number_t pin, bool state) -> void { openknx.common.triggerSavePin(); }, FALLING);
    
    if (hwV2)
    {
        const uint8_t dimPinsHWV2[LEDMODULE_MAX_LIGHT_CHANNELS] = {LEDMODULE_PWM_PINS_HWV2};
        memcpy(dimPins, dimPinsHWV2, sizeof(dimPins));
    }
    else
    {
        const uint8_t dimPinsHWV1[LEDMODULE_MAX_LIGHT_CHANNELS] = {LEDMODULE_PWM_PINS};
        memcpy(dimPins, dimPinsHWV1, sizeof(dimPins));
    }
#endif
}

void loop()
{
    openknx.loop();
}