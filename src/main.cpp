#include "OpenKNX.h"
#include "Logic.h"
#include "GpioBinaryInputModule.h"
#include "VirtualButtonModule.h"
#include "FileTransferModule.h"
#include "LedModule.h"
// #include "Presence.h"
// #include "SensorDevices.h"
// #include "SensorModule.h"

Generic_LM75_9_to_12Bit_OneShot mytemperature(OPENKNX_LED_TEMPSENS_ADDR);

void setup()
{
    const uint8_t firmwareRevision = 0;
    openknx.init(firmwareRevision);

    openknx.addModule(1, openknxLogic);
#if defined(OPENKNX_BI_GPIO_PINS) && OPENKNX_BI_GPIO_COUNT > 0 && BI_ChannelCount > 0
    openknx.addModule(2, openknxGpioBinaryInputModule);
#endif
    openknx.addModule(3, openknxVirtualButtonModule);
    openknx.addModule(9, openknxFileTransferModule);
    // openknx.addModule(4, openknxPresenceModule);
    // openknx.addModule(6, openknxSensorDevicesModule);
    // openknx.addModule(5, openknxSensorModule);
    
    openknx.addModule(7, openknxLedModule);

    openknx.setup();
}

void loop()
{
    openknx.loop();
}