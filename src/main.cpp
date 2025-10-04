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
}

void loop()
{
    openknx.loop();
}