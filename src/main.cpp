#include "OpenKNX.h"
#include "Logic.h"
#include "GpioBinaryInputModule.h"
#include "VirtualButtonModule.h"
#include "FileTransferModule.h"
#include "LedModule.h"
// #include "Presence.h"
// #include "SensorDevices.h"
// #include "SensorModule.h"

#include <Temperature_LM75_Derived.h>

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

    OPENKNX_LED_TEMPSENS_WIRE.setSCL(OPENKNX_LED_TEMPSENS_PIN_SCL);
    OPENKNX_LED_TEMPSENS_WIRE.setSDA(OPENKNX_LED_TEMPSENS_PIN_SDA);
    OPENKNX_LED_TEMPSENS_WIRE.begin();
}

void loop()
{
    openknx.loop();
    if(millis()%2000 == 357)
    {
        Serial.print("Temperature 1 = ");
        Serial.print(mytemperature.readTemperatureC());
        Serial.println(" C");
    }
}