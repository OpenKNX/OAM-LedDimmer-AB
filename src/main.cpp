#include "OpenKNX.h"
#include "Logic.h"
#include "BinaryInputModule.h"
#include "VirtualButtonModule.h"
#include "FileTransferModule.h"

//#include "LedModule.h"

//#include <string>
//#include "Sensor.h"

//#include "Presence.h"

//#include "SensorDevices.h"
//#include "SensorModule.h"




void setup()
{
    const uint8_t firmwareRevision = 0;
    openknx.init(firmwareRevision);

    uint8_t gpioPins[BI_ChannelCount] = {BI_PIN_A, BI_PIN_B, BI_PIN_C, BI_PIN_D};

    openknxBinaryInputModule.setPins(gpioPins);

    
    openknx.addModule(1, openknxLogic);
    openknx.addModule(2, openknxBinaryInputModule);
    openknx.addModule(3, openknxVirtualButtonModule);
    openknx.addModule(9, openknxFileTransferModule);
    //openknx.addModule(4, openknxLedModule);
    openknx.setup();
}

void loop()
{
    openknx.loop();
}