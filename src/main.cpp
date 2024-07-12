#include "OpenKNX.h"
#include "Logic.h"
#include "BasicBinaryInputModule.h"
#include "VirtualButtonModule.h"
#include "FileTransferModule.h"
#include "LedModule.h"
#include "Presence.h"
#include "SensorDevices.h"
#include "SensorModule.h"

void setup()
{
    const uint8_t firmwareRevision = 0;
    openknx.init(firmwareRevision);

    openknx.addModule(1, openknxLogic);
    openknx.addModule(2, openknxBasicBinaryInputModule);
    openknx.addModule(3, openknxVirtualButtonModule);
    openknx.addModule(9, openknxFileTransferModule);
    openknx.addModule(4, openknxPresenceModule);
    openknx.addModule(5, openknxSensorModule);
    openknx.addModule(6, openknxSensorDevicesModule);
    openknx.addModule(7, openknxLedModule);

    openknx.setup();
}

void loop()
{
    openknx.loop();
}