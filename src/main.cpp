#include "OpenKNX.h"
#include "Logic.h"
#include "GpioBinaryInputModule.h"
#include "VirtualButtonModule.h"
#include "FileTransferModule.h"
#include "SwitchActuatorModule.h"
#include "LedModule.h"
// #include "Presence.h"
// #include "SensorDevices.h"
// #include "SensorModule.h"

#ifdef OPENKNX_GPIO_NUM
#include "GPIOModule.h"
#endif

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
    // openknx.addModule(4, openknxPresenceModule);
    // openknx.addModule(5, openknxSensorModule);
    // openknx.addModule(6, openknxSensorDevicesModule);
    
    openknx.addModule(7, openknxLedModule);

#ifdef OPENKNX_GPIO_NUM
    openknx.addModule(8, openknxGPIOModule);
#endif

    openknx.setup();
}

void loop()
{
    openknx.loop();
}