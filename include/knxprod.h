#pragma once


#define paramDelay(time) (uint32_t)( \
            (time & 0xC000) == 0xC000 ? (time & 0x3FFF) * 100 : \
            (time & 0xC000) == 0x0000 ? (time & 0x3FFF) * 1000 : \
            (time & 0xC000) == 0x4000 ? (time & 0x3FFF) * 60000 : \
            (time & 0xC000) == 0x8000 ? ((time & 0x3FFF) > 1000 ? 3600000 : \
                                         (time & 0x3FFF) * 3600000 ) : 0 )
                                             
#define ETS_ModuleId_NONE 0
#define ETS_ModuleId_BASE 1
#define ETS_ModuleId_UCT 2
#define ETS_ModuleId_LED 3
#define ETS_ModuleId_LED_SC 4
#define ETS_ModuleId_LED_TW 5
#define ETS_ModuleId_LED_RGB 6
#define ETS_ModuleId_SWA 7
#define ETS_ModuleId_BI 8
#define ETS_ModuleId_BTN 9
#define ETS_ModuleId_SENS 10
#define ETS_ModuleId_LOG 11
#define ETS_ModuleId_FCB 12
#ifndef FIRMWARE_NAME
    #define FIRMWARE_NAME "LED-Dimmer (AB-SmartHouse) (dev)"
#endif
#define MAIN_OpenKnxId 0xAF
#define MAIN_ApplicationNumber 7
#define MAIN_ApplicationVersion 13
#define MAIN_ApplicationEncoding iso-8859-15
#define MAIN_ParameterSize 6294
#define MAIN_MaxKoNumber 859
#define MAIN_OrderNumber "OpenKnxLedDimmerAB"
#define BASE_ModuleVersion 21
#define UCT_ModuleVersion 4
#define LED_ModuleVersion 10
#define SWA_ModuleVersion 1
#define BI_ModuleVersion 2
#define BTN_ModuleVersion 5
#define SENS_ModuleVersion 67
#define LOG_ModuleVersion 55
#define FCB_ModuleVersion 6
// Parameter with single occurrence


#define BASE_StartupDelayBase                     0      // 2 Bits, Bit 7-6
#define     BASE_StartupDelayBaseMask 0xC0
#define     BASE_StartupDelayBaseShift 6
#define BASE_StartupDelayTime                     0      // 14 Bits, Bit 13-0
#define     BASE_StartupDelayTimeMask 0x3FFF
#define     BASE_StartupDelayTimeShift 0
#define BASE_HeartbeatDelayBase                   2      // 2 Bits, Bit 7-6
#define     BASE_HeartbeatDelayBaseMask 0xC0
#define     BASE_HeartbeatDelayBaseShift 6
#define BASE_HeartbeatDelayTime                   2      // 14 Bits, Bit 13-0
#define     BASE_HeartbeatDelayTimeMask 0x3FFF
#define     BASE_HeartbeatDelayTimeShift 0
#define BASE_Timezone                             4      // 5 Bits, Bit 7-3
#define     BASE_TimezoneMask 0xF8
#define     BASE_TimezoneShift 3
#define BASE_CombinedTimeDate                     4      // 1 Bit, Bit 2
#define     BASE_CombinedTimeDateMask 0x04
#define     BASE_CombinedTimeDateShift 2
#define BASE_SummertimeAll                        4      // 2 Bits, Bit 1-0
#define     BASE_SummertimeAllMask 0x03
#define     BASE_SummertimeAllShift 0
#define BASE_SummertimeDE                         4      // 2 Bits, Bit 1-0
#define     BASE_SummertimeDEMask 0x03
#define     BASE_SummertimeDEShift 0
#define BASE_SummertimeWorld                      4      // 2 Bits, Bit 1-0
#define     BASE_SummertimeWorldMask 0x03
#define     BASE_SummertimeWorldShift 0
#define BASE_SummertimeKO                         4      // 2 Bits, Bit 1-0
#define     BASE_SummertimeKOMask 0x03
#define     BASE_SummertimeKOShift 0
#define BASE_TimezoneCustom                       5      // char*, 63 Byte
#define BASE_Latitude                            69      // float
#define BASE_Longitude                           73      // float
#define BASE_Diagnose                            78      // 1 Bit, Bit 7
#define     BASE_DiagnoseMask 0x80
#define     BASE_DiagnoseShift 7
#define BASE_Watchdog                            78      // 1 Bit, Bit 6
#define     BASE_WatchdogMask 0x40
#define     BASE_WatchdogShift 6
#define BASE_ReadTimeDate                        78      // 1 Bit, Bit 5
#define     BASE_ReadTimeDateMask 0x20
#define     BASE_ReadTimeDateShift 5
#define BASE_HeartbeatExtended                   78      // 1 Bit, Bit 4
#define     BASE_HeartbeatExtendedMask 0x10
#define     BASE_HeartbeatExtendedShift 4
#define BASE_InternalTime                        78      // 1 Bit, Bit 3
#define     BASE_InternalTimeMask 0x08
#define     BASE_InternalTimeShift 3
#define BASE_ManualSave                          78      // 3 Bits, Bit 2-0
#define     BASE_ManualSaveMask 0x07
#define     BASE_ManualSaveShift 0
#define BASE_PeriodicSave                        79      // 8 Bits, Bit 7-0
#define BASE_Dummy                               109      // uint8_t
#define BASE_ModuleEnabled_UCT                   110      // 1 Bit, Bit 6
#define     BASE_ModuleEnabled_UCTMask 0x40
#define     BASE_ModuleEnabled_UCTShift 6
#define BASE_ModuleEnabled_LED                   110      // 1 Bit, Bit 5
#define     BASE_ModuleEnabled_LEDMask 0x20
#define     BASE_ModuleEnabled_LEDShift 5
#define BASE_ModuleEnabled_LED_SC                110      // 1 Bit, Bit 4
#define     BASE_ModuleEnabled_LED_SCMask 0x10
#define     BASE_ModuleEnabled_LED_SCShift 4
#define BASE_ModuleEnabled_LED_TW                110      // 1 Bit, Bit 3
#define     BASE_ModuleEnabled_LED_TWMask 0x08
#define     BASE_ModuleEnabled_LED_TWShift 3
#define BASE_ModuleEnabled_LED_RGB               110      // 1 Bit, Bit 2
#define     BASE_ModuleEnabled_LED_RGBMask 0x04
#define     BASE_ModuleEnabled_LED_RGBShift 2
#define BASE_ModuleEnabled_SWA                   110      // 1 Bit, Bit 1
#define     BASE_ModuleEnabled_SWAMask 0x02
#define     BASE_ModuleEnabled_SWAShift 1
#define BASE_ModuleEnabled_BI                    110      // 1 Bit, Bit 0
#define     BASE_ModuleEnabled_BIMask 0x01
#define     BASE_ModuleEnabled_BIShift 0
#define BASE_ModuleEnabled_BTN                   111      // 1 Bit, Bit 7
#define     BASE_ModuleEnabled_BTNMask 0x80
#define     BASE_ModuleEnabled_BTNShift 7
#define BASE_ModuleEnabled_SENS                  111      // 1 Bit, Bit 6
#define     BASE_ModuleEnabled_SENSMask 0x40
#define     BASE_ModuleEnabled_SENSShift 6
#define BASE_ModuleEnabled_LOG                   111      // 1 Bit, Bit 5
#define     BASE_ModuleEnabled_LOGMask 0x20
#define     BASE_ModuleEnabled_LOGShift 5
#define BASE_ModuleEnabled_FCB                   111      // 1 Bit, Bit 4
#define     BASE_ModuleEnabled_FCBMask 0x10
#define     BASE_ModuleEnabled_FCBShift 4

// Zeitbasis
#define ParamBASE_StartupDelayBase                    ((knx.paramByte(BASE_StartupDelayBase) & BASE_StartupDelayBaseMask) >> BASE_StartupDelayBaseShift)
// Zeit
#define ParamBASE_StartupDelayTime                    (knx.paramWord(BASE_StartupDelayTime) & BASE_StartupDelayTimeMask)
// Zeit (in Millisekunden)
#define ParamBASE_StartupDelayTimeMS                  (paramDelay(knx.paramWord(BASE_StartupDelayTime)))
// Zeitbasis
#define ParamBASE_HeartbeatDelayBase                  ((knx.paramByte(BASE_HeartbeatDelayBase) & BASE_HeartbeatDelayBaseMask) >> BASE_HeartbeatDelayBaseShift)
// Zeit
#define ParamBASE_HeartbeatDelayTime                  (knx.paramWord(BASE_HeartbeatDelayTime) & BASE_HeartbeatDelayTimeMask)
// Zeit (in Millisekunden)
#define ParamBASE_HeartbeatDelayTimeMS                (paramDelay(knx.paramWord(BASE_HeartbeatDelayTime)))
// Zeitzone
#define ParamBASE_Timezone                            ((knx.paramByte(BASE_Timezone) & BASE_TimezoneMask) >> BASE_TimezoneShift)
// Empfangen über
#define ParamBASE_CombinedTimeDate                    ((bool)(knx.paramByte(BASE_CombinedTimeDate) & BASE_CombinedTimeDateMask))
// Sommerzeit ermitteln durch
#define ParamBASE_SummertimeAll                       (knx.paramByte(BASE_SummertimeAll) & BASE_SummertimeAllMask)
// Sommerzeit ermitteln durch
#define ParamBASE_SummertimeDE                        (knx.paramByte(BASE_SummertimeDE) & BASE_SummertimeDEMask)
// Sommerzeit ermitteln durch
#define ParamBASE_SummertimeWorld                     (knx.paramByte(BASE_SummertimeWorld) & BASE_SummertimeWorldMask)
// Sommerzeit ermitteln durch
#define ParamBASE_SummertimeKO                        (knx.paramByte(BASE_SummertimeKO) & BASE_SummertimeKOMask)
// POSIX TZ-String
#define ParamBASE_TimezoneCustom                      (knx.paramData(BASE_TimezoneCustom))
// Breitengrad
#define ParamBASE_Latitude                            (knx.paramFloat(BASE_Latitude, Float_Enc_IEEE754Single))
// Längengrad
#define ParamBASE_Longitude                           (knx.paramFloat(BASE_Longitude, Float_Enc_IEEE754Single))
// Diagnoseobjekt anzeigen
#define ParamBASE_Diagnose                            ((bool)(knx.paramByte(BASE_Diagnose) & BASE_DiagnoseMask))
// Watchdog aktivieren
#define ParamBASE_Watchdog                            ((bool)(knx.paramByte(BASE_Watchdog) & BASE_WatchdogMask))
// Bei Neustart vom Bus lesen
#define ParamBASE_ReadTimeDate                        ((bool)(knx.paramByte(BASE_ReadTimeDate) & BASE_ReadTimeDateMask))
// Erweitertes "In Betrieb"
#define ParamBASE_HeartbeatExtended                   ((bool)(knx.paramByte(BASE_HeartbeatExtended) & BASE_HeartbeatExtendedMask))
// InternalTime
#define ParamBASE_InternalTime                        ((bool)(knx.paramByte(BASE_InternalTime) & BASE_InternalTimeMask))
// Manuelles speichern
#define ParamBASE_ManualSave                          (knx.paramByte(BASE_ManualSave) & BASE_ManualSaveMask)
// Zyklisches speichern
#define ParamBASE_PeriodicSave                        (knx.paramByte(BASE_PeriodicSave))
// 
#define ParamBASE_Dummy                               (knx.paramByte(BASE_Dummy))
// UCT
#define ParamBASE_ModuleEnabled_UCT                   ((bool)(knx.paramByte(BASE_ModuleEnabled_UCT) & BASE_ModuleEnabled_UCTMask))
// LED
#define ParamBASE_ModuleEnabled_LED                   ((bool)(knx.paramByte(BASE_ModuleEnabled_LED) & BASE_ModuleEnabled_LEDMask))
// LED_SC
#define ParamBASE_ModuleEnabled_LED_SC                ((bool)(knx.paramByte(BASE_ModuleEnabled_LED_SC) & BASE_ModuleEnabled_LED_SCMask))
// LED_TW
#define ParamBASE_ModuleEnabled_LED_TW                ((bool)(knx.paramByte(BASE_ModuleEnabled_LED_TW) & BASE_ModuleEnabled_LED_TWMask))
// LED_RGB
#define ParamBASE_ModuleEnabled_LED_RGB               ((bool)(knx.paramByte(BASE_ModuleEnabled_LED_RGB) & BASE_ModuleEnabled_LED_RGBMask))
// SWA
#define ParamBASE_ModuleEnabled_SWA                   ((bool)(knx.paramByte(BASE_ModuleEnabled_SWA) & BASE_ModuleEnabled_SWAMask))
// BI
#define ParamBASE_ModuleEnabled_BI                    ((bool)(knx.paramByte(BASE_ModuleEnabled_BI) & BASE_ModuleEnabled_BIMask))
// BTN
#define ParamBASE_ModuleEnabled_BTN                   ((bool)(knx.paramByte(BASE_ModuleEnabled_BTN) & BASE_ModuleEnabled_BTNMask))
// SENS
#define ParamBASE_ModuleEnabled_SENS                  ((bool)(knx.paramByte(BASE_ModuleEnabled_SENS) & BASE_ModuleEnabled_SENSMask))
// LOG
#define ParamBASE_ModuleEnabled_LOG                   ((bool)(knx.paramByte(BASE_ModuleEnabled_LOG) & BASE_ModuleEnabled_LOGMask))
// FCB
#define ParamBASE_ModuleEnabled_FCB                   ((bool)(knx.paramByte(BASE_ModuleEnabled_FCB) & BASE_ModuleEnabled_FCBMask))

#define BASE_KoHeartbeat 1
#define BASE_KoTime 2
#define BASE_KoDate 3
#define BASE_KoDateTime 4
#define BASE_KoIsSummertime 5
#define BASE_KoManualSave 6
#define BASE_KoDiagnose 7

// In Betrieb
#define KoBASE_Heartbeat                           (knx.getGroupObject(BASE_KoHeartbeat))
// Uhrzeit
#define KoBASE_Time                                (knx.getGroupObject(BASE_KoTime))
// Datum
#define KoBASE_Date                                (knx.getGroupObject(BASE_KoDate))
// Uhrzeit/Datum
#define KoBASE_DateTime                            (knx.getGroupObject(BASE_KoDateTime))
// Sommerzeit aktiv
#define KoBASE_IsSummertime                        (knx.getGroupObject(BASE_KoIsSummertime))
// Speichern
#define KoBASE_ManualSave                          (knx.getGroupObject(BASE_KoManualSave))
// Diagnose
#define KoBASE_Diagnose                            (knx.getGroupObject(BASE_KoDiagnose))



#define LED_HardwareVariant                     114      // 4 Bits, Bit 7-4
#define     LED_HardwareVariantMask 0xF0
#define     LED_HardwareVariantShift 4
#define LED_DimmerCcType                        114      // 1 Bit, Bit 1
#define     LED_DimmerCcTypeMask 0x02
#define     LED_DimmerCcTypeShift 1
#define LED_PwmFrequency                        115      // 4 Bits, Bit 7-4
#define     LED_PwmFrequencyMask 0xF0
#define     LED_PwmFrequencyShift 4
#define LED_PowerSupplyRelay                    116      // 1 Bit, Bit 0
#define     LED_PowerSupplyRelayMask 0x01
#define     LED_PowerSupplyRelayShift 0
#define LED_PowerSupplyRelayMinVoltage          117      // uint8_t
#define LED_PowerSupplyRelayOffDelayBase        118      // 2 Bits, Bit 7-6
#define     LED_PowerSupplyRelayOffDelayBaseMask 0xC0
#define     LED_PowerSupplyRelayOffDelayBaseShift 6
#define LED_PowerSupplyRelayOffDelayTime        118      // 14 Bits, Bit 13-0
#define     LED_PowerSupplyRelayOffDelayTimeMask 0x3FFF
#define     LED_PowerSupplyRelayOffDelayTimeShift 0
#define LED_PowerSupplyVoltageChangeSend        120      // 1 Bit, Bit 7
#define     LED_PowerSupplyVoltageChangeSendMask 0x80
#define     LED_PowerSupplyVoltageChangeSendShift 7
#define LED_TemperatureChangeSend               120      // 1 Bit, Bit 6
#define     LED_TemperatureChangeSendMask 0x40
#define     LED_TemperatureChangeSendShift 6
#define LED_PowerSupplyVoltageCyclicBase        121      // 2 Bits, Bit 7-6
#define     LED_PowerSupplyVoltageCyclicBaseMask 0xC0
#define     LED_PowerSupplyVoltageCyclicBaseShift 6
#define LED_PowerSupplyVoltageCyclicTime        121      // 14 Bits, Bit 13-0
#define     LED_PowerSupplyVoltageCyclicTimeMask 0x3FFF
#define     LED_PowerSupplyVoltageCyclicTimeShift 0
#define LED_TemperatureCyclicBase               123      // 2 Bits, Bit 7-6
#define     LED_TemperatureCyclicBaseMask 0xC0
#define     LED_TemperatureCyclicBaseShift 6
#define LED_TemperatureCyclicTime               123      // 14 Bits, Bit 13-0
#define     LED_TemperatureCyclicTimeMask 0x3FFF
#define     LED_TemperatureCyclicTimeShift 0
#define LED_FrontControlOutput                  125      // 1 Bit, Bit 7
#define     LED_FrontControlOutputMask 0x80
#define     LED_FrontControlOutputShift 7
#define LED_FrontControlInput                   125      // 1 Bit, Bit 6
#define     LED_FrontControlInputMask 0x40
#define     LED_FrontControlInputShift 6
#define LED_FrontControlManualBrightness_       126      // uint8_t

// Hardware-Variante
#define ParamLED_HardwareVariant                     ((knx.paramByte(LED_HardwareVariant) & LED_HardwareVariantMask) >> LED_HardwareVariantShift)
// Dimmart Constant Current
#define ParamLED_DimmerCcType                        ((bool)(knx.paramByte(LED_DimmerCcType) & LED_DimmerCcTypeMask))
// PWM-Frequenz
#define ParamLED_PwmFrequency                        ((knx.paramByte(LED_PwmFrequency) & LED_PwmFrequencyMask) >> LED_PwmFrequencyShift)
// Externes Netzteil-Relais
#define ParamLED_PowerSupplyRelay                    ((bool)(knx.paramByte(LED_PowerSupplyRelay) & LED_PowerSupplyRelayMask))
// Dimmstart bei
#define ParamLED_PowerSupplyRelayMinVoltage          (knx.paramByte(LED_PowerSupplyRelayMinVoltage))
// Zeitbasis
#define ParamLED_PowerSupplyRelayOffDelayBase        ((knx.paramByte(LED_PowerSupplyRelayOffDelayBase) & LED_PowerSupplyRelayOffDelayBaseMask) >> LED_PowerSupplyRelayOffDelayBaseShift)
// Zeit
#define ParamLED_PowerSupplyRelayOffDelayTime        (knx.paramWord(LED_PowerSupplyRelayOffDelayTime) & LED_PowerSupplyRelayOffDelayTimeMask)
// Zeit (in Millisekunden)
#define ParamLED_PowerSupplyRelayOffDelayTimeMS      (paramDelay(knx.paramWord(LED_PowerSupplyRelayOffDelayTime)))
// Netzteilspannung senden
#define ParamLED_PowerSupplyVoltageChangeSend        ((bool)(knx.paramByte(LED_PowerSupplyVoltageChangeSend) & LED_PowerSupplyVoltageChangeSendMask))
// Temperatur senden
#define ParamLED_TemperatureChangeSend               ((bool)(knx.paramByte(LED_TemperatureChangeSend) & LED_TemperatureChangeSendMask))
// Zeitbasis
#define ParamLED_PowerSupplyVoltageCyclicBase        ((knx.paramByte(LED_PowerSupplyVoltageCyclicBase) & LED_PowerSupplyVoltageCyclicBaseMask) >> LED_PowerSupplyVoltageCyclicBaseShift)
// Zeit
#define ParamLED_PowerSupplyVoltageCyclicTime        (knx.paramWord(LED_PowerSupplyVoltageCyclicTime) & LED_PowerSupplyVoltageCyclicTimeMask)
// Zeit (in Millisekunden)
#define ParamLED_PowerSupplyVoltageCyclicTimeMS      (paramDelay(knx.paramWord(LED_PowerSupplyVoltageCyclicTime)))
// Zeitbasis
#define ParamLED_TemperatureCyclicBase               ((knx.paramByte(LED_TemperatureCyclicBase) & LED_TemperatureCyclicBaseMask) >> LED_TemperatureCyclicBaseShift)
// Zeit
#define ParamLED_TemperatureCyclicTime               (knx.paramWord(LED_TemperatureCyclicTime) & LED_TemperatureCyclicTimeMask)
// Zeit (in Millisekunden)
#define ParamLED_TemperatureCyclicTimeMS             (paramDelay(knx.paramWord(LED_TemperatureCyclicTime)))
// LED-Ausgabe aktivieren
#define ParamLED_FrontControlOutput                  ((bool)(knx.paramByte(LED_FrontControlOutput) & LED_FrontControlOutputMask))
// Frontbedienung aktivieren
#define ParamLED_FrontControlInput                   ((bool)(knx.paramByte(LED_FrontControlInput) & LED_FrontControlInputMask))
// Helligkeit bei An
#define ParamLED_FrontControlManualBrightness_       (knx.paramByte(LED_FrontControlManualBrightness_))

#define LED_KoPowerSupplyRelay 20
#define LED_KoPowerSupplyRelayStatus 21
#define LED_KoPowerSupplyVoltage 22
#define LED_KoTemperature 23

// Externes Netzteil-Relais
#define KoLED_PowerSupplyRelay                    (knx.getGroupObject(LED_KoPowerSupplyRelay))
// Externes Netzteil-Relais
#define KoLED_PowerSupplyRelayStatus              (knx.getGroupObject(LED_KoPowerSupplyRelayStatus))
// Netzteilspannung
#define KoLED_PowerSupplyVoltage                  (knx.getGroupObject(LED_KoPowerSupplyVoltage))
// Temperatur
#define KoLED_Temperature                         (knx.getGroupObject(LED_KoTemperature))

#define LED_ChannelCount 16

// Parameter per channel
#define LED_ParamBlockOffset 127
#define LED_ParamBlockSize 7
#define LED_ParamCalcIndex(index) (index + LED_ParamBlockOffset + _channelIndex * LED_ParamBlockSize)

#define LED_CH_Lighttype                         0      // 8 Bits, Bit 7-0
#define LED_CH_TW_Light                          1      // int8_t
#define LED_CH_RGB_Light                         2      // int8_t
#define LED_CH_TW_Function                       3      // 2 Bits, Bit 7-6
#define     LED_CH_TW_FunctionMask 0xC0
#define     LED_CH_TW_FunctionShift 6
#define LED_CH_RGB_Function                      4      // 2 Bits, Bit 7-6
#define     LED_CH_RGB_FunctionMask 0xC0
#define     LED_CH_RGB_FunctionShift 6
#define LED_CH_SC_Light                          5      // int8_t

// Licht
#define ParamLED_CH_Lighttype                        (knx.paramByte(LED_ParamCalcIndex(LED_CH_Lighttype)))
// TW Licht
#define ParamLED_CH_TW_Light                         ((int8_t)knx.paramByte(LED_ParamCalcIndex(LED_CH_TW_Light)))
// RGB Licht
#define ParamLED_CH_RGB_Light                        ((int8_t)knx.paramByte(LED_ParamCalcIndex(LED_CH_RGB_Light)))
// Licht
#define ParamLED_CH_TW_Function                      ((knx.paramByte(LED_ParamCalcIndex(LED_CH_TW_Function)) & LED_CH_TW_FunctionMask) >> LED_CH_TW_FunctionShift)
// Licht
#define ParamLED_CH_RGB_Function                     ((knx.paramByte(LED_ParamCalcIndex(LED_CH_RGB_Function)) & LED_CH_RGB_FunctionMask) >> LED_CH_RGB_FunctionShift)
// Licht
#define ParamLED_CH_SC_Light                         ((int8_t)knx.paramByte(LED_ParamCalcIndex(LED_CH_SC_Light)))

#define LED_SC_ChannelCount 16

// Parameter per channel
#define LED_SC_ParamBlockOffset 239
#define LED_SC_ParamBlockSize 63
#define LED_SC_ParamCalcIndex(index) (index + LED_SC_ParamBlockOffset + _channelIndex * LED_SC_ParamBlockSize)

#define LED_SC_ChLightDimmDayOnTime                 0      // uint16_t
#define LED_SC_ChLightDimmDayOffTime                2      // uint16_t
#define LED_SC_ChLightDimmNightOnTime               4      // uint16_t
#define LED_SC_ChLightDimmNightOffTime              6      // uint16_t
#define LED_SC_ChLightDimmRelTime                   8      // uint16_t
#define LED_SC_ChBrightnessMin                     10      // uint8_t
#define LED_SC_ChBrightnessMaxDay                  11      // uint8_t
#define LED_SC_ChBrightnessMaxNight                12      // uint8_t
#define LED_SC_ChDimCurve                          13      // 3 Bits, Bit 7-5
#define     LED_SC_ChDimCurveMask 0xE0
#define     LED_SC_ChDimCurveShift 5
#define LED_SC_ChStartupBehavior                   13      // 2 Bits, Bit 4-3
#define     LED_SC_ChStartupBehaviorMask 0x18
#define     LED_SC_ChStartupBehaviorShift 3
#define LED_SC_ChStatusOnOffSend                   14      // 1 Bit, Bit 7
#define     LED_SC_ChStatusOnOffSendMask 0x80
#define     LED_SC_ChStatusOnOffSendShift 7
#define LED_SC_ChStatusBrightnessSend              14      // 1 Bit, Bit 6
#define     LED_SC_ChStatusBrightnessSendMask 0x40
#define     LED_SC_ChStatusBrightnessSendShift 6
#define LED_SC_ChStatusOnOffBase                   15      // 2 Bits, Bit 7-6
#define     LED_SC_ChStatusOnOffBaseMask 0xC0
#define     LED_SC_ChStatusOnOffBaseShift 6
#define LED_SC_ChStatusOnOffTime                   15      // 14 Bits, Bit 13-0
#define     LED_SC_ChStatusOnOffTimeMask 0x3FFF
#define     LED_SC_ChStatusOnOffTimeShift 0
#define LED_SC_ChStatusBrightnessBase              17      // 2 Bits, Bit 7-6
#define     LED_SC_ChStatusBrightnessBaseMask 0xC0
#define     LED_SC_ChStatusBrightnessBaseShift 6
#define LED_SC_ChStatusBrightnessTime              17      // 14 Bits, Bit 13-0
#define     LED_SC_ChStatusBrightnessTimeMask 0x3FFF
#define     LED_SC_ChStatusBrightnessTimeShift 0
#define LED_SC_ChStairCaseActive                   19      // 1 Bit, Bit 7
#define     LED_SC_ChStairCaseActiveMask 0x80
#define     LED_SC_ChStairCaseActiveShift 7
#define LED_SC_ChStairCaseTrigger                  19      // 1 Bit, Bit 6
#define     LED_SC_ChStairCaseTriggerMask 0x40
#define     LED_SC_ChStairCaseTriggerShift 6
#define LED_SC_ChStairCaseBase                     20      // 2 Bits, Bit 7-6
#define     LED_SC_ChStairCaseBaseMask 0xC0
#define     LED_SC_ChStairCaseBaseShift 6
#define LED_SC_ChStairCaseTime                     20      // 14 Bits, Bit 13-0
#define     LED_SC_ChStairCaseTimeMask 0x3FFF
#define     LED_SC_ChStairCaseTimeShift 0
#define LED_SC_ChScenesActive                      22      // 1 Bit, Bit 7
#define     LED_SC_ChScenesActiveMask 0x80
#define     LED_SC_ChScenesActiveShift 7
#define LED_SC_ChScenesDisableNightSw              22      // 1 Bit, Bit 6
#define     LED_SC_ChScenesDisableNightSwMask 0x40
#define     LED_SC_ChScenesDisableNightSwShift 6
#define LED_SC_ChSceneA_Type                       23      // 3 Bits, Bit 7-5
#define     LED_SC_ChSceneA_TypeMask 0xE0
#define     LED_SC_ChSceneA_TypeShift 5
#define LED_SC_ChSceneA_ValueType                  23      // 3 Bits, Bit 4-2
#define     LED_SC_ChSceneA_ValueTypeMask 0x1C
#define     LED_SC_ChSceneA_ValueTypeShift 2
#define LED_SC_ChSceneA_Lockobject                 23      // 1 Bit, Bit 1
#define     LED_SC_ChSceneA_LockobjectMask 0x02
#define     LED_SC_ChSceneA_LockobjectShift 1
#define LED_SC_ChSceneA_LockobjectFunc             23      // 2 Bits, Bit 0--1
#define LED_SC_ChSceneA_AllowSave                  24      // 1 Bit, Bit 7
#define     LED_SC_ChSceneA_AllowSaveMask 0x80
#define     LED_SC_ChSceneA_AllowSaveShift 7
#define LED_SC_ChSceneA_Number                     24      // 7 Bits, Bit 6-0
#define     LED_SC_ChSceneA_NumberMask 0x7F
#define     LED_SC_ChSceneA_NumberShift 0
#define LED_SC_ChSceneA_Function                   25      // 1 Bit, Bit 7
#define     LED_SC_ChSceneA_FunctionMask 0x80
#define     LED_SC_ChSceneA_FunctionShift 7
#define LED_SC_ChSceneA_Sequence                   25      // 2 Bits, Bit 7-6
#define     LED_SC_ChSceneA_SequenceMask 0xC0
#define     LED_SC_ChSceneA_SequenceShift 6
#define LED_SC_ChSceneA_Brightness                 25      // uint8_t
#define LED_SC_ChSceneB_Type                       28      // 3 Bits, Bit 7-5
#define     LED_SC_ChSceneB_TypeMask 0xE0
#define     LED_SC_ChSceneB_TypeShift 5
#define LED_SC_ChSceneB_ValueType                  28      // 3 Bits, Bit 4-2
#define     LED_SC_ChSceneB_ValueTypeMask 0x1C
#define     LED_SC_ChSceneB_ValueTypeShift 2
#define LED_SC_ChSceneB_Lockobject                 28      // 1 Bit, Bit 1
#define     LED_SC_ChSceneB_LockobjectMask 0x02
#define     LED_SC_ChSceneB_LockobjectShift 1
#define LED_SC_ChSceneB_LockobjectFunc             28      // 2 Bits, Bit 0--1
#define LED_SC_ChSceneB_AllowSave                  29      // 1 Bit, Bit 7
#define     LED_SC_ChSceneB_AllowSaveMask 0x80
#define     LED_SC_ChSceneB_AllowSaveShift 7
#define LED_SC_ChSceneB_Number                     29      // 7 Bits, Bit 6-0
#define     LED_SC_ChSceneB_NumberMask 0x7F
#define     LED_SC_ChSceneB_NumberShift 0
#define LED_SC_ChSceneB_Function                   30      // 1 Bit, Bit 7
#define     LED_SC_ChSceneB_FunctionMask 0x80
#define     LED_SC_ChSceneB_FunctionShift 7
#define LED_SC_ChSceneB_Sequence                   30      // 2 Bits, Bit 7-6
#define     LED_SC_ChSceneB_SequenceMask 0xC0
#define     LED_SC_ChSceneB_SequenceShift 6
#define LED_SC_ChSceneB_Brightness                 30      // uint8_t
#define LED_SC_ChSceneC_Type                       33      // 3 Bits, Bit 7-5
#define     LED_SC_ChSceneC_TypeMask 0xE0
#define     LED_SC_ChSceneC_TypeShift 5
#define LED_SC_ChSceneC_ValueType                  33      // 3 Bits, Bit 4-2
#define     LED_SC_ChSceneC_ValueTypeMask 0x1C
#define     LED_SC_ChSceneC_ValueTypeShift 2
#define LED_SC_ChSceneC_Lockobject                 33      // 1 Bit, Bit 1
#define     LED_SC_ChSceneC_LockobjectMask 0x02
#define     LED_SC_ChSceneC_LockobjectShift 1
#define LED_SC_ChSceneC_LockobjectFunc             33      // 2 Bits, Bit 0--1
#define LED_SC_ChSceneC_AllowSave                  34      // 1 Bit, Bit 7
#define     LED_SC_ChSceneC_AllowSaveMask 0x80
#define     LED_SC_ChSceneC_AllowSaveShift 7
#define LED_SC_ChSceneC_Number                     34      // 7 Bits, Bit 6-0
#define     LED_SC_ChSceneC_NumberMask 0x7F
#define     LED_SC_ChSceneC_NumberShift 0
#define LED_SC_ChSceneC_Function                   35      // 1 Bit, Bit 7
#define     LED_SC_ChSceneC_FunctionMask 0x80
#define     LED_SC_ChSceneC_FunctionShift 7
#define LED_SC_ChSceneC_Sequence                   35      // 2 Bits, Bit 7-6
#define     LED_SC_ChSceneC_SequenceMask 0xC0
#define     LED_SC_ChSceneC_SequenceShift 6
#define LED_SC_ChSceneC_Brightness                 35      // uint8_t
#define LED_SC_ChSceneD_Type                       38      // 3 Bits, Bit 7-5
#define     LED_SC_ChSceneD_TypeMask 0xE0
#define     LED_SC_ChSceneD_TypeShift 5
#define LED_SC_ChSceneD_ValueType                  38      // 3 Bits, Bit 4-2
#define     LED_SC_ChSceneD_ValueTypeMask 0x1C
#define     LED_SC_ChSceneD_ValueTypeShift 2
#define LED_SC_ChSceneD_Lockobject                 38      // 1 Bit, Bit 1
#define     LED_SC_ChSceneD_LockobjectMask 0x02
#define     LED_SC_ChSceneD_LockobjectShift 1
#define LED_SC_ChSceneD_LockobjectFunc             38      // 2 Bits, Bit 0--1
#define LED_SC_ChSceneD_AllowSave                  39      // 1 Bit, Bit 7
#define     LED_SC_ChSceneD_AllowSaveMask 0x80
#define     LED_SC_ChSceneD_AllowSaveShift 7
#define LED_SC_ChSceneD_Number                     39      // 7 Bits, Bit 6-0
#define     LED_SC_ChSceneD_NumberMask 0x7F
#define     LED_SC_ChSceneD_NumberShift 0
#define LED_SC_ChSceneD_Function                   40      // 1 Bit, Bit 7
#define     LED_SC_ChSceneD_FunctionMask 0x80
#define     LED_SC_ChSceneD_FunctionShift 7
#define LED_SC_ChSceneD_Sequence                   40      // 2 Bits, Bit 7-6
#define     LED_SC_ChSceneD_SequenceMask 0xC0
#define     LED_SC_ChSceneD_SequenceShift 6
#define LED_SC_ChSceneD_Brightness                 40      // uint8_t
#define LED_SC_ChSceneE_Type                       43      // 3 Bits, Bit 7-5
#define     LED_SC_ChSceneE_TypeMask 0xE0
#define     LED_SC_ChSceneE_TypeShift 5
#define LED_SC_ChSceneE_ValueType                  43      // 3 Bits, Bit 4-2
#define     LED_SC_ChSceneE_ValueTypeMask 0x1C
#define     LED_SC_ChSceneE_ValueTypeShift 2
#define LED_SC_ChSceneE_Lockobject                 43      // 1 Bit, Bit 1
#define     LED_SC_ChSceneE_LockobjectMask 0x02
#define     LED_SC_ChSceneE_LockobjectShift 1
#define LED_SC_ChSceneE_LockobjectFunc             43      // 2 Bits, Bit 0--1
#define LED_SC_ChSceneE_AllowSave                  44      // 1 Bit, Bit 7
#define     LED_SC_ChSceneE_AllowSaveMask 0x80
#define     LED_SC_ChSceneE_AllowSaveShift 7
#define LED_SC_ChSceneE_Number                     44      // 7 Bits, Bit 6-0
#define     LED_SC_ChSceneE_NumberMask 0x7F
#define     LED_SC_ChSceneE_NumberShift 0
#define LED_SC_ChSceneE_Function                   45      // 1 Bit, Bit 7
#define     LED_SC_ChSceneE_FunctionMask 0x80
#define     LED_SC_ChSceneE_FunctionShift 7
#define LED_SC_ChSceneE_Sequence                   45      // 2 Bits, Bit 7-6
#define     LED_SC_ChSceneE_SequenceMask 0xC0
#define     LED_SC_ChSceneE_SequenceShift 6
#define LED_SC_ChSceneE_Brightness                 45      // uint8_t
#define LED_SC_ChSceneF_Type                       48      // 3 Bits, Bit 7-5
#define     LED_SC_ChSceneF_TypeMask 0xE0
#define     LED_SC_ChSceneF_TypeShift 5
#define LED_SC_ChSceneF_ValueType                  48      // 3 Bits, Bit 4-2
#define     LED_SC_ChSceneF_ValueTypeMask 0x1C
#define     LED_SC_ChSceneF_ValueTypeShift 2
#define LED_SC_ChSceneF_Lockobject                 48      // 1 Bit, Bit 1
#define     LED_SC_ChSceneF_LockobjectMask 0x02
#define     LED_SC_ChSceneF_LockobjectShift 1
#define LED_SC_ChSceneF_LockobjectFunc             48      // 2 Bits, Bit 0--1
#define LED_SC_ChSceneF_AllowSave                  49      // 1 Bit, Bit 7
#define     LED_SC_ChSceneF_AllowSaveMask 0x80
#define     LED_SC_ChSceneF_AllowSaveShift 7
#define LED_SC_ChSceneF_Number                     49      // 7 Bits, Bit 6-0
#define     LED_SC_ChSceneF_NumberMask 0x7F
#define     LED_SC_ChSceneF_NumberShift 0
#define LED_SC_ChSceneF_Function                   50      // 1 Bit, Bit 7
#define     LED_SC_ChSceneF_FunctionMask 0x80
#define     LED_SC_ChSceneF_FunctionShift 7
#define LED_SC_ChSceneF_Sequence                   50      // 2 Bits, Bit 7-6
#define     LED_SC_ChSceneF_SequenceMask 0xC0
#define     LED_SC_ChSceneF_SequenceShift 6
#define LED_SC_ChSceneF_Brightness                 50      // uint8_t
#define LED_SC_ChSceneG_Type                       53      // 3 Bits, Bit 7-5
#define     LED_SC_ChSceneG_TypeMask 0xE0
#define     LED_SC_ChSceneG_TypeShift 5
#define LED_SC_ChSceneG_ValueType                  53      // 3 Bits, Bit 4-2
#define     LED_SC_ChSceneG_ValueTypeMask 0x1C
#define     LED_SC_ChSceneG_ValueTypeShift 2
#define LED_SC_ChSceneG_Lockobject                 53      // 1 Bit, Bit 1
#define     LED_SC_ChSceneG_LockobjectMask 0x02
#define     LED_SC_ChSceneG_LockobjectShift 1
#define LED_SC_ChSceneG_LockobjectFunc             53      // 2 Bits, Bit 0--1
#define LED_SC_ChSceneG_AllowSave                  54      // 1 Bit, Bit 7
#define     LED_SC_ChSceneG_AllowSaveMask 0x80
#define     LED_SC_ChSceneG_AllowSaveShift 7
#define LED_SC_ChSceneG_Number                     54      // 7 Bits, Bit 6-0
#define     LED_SC_ChSceneG_NumberMask 0x7F
#define     LED_SC_ChSceneG_NumberShift 0
#define LED_SC_ChSceneG_Function                   55      // 1 Bit, Bit 7
#define     LED_SC_ChSceneG_FunctionMask 0x80
#define     LED_SC_ChSceneG_FunctionShift 7
#define LED_SC_ChSceneG_Sequence                   55      // 2 Bits, Bit 7-6
#define     LED_SC_ChSceneG_SequenceMask 0xC0
#define     LED_SC_ChSceneG_SequenceShift 6
#define LED_SC_ChSceneG_Brightness                 55      // uint8_t
#define LED_SC_ChSceneH_Type                       58      // 3 Bits, Bit 7-5
#define     LED_SC_ChSceneH_TypeMask 0xE0
#define     LED_SC_ChSceneH_TypeShift 5
#define LED_SC_ChSceneH_ValueType                  58      // 3 Bits, Bit 4-2
#define     LED_SC_ChSceneH_ValueTypeMask 0x1C
#define     LED_SC_ChSceneH_ValueTypeShift 2
#define LED_SC_ChSceneH_Lockobject                 58      // 1 Bit, Bit 1
#define     LED_SC_ChSceneH_LockobjectMask 0x02
#define     LED_SC_ChSceneH_LockobjectShift 1
#define LED_SC_ChSceneH_LockobjectFunc             58      // 2 Bits, Bit 0--1
#define LED_SC_ChSceneH_AllowSave                  59      // 1 Bit, Bit 7
#define     LED_SC_ChSceneH_AllowSaveMask 0x80
#define     LED_SC_ChSceneH_AllowSaveShift 7
#define LED_SC_ChSceneH_Number                     59      // 7 Bits, Bit 6-0
#define     LED_SC_ChSceneH_NumberMask 0x7F
#define     LED_SC_ChSceneH_NumberShift 0
#define LED_SC_ChSceneH_Function                   60      // 1 Bit, Bit 7
#define     LED_SC_ChSceneH_FunctionMask 0x80
#define     LED_SC_ChSceneH_FunctionShift 7
#define LED_SC_ChSceneH_Sequence                   60      // 2 Bits, Bit 7-6
#define     LED_SC_ChSceneH_SequenceMask 0xC0
#define     LED_SC_ChSceneH_SequenceShift 6
#define LED_SC_ChSceneH_Brightness                 60      // uint8_t

// Dimmzeit Tag An
#define ParamLED_SC_ChLightDimmDayOnTime                (knx.paramWord(LED_SC_ParamCalcIndex(LED_SC_ChLightDimmDayOnTime)))
// Dimmzeit Tag Aus
#define ParamLED_SC_ChLightDimmDayOffTime               (knx.paramWord(LED_SC_ParamCalcIndex(LED_SC_ChLightDimmDayOffTime)))
// Dimmzeit Nacht An
#define ParamLED_SC_ChLightDimmNightOnTime              (knx.paramWord(LED_SC_ParamCalcIndex(LED_SC_ChLightDimmNightOnTime)))
// Dimmzeit Nacht Aus
#define ParamLED_SC_ChLightDimmNightOffTime             (knx.paramWord(LED_SC_ParamCalcIndex(LED_SC_ChLightDimmNightOffTime)))
// Dimmzeit Relativ
#define ParamLED_SC_ChLightDimmRelTime                  (knx.paramWord(LED_SC_ParamCalcIndex(LED_SC_ChLightDimmRelTime)))
// Helligkeit min.
#define ParamLED_SC_ChBrightnessMin                     (knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChBrightnessMin)))
// Helligkeit max. (Tag)
#define ParamLED_SC_ChBrightnessMaxDay                  (knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChBrightnessMaxDay)))
// Helligkeit max. (Nacht)
#define ParamLED_SC_ChBrightnessMaxNight                (knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChBrightnessMaxNight)))
// Dimmkurve
#define ParamLED_SC_ChDimCurve                          ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChDimCurve)) & LED_SC_ChDimCurveMask) >> LED_SC_ChDimCurveShift)
// Einschaltverhalten
#define ParamLED_SC_ChStartupBehavior                   ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChStartupBehavior)) & LED_SC_ChStartupBehaviorMask) >> LED_SC_ChStartupBehaviorShift)
// Status Ein/Aus senden
#define ParamLED_SC_ChStatusOnOffSend                   ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChStatusOnOffSend)) & LED_SC_ChStatusOnOffSendMask))
// Status Helligkeit senden
#define ParamLED_SC_ChStatusBrightnessSend              ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChStatusBrightnessSend)) & LED_SC_ChStatusBrightnessSendMask))
// Zeitbasis
#define ParamLED_SC_ChStatusOnOffBase                   ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChStatusOnOffBase)) & LED_SC_ChStatusOnOffBaseMask) >> LED_SC_ChStatusOnOffBaseShift)
// Zeit
#define ParamLED_SC_ChStatusOnOffTime                   (knx.paramWord(LED_SC_ParamCalcIndex(LED_SC_ChStatusOnOffTime)) & LED_SC_ChStatusOnOffTimeMask)
// Zeit (in Millisekunden)
#define ParamLED_SC_ChStatusOnOffTimeMS                 (paramDelay(knx.paramWord(LED_SC_ParamCalcIndex(LED_SC_ChStatusOnOffTime))))
// Zeitbasis
#define ParamLED_SC_ChStatusBrightnessBase              ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChStatusBrightnessBase)) & LED_SC_ChStatusBrightnessBaseMask) >> LED_SC_ChStatusBrightnessBaseShift)
// Zeit
#define ParamLED_SC_ChStatusBrightnessTime              (knx.paramWord(LED_SC_ParamCalcIndex(LED_SC_ChStatusBrightnessTime)) & LED_SC_ChStatusBrightnessTimeMask)
// Zeit (in Millisekunden)
#define ParamLED_SC_ChStatusBrightnessTimeMS            (paramDelay(knx.paramWord(LED_SC_ParamCalcIndex(LED_SC_ChStatusBrightnessTime))))
// Treppenlichtfunktion
#define ParamLED_SC_ChStairCaseActive                   ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChStairCaseActive)) & LED_SC_ChStairCaseActiveMask))
// Treppenlicht Trigger
#define ParamLED_SC_ChStairCaseTrigger                  ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChStairCaseTrigger)) & LED_SC_ChStairCaseTriggerMask))
// Zeitbasis
#define ParamLED_SC_ChStairCaseBase                     ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChStairCaseBase)) & LED_SC_ChStairCaseBaseMask) >> LED_SC_ChStairCaseBaseShift)
// Zeit
#define ParamLED_SC_ChStairCaseTime                     (knx.paramWord(LED_SC_ParamCalcIndex(LED_SC_ChStairCaseTime)) & LED_SC_ChStairCaseTimeMask)
// Zeit (in Millisekunden)
#define ParamLED_SC_ChStairCaseTimeMS                   (paramDelay(knx.paramWord(LED_SC_ParamCalcIndex(LED_SC_ChStairCaseTime))))
// Szenen
#define ParamLED_SC_ChScenesActive                      ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChScenesActive)) & LED_SC_ChScenesActiveMask))
// Deaktivierung bei Nachtumschaltung
#define ParamLED_SC_ChScenesDisableNightSw              ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChScenesDisableNightSw)) & LED_SC_ChScenesDisableNightSwMask))
// Typ
#define ParamLED_SC_ChSceneA_Type                       ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneA_Type)) & LED_SC_ChSceneA_TypeMask) >> LED_SC_ChSceneA_TypeShift)
// Typ
#define ParamLED_SC_ChSceneA_ValueType                  ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneA_ValueType)) & LED_SC_ChSceneA_ValueTypeMask) >> LED_SC_ChSceneA_ValueTypeShift)
// Sperrobjekt
#define ParamLED_SC_ChSceneA_Lockobject                 ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneA_Lockobject)) & LED_SC_ChSceneA_LockobjectMask))
// Sperren
#define ParamLED_SC_ChSceneA_LockobjectFunc             (knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneA_LockobjectFunc)))
// Speichern
#define ParamLED_SC_ChSceneA_AllowSave                  ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneA_AllowSave)) & LED_SC_ChSceneA_AllowSaveMask))
// Typ
#define ParamLED_SC_ChSceneA_Number                     (knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneA_Number)) & LED_SC_ChSceneA_NumberMask)
// Funktion
#define ParamLED_SC_ChSceneA_Function                   ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneA_Function)) & LED_SC_ChSceneA_FunctionMask))
// Ablauf
#define ParamLED_SC_ChSceneA_Sequence                   ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneA_Sequence)) & LED_SC_ChSceneA_SequenceMask) >> LED_SC_ChSceneA_SequenceShift)
// Helligkeit
#define ParamLED_SC_ChSceneA_Brightness                 (knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneA_Brightness)))
// Typ
#define ParamLED_SC_ChSceneB_Type                       ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneB_Type)) & LED_SC_ChSceneB_TypeMask) >> LED_SC_ChSceneB_TypeShift)
// Typ
#define ParamLED_SC_ChSceneB_ValueType                  ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneB_ValueType)) & LED_SC_ChSceneB_ValueTypeMask) >> LED_SC_ChSceneB_ValueTypeShift)
// Sperrobjekt
#define ParamLED_SC_ChSceneB_Lockobject                 ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneB_Lockobject)) & LED_SC_ChSceneB_LockobjectMask))
// Sperren
#define ParamLED_SC_ChSceneB_LockobjectFunc             (knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneB_LockobjectFunc)))
// Speichern
#define ParamLED_SC_ChSceneB_AllowSave                  ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneB_AllowSave)) & LED_SC_ChSceneB_AllowSaveMask))
// Typ
#define ParamLED_SC_ChSceneB_Number                     (knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneB_Number)) & LED_SC_ChSceneB_NumberMask)
// Funktion
#define ParamLED_SC_ChSceneB_Function                   ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneB_Function)) & LED_SC_ChSceneB_FunctionMask))
// Ablauf
#define ParamLED_SC_ChSceneB_Sequence                   ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneB_Sequence)) & LED_SC_ChSceneB_SequenceMask) >> LED_SC_ChSceneB_SequenceShift)
// Helligkeit
#define ParamLED_SC_ChSceneB_Brightness                 (knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneB_Brightness)))
// Typ
#define ParamLED_SC_ChSceneC_Type                       ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneC_Type)) & LED_SC_ChSceneC_TypeMask) >> LED_SC_ChSceneC_TypeShift)
// Typ
#define ParamLED_SC_ChSceneC_ValueType                  ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneC_ValueType)) & LED_SC_ChSceneC_ValueTypeMask) >> LED_SC_ChSceneC_ValueTypeShift)
// Sperrobjekt
#define ParamLED_SC_ChSceneC_Lockobject                 ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneC_Lockobject)) & LED_SC_ChSceneC_LockobjectMask))
// Sperren
#define ParamLED_SC_ChSceneC_LockobjectFunc             (knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneC_LockobjectFunc)))
// Speichern
#define ParamLED_SC_ChSceneC_AllowSave                  ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneC_AllowSave)) & LED_SC_ChSceneC_AllowSaveMask))
// Typ
#define ParamLED_SC_ChSceneC_Number                     (knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneC_Number)) & LED_SC_ChSceneC_NumberMask)
// Funktion
#define ParamLED_SC_ChSceneC_Function                   ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneC_Function)) & LED_SC_ChSceneC_FunctionMask))
// Ablauf
#define ParamLED_SC_ChSceneC_Sequence                   ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneC_Sequence)) & LED_SC_ChSceneC_SequenceMask) >> LED_SC_ChSceneC_SequenceShift)
// Helligkeit
#define ParamLED_SC_ChSceneC_Brightness                 (knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneC_Brightness)))
// Typ
#define ParamLED_SC_ChSceneD_Type                       ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneD_Type)) & LED_SC_ChSceneD_TypeMask) >> LED_SC_ChSceneD_TypeShift)
// Typ
#define ParamLED_SC_ChSceneD_ValueType                  ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneD_ValueType)) & LED_SC_ChSceneD_ValueTypeMask) >> LED_SC_ChSceneD_ValueTypeShift)
// Sperrobjekt
#define ParamLED_SC_ChSceneD_Lockobject                 ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneD_Lockobject)) & LED_SC_ChSceneD_LockobjectMask))
// Sperren
#define ParamLED_SC_ChSceneD_LockobjectFunc             (knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneD_LockobjectFunc)))
// Speichern
#define ParamLED_SC_ChSceneD_AllowSave                  ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneD_AllowSave)) & LED_SC_ChSceneD_AllowSaveMask))
// Typ
#define ParamLED_SC_ChSceneD_Number                     (knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneD_Number)) & LED_SC_ChSceneD_NumberMask)
// Funktion
#define ParamLED_SC_ChSceneD_Function                   ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneD_Function)) & LED_SC_ChSceneD_FunctionMask))
// Ablauf
#define ParamLED_SC_ChSceneD_Sequence                   ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneD_Sequence)) & LED_SC_ChSceneD_SequenceMask) >> LED_SC_ChSceneD_SequenceShift)
// Helligkeit
#define ParamLED_SC_ChSceneD_Brightness                 (knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneD_Brightness)))
// Typ
#define ParamLED_SC_ChSceneE_Type                       ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneE_Type)) & LED_SC_ChSceneE_TypeMask) >> LED_SC_ChSceneE_TypeShift)
// Typ
#define ParamLED_SC_ChSceneE_ValueType                  ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneE_ValueType)) & LED_SC_ChSceneE_ValueTypeMask) >> LED_SC_ChSceneE_ValueTypeShift)
// Sperrobjekt
#define ParamLED_SC_ChSceneE_Lockobject                 ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneE_Lockobject)) & LED_SC_ChSceneE_LockobjectMask))
// Sperren
#define ParamLED_SC_ChSceneE_LockobjectFunc             (knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneE_LockobjectFunc)))
// Speichern
#define ParamLED_SC_ChSceneE_AllowSave                  ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneE_AllowSave)) & LED_SC_ChSceneE_AllowSaveMask))
// Typ
#define ParamLED_SC_ChSceneE_Number                     (knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneE_Number)) & LED_SC_ChSceneE_NumberMask)
// Funktion
#define ParamLED_SC_ChSceneE_Function                   ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneE_Function)) & LED_SC_ChSceneE_FunctionMask))
// Ablauf
#define ParamLED_SC_ChSceneE_Sequence                   ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneE_Sequence)) & LED_SC_ChSceneE_SequenceMask) >> LED_SC_ChSceneE_SequenceShift)
// Helligkeit
#define ParamLED_SC_ChSceneE_Brightness                 (knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneE_Brightness)))
// Typ
#define ParamLED_SC_ChSceneF_Type                       ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneF_Type)) & LED_SC_ChSceneF_TypeMask) >> LED_SC_ChSceneF_TypeShift)
// Typ
#define ParamLED_SC_ChSceneF_ValueType                  ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneF_ValueType)) & LED_SC_ChSceneF_ValueTypeMask) >> LED_SC_ChSceneF_ValueTypeShift)
// Sperrobjekt
#define ParamLED_SC_ChSceneF_Lockobject                 ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneF_Lockobject)) & LED_SC_ChSceneF_LockobjectMask))
// Sperren
#define ParamLED_SC_ChSceneF_LockobjectFunc             (knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneF_LockobjectFunc)))
// Speichern
#define ParamLED_SC_ChSceneF_AllowSave                  ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneF_AllowSave)) & LED_SC_ChSceneF_AllowSaveMask))
// Typ
#define ParamLED_SC_ChSceneF_Number                     (knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneF_Number)) & LED_SC_ChSceneF_NumberMask)
// Funktion
#define ParamLED_SC_ChSceneF_Function                   ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneF_Function)) & LED_SC_ChSceneF_FunctionMask))
// Ablauf
#define ParamLED_SC_ChSceneF_Sequence                   ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneF_Sequence)) & LED_SC_ChSceneF_SequenceMask) >> LED_SC_ChSceneF_SequenceShift)
// Helligkeit
#define ParamLED_SC_ChSceneF_Brightness                 (knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneF_Brightness)))
// Typ
#define ParamLED_SC_ChSceneG_Type                       ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneG_Type)) & LED_SC_ChSceneG_TypeMask) >> LED_SC_ChSceneG_TypeShift)
// Typ
#define ParamLED_SC_ChSceneG_ValueType                  ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneG_ValueType)) & LED_SC_ChSceneG_ValueTypeMask) >> LED_SC_ChSceneG_ValueTypeShift)
// Sperrobjekt
#define ParamLED_SC_ChSceneG_Lockobject                 ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneG_Lockobject)) & LED_SC_ChSceneG_LockobjectMask))
// Sperren
#define ParamLED_SC_ChSceneG_LockobjectFunc             (knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneG_LockobjectFunc)))
// Speichern
#define ParamLED_SC_ChSceneG_AllowSave                  ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneG_AllowSave)) & LED_SC_ChSceneG_AllowSaveMask))
// Typ
#define ParamLED_SC_ChSceneG_Number                     (knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneG_Number)) & LED_SC_ChSceneG_NumberMask)
// Funktion
#define ParamLED_SC_ChSceneG_Function                   ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneG_Function)) & LED_SC_ChSceneG_FunctionMask))
// Ablauf
#define ParamLED_SC_ChSceneG_Sequence                   ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneG_Sequence)) & LED_SC_ChSceneG_SequenceMask) >> LED_SC_ChSceneG_SequenceShift)
// Helligkeit
#define ParamLED_SC_ChSceneG_Brightness                 (knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneG_Brightness)))
// Typ
#define ParamLED_SC_ChSceneH_Type                       ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneH_Type)) & LED_SC_ChSceneH_TypeMask) >> LED_SC_ChSceneH_TypeShift)
// Typ
#define ParamLED_SC_ChSceneH_ValueType                  ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneH_ValueType)) & LED_SC_ChSceneH_ValueTypeMask) >> LED_SC_ChSceneH_ValueTypeShift)
// Sperrobjekt
#define ParamLED_SC_ChSceneH_Lockobject                 ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneH_Lockobject)) & LED_SC_ChSceneH_LockobjectMask))
// Sperren
#define ParamLED_SC_ChSceneH_LockobjectFunc             (knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneH_LockobjectFunc)))
// Speichern
#define ParamLED_SC_ChSceneH_AllowSave                  ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneH_AllowSave)) & LED_SC_ChSceneH_AllowSaveMask))
// Typ
#define ParamLED_SC_ChSceneH_Number                     (knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneH_Number)) & LED_SC_ChSceneH_NumberMask)
// Funktion
#define ParamLED_SC_ChSceneH_Function                   ((bool)(knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneH_Function)) & LED_SC_ChSceneH_FunctionMask))
// Ablauf
#define ParamLED_SC_ChSceneH_Sequence                   ((knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneH_Sequence)) & LED_SC_ChSceneH_SequenceMask) >> LED_SC_ChSceneH_SequenceShift)
// Helligkeit
#define ParamLED_SC_ChSceneH_Brightness                 (knx.paramByte(LED_SC_ParamCalcIndex(LED_SC_ChSceneH_Brightness)))

// deprecated
#define LED_SC_KoOffset 30

// Communication objects per channel (multiple occurrence)
#define LED_SC_KoBlockOffset 30
#define LED_SC_KoBlockSize 10

#define LED_SC_KoCalcNumber(index) (index + LED_SC_KoBlockOffset + _channelIndex * LED_SC_KoBlockSize)
#define LED_SC_KoCalcIndex(number) ((number >= LED_SC_KoCalcNumber(0) && number < LED_SC_KoCalcNumber(LED_SC_KoBlockSize)) ? (number - LED_SC_KoBlockOffset) % LED_SC_KoBlockSize : -1)
#define LED_SC_KoCalcChannel(number) ((number >= LED_SC_KoBlockOffset && number < LED_SC_KoBlockOffset + LED_SC_ChannelCount * LED_SC_KoBlockSize) ? (number - LED_SC_KoBlockOffset) / LED_SC_KoBlockSize : -1)

#define LED_SC_KoChSwitch 0
#define LED_SC_KoChSwitchNoDim 1
#define LED_SC_KoChStateOnOff 2
#define LED_SC_KoChLocking 3
#define LED_SC_KoChStateLocking 4
#define LED_SC_KoChBrightness 5
#define LED_SC_KoChBrightnessRel 6
#define LED_SC_KoChBrightnessStatus 7
#define LED_SC_KoChNight 8
#define LED_SC_KoChScene 9

// Schalten
#define KoLED_SC_ChSwitch                            (knx.getGroupObject(LED_SC_KoCalcNumber(LED_SC_KoChSwitch)))
// Schalten Sofort
#define KoLED_SC_ChSwitchNoDim                       (knx.getGroupObject(LED_SC_KoCalcNumber(LED_SC_KoChSwitchNoDim)))
// Status Ein/Aus
#define KoLED_SC_ChStateOnOff                        (knx.getGroupObject(LED_SC_KoCalcNumber(LED_SC_KoChStateOnOff)))
// Sperren
#define KoLED_SC_ChLocking                           (knx.getGroupObject(LED_SC_KoCalcNumber(LED_SC_KoChLocking)))
// Sperren Status
#define KoLED_SC_ChStateLocking                      (knx.getGroupObject(LED_SC_KoCalcNumber(LED_SC_KoChStateLocking)))
// Helligkeit
#define KoLED_SC_ChBrightness                        (knx.getGroupObject(LED_SC_KoCalcNumber(LED_SC_KoChBrightness)))
// Helligkeit Relativ
#define KoLED_SC_ChBrightnessRel                     (knx.getGroupObject(LED_SC_KoCalcNumber(LED_SC_KoChBrightnessRel)))
// Helligkeit Status
#define KoLED_SC_ChBrightnessStatus                  (knx.getGroupObject(LED_SC_KoCalcNumber(LED_SC_KoChBrightnessStatus)))
// Nacht
#define KoLED_SC_ChNight                             (knx.getGroupObject(LED_SC_KoCalcNumber(LED_SC_KoChNight)))
// Szene
#define KoLED_SC_ChScene                             (knx.getGroupObject(LED_SC_KoCalcNumber(LED_SC_KoChScene)))

#define LED_TW_ChannelCount 8

// Parameter per channel
#define LED_TW_ParamBlockOffset 1247
#define LED_TW_ParamBlockSize 73
#define LED_TW_ParamCalcIndex(index) (index + LED_TW_ParamBlockOffset + _channelIndex * LED_TW_ParamBlockSize)

#define LED_TW_ChLightDimmDayOnTime                 0      // uint16_t
#define LED_TW_ChLightDimmDayOffTime                2      // uint16_t
#define LED_TW_ChLightDimmNightOnTime               4      // uint16_t
#define LED_TW_ChLightDimmNightOffTime              6      // uint16_t
#define LED_TW_ChLightDimmRelTime                   8      // uint16_t
#define LED_TW_ChBrightnessMin                     10      // uint8_t
#define LED_TW_ChBrightnessMaxDay                  11      // uint8_t
#define LED_TW_ChBrightnessMaxNight                12      // uint8_t
#define LED_TW_ChDimCurve                          13      // 3 Bits, Bit 7-5
#define     LED_TW_ChDimCurveMask 0xE0
#define     LED_TW_ChDimCurveShift 5
#define LED_TW_ChStartupBehavior                   13      // 2 Bits, Bit 4-3
#define     LED_TW_ChStartupBehaviorMask 0x18
#define     LED_TW_ChStartupBehaviorShift 3
#define LED_TW_ChStatusOnOffSend                   14      // 1 Bit, Bit 7
#define     LED_TW_ChStatusOnOffSendMask 0x80
#define     LED_TW_ChStatusOnOffSendShift 7
#define LED_TW_ChStatusBrightnessSend              14      // 1 Bit, Bit 6
#define     LED_TW_ChStatusBrightnessSendMask 0x40
#define     LED_TW_ChStatusBrightnessSendShift 6
#define LED_TW_ChStatusTempSend                    14      // 1 Bit, Bit 5
#define     LED_TW_ChStatusTempSendMask 0x20
#define     LED_TW_ChStatusTempSendShift 5
#define LED_TW_ChStatusOnOffBase                   15      // 2 Bits, Bit 7-6
#define     LED_TW_ChStatusOnOffBaseMask 0xC0
#define     LED_TW_ChStatusOnOffBaseShift 6
#define LED_TW_ChStatusOnOffTime                   15      // 14 Bits, Bit 13-0
#define     LED_TW_ChStatusOnOffTimeMask 0x3FFF
#define     LED_TW_ChStatusOnOffTimeShift 0
#define LED_TW_ChStatusBrightnessBase              17      // 2 Bits, Bit 7-6
#define     LED_TW_ChStatusBrightnessBaseMask 0xC0
#define     LED_TW_ChStatusBrightnessBaseShift 6
#define LED_TW_ChStatusBrightnessTime              17      // 14 Bits, Bit 13-0
#define     LED_TW_ChStatusBrightnessTimeMask 0x3FFF
#define     LED_TW_ChStatusBrightnessTimeShift 0
#define LED_TW_ChStatusTempBase                    19      // 2 Bits, Bit 7-6
#define     LED_TW_ChStatusTempBaseMask 0xC0
#define     LED_TW_ChStatusTempBaseShift 6
#define LED_TW_ChStatusTempTime                    19      // 14 Bits, Bit 13-0
#define     LED_TW_ChStatusTempTimeMask 0x3FFF
#define     LED_TW_ChStatusTempTimeShift 0
#define LED_TW_ChStairCaseActive                   21      // 1 Bit, Bit 7
#define     LED_TW_ChStairCaseActiveMask 0x80
#define     LED_TW_ChStairCaseActiveShift 7
#define LED_TW_ChStairCaseTrigger                  21      // 1 Bit, Bit 6
#define     LED_TW_ChStairCaseTriggerMask 0x40
#define     LED_TW_ChStairCaseTriggerShift 6
#define LED_TW_ChStairCaseBase                     22      // 2 Bits, Bit 7-6
#define     LED_TW_ChStairCaseBaseMask 0xC0
#define     LED_TW_ChStairCaseBaseShift 6
#define LED_TW_ChStairCaseTime                     22      // 14 Bits, Bit 13-0
#define     LED_TW_ChStairCaseTimeMask 0x3FFF
#define     LED_TW_ChStairCaseTimeShift 0
#define LED_TW_ChColorTempCW                       24      // uint16_t
#define LED_TW_ChColorTempWW                       26      // uint16_t
#define LED_TW_ChColorTempDay                      28      // uint16_t
#define LED_TW_ChColorTempNight                    30      // uint16_t
#define LED_TW_ChScenesActive                      32      // 1 Bit, Bit 7
#define     LED_TW_ChScenesActiveMask 0x80
#define     LED_TW_ChScenesActiveShift 7
#define LED_TW_ChScenesDisableNightSw              32      // 1 Bit, Bit 6
#define     LED_TW_ChScenesDisableNightSwMask 0x40
#define     LED_TW_ChScenesDisableNightSwShift 6
#define LED_TW_ChSceneA_Type                       33      // 3 Bits, Bit 7-5
#define     LED_TW_ChSceneA_TypeMask 0xE0
#define     LED_TW_ChSceneA_TypeShift 5
#define LED_TW_ChSceneA_ValueType                  33      // 3 Bits, Bit 4-2
#define     LED_TW_ChSceneA_ValueTypeMask 0x1C
#define     LED_TW_ChSceneA_ValueTypeShift 2
#define LED_TW_ChSceneA_Lockobject                 33      // 1 Bit, Bit 1
#define     LED_TW_ChSceneA_LockobjectMask 0x02
#define     LED_TW_ChSceneA_LockobjectShift 1
#define LED_TW_ChSceneA_LockobjectFunc             33      // 2 Bits, Bit 0--1
#define LED_TW_ChSceneA_AllowSave                  34      // 1 Bit, Bit 7
#define     LED_TW_ChSceneA_AllowSaveMask 0x80
#define     LED_TW_ChSceneA_AllowSaveShift 7
#define LED_TW_ChSceneA_Number                     34      // 7 Bits, Bit 6-0
#define     LED_TW_ChSceneA_NumberMask 0x7F
#define     LED_TW_ChSceneA_NumberShift 0
#define LED_TW_ChSceneA_Function                   35      // 2 Bits, Bit 7-6
#define     LED_TW_ChSceneA_FunctionMask 0xC0
#define     LED_TW_ChSceneA_FunctionShift 6
#define LED_TW_ChSceneA_Sequence                   35      // 2 Bits, Bit 7-6
#define     LED_TW_ChSceneA_SequenceMask 0xC0
#define     LED_TW_ChSceneA_SequenceShift 6
#define LED_TW_ChSceneA_Brightness                 35      // uint8_t
#define LED_TW_ChSceneA_TW                         36      // uint16_t
#define LED_TW_ChSceneB_Type                       38      // 3 Bits, Bit 7-5
#define     LED_TW_ChSceneB_TypeMask 0xE0
#define     LED_TW_ChSceneB_TypeShift 5
#define LED_TW_ChSceneB_ValueType                  38      // 3 Bits, Bit 4-2
#define     LED_TW_ChSceneB_ValueTypeMask 0x1C
#define     LED_TW_ChSceneB_ValueTypeShift 2
#define LED_TW_ChSceneB_Lockobject                 38      // 1 Bit, Bit 1
#define     LED_TW_ChSceneB_LockobjectMask 0x02
#define     LED_TW_ChSceneB_LockobjectShift 1
#define LED_TW_ChSceneB_LockobjectFunc             38      // 2 Bits, Bit 0--1
#define LED_TW_ChSceneB_AllowSave                  39      // 1 Bit, Bit 7
#define     LED_TW_ChSceneB_AllowSaveMask 0x80
#define     LED_TW_ChSceneB_AllowSaveShift 7
#define LED_TW_ChSceneB_Number                     39      // 7 Bits, Bit 6-0
#define     LED_TW_ChSceneB_NumberMask 0x7F
#define     LED_TW_ChSceneB_NumberShift 0
#define LED_TW_ChSceneB_Function                   40      // 2 Bits, Bit 7-6
#define     LED_TW_ChSceneB_FunctionMask 0xC0
#define     LED_TW_ChSceneB_FunctionShift 6
#define LED_TW_ChSceneB_Sequence                   40      // 2 Bits, Bit 7-6
#define     LED_TW_ChSceneB_SequenceMask 0xC0
#define     LED_TW_ChSceneB_SequenceShift 6
#define LED_TW_ChSceneB_Brightness                 40      // uint8_t
#define LED_TW_ChSceneB_TW                         41      // uint16_t
#define LED_TW_ChSceneC_Type                       43      // 3 Bits, Bit 7-5
#define     LED_TW_ChSceneC_TypeMask 0xE0
#define     LED_TW_ChSceneC_TypeShift 5
#define LED_TW_ChSceneC_ValueType                  43      // 3 Bits, Bit 4-2
#define     LED_TW_ChSceneC_ValueTypeMask 0x1C
#define     LED_TW_ChSceneC_ValueTypeShift 2
#define LED_TW_ChSceneC_Lockobject                 43      // 1 Bit, Bit 1
#define     LED_TW_ChSceneC_LockobjectMask 0x02
#define     LED_TW_ChSceneC_LockobjectShift 1
#define LED_TW_ChSceneC_LockobjectFunc             43      // 2 Bits, Bit 0--1
#define LED_TW_ChSceneC_AllowSave                  44      // 1 Bit, Bit 7
#define     LED_TW_ChSceneC_AllowSaveMask 0x80
#define     LED_TW_ChSceneC_AllowSaveShift 7
#define LED_TW_ChSceneC_Number                     44      // 7 Bits, Bit 6-0
#define     LED_TW_ChSceneC_NumberMask 0x7F
#define     LED_TW_ChSceneC_NumberShift 0
#define LED_TW_ChSceneC_Function                   45      // 2 Bits, Bit 7-6
#define     LED_TW_ChSceneC_FunctionMask 0xC0
#define     LED_TW_ChSceneC_FunctionShift 6
#define LED_TW_ChSceneC_Sequence                   45      // 2 Bits, Bit 7-6
#define     LED_TW_ChSceneC_SequenceMask 0xC0
#define     LED_TW_ChSceneC_SequenceShift 6
#define LED_TW_ChSceneC_Brightness                 45      // uint8_t
#define LED_TW_ChSceneC_TW                         46      // uint16_t
#define LED_TW_ChSceneD_Type                       48      // 3 Bits, Bit 7-5
#define     LED_TW_ChSceneD_TypeMask 0xE0
#define     LED_TW_ChSceneD_TypeShift 5
#define LED_TW_ChSceneD_ValueType                  48      // 3 Bits, Bit 4-2
#define     LED_TW_ChSceneD_ValueTypeMask 0x1C
#define     LED_TW_ChSceneD_ValueTypeShift 2
#define LED_TW_ChSceneD_Lockobject                 48      // 1 Bit, Bit 1
#define     LED_TW_ChSceneD_LockobjectMask 0x02
#define     LED_TW_ChSceneD_LockobjectShift 1
#define LED_TW_ChSceneD_LockobjectFunc             48      // 2 Bits, Bit 0--1
#define LED_TW_ChSceneD_AllowSave                  49      // 1 Bit, Bit 7
#define     LED_TW_ChSceneD_AllowSaveMask 0x80
#define     LED_TW_ChSceneD_AllowSaveShift 7
#define LED_TW_ChSceneD_Number                     49      // 7 Bits, Bit 6-0
#define     LED_TW_ChSceneD_NumberMask 0x7F
#define     LED_TW_ChSceneD_NumberShift 0
#define LED_TW_ChSceneD_Function                   50      // 2 Bits, Bit 7-6
#define     LED_TW_ChSceneD_FunctionMask 0xC0
#define     LED_TW_ChSceneD_FunctionShift 6
#define LED_TW_ChSceneD_Sequence                   50      // 2 Bits, Bit 7-6
#define     LED_TW_ChSceneD_SequenceMask 0xC0
#define     LED_TW_ChSceneD_SequenceShift 6
#define LED_TW_ChSceneD_Brightness                 50      // uint8_t
#define LED_TW_ChSceneD_TW                         51      // uint16_t
#define LED_TW_ChSceneE_Type                       53      // 3 Bits, Bit 7-5
#define     LED_TW_ChSceneE_TypeMask 0xE0
#define     LED_TW_ChSceneE_TypeShift 5
#define LED_TW_ChSceneE_ValueType                  53      // 3 Bits, Bit 4-2
#define     LED_TW_ChSceneE_ValueTypeMask 0x1C
#define     LED_TW_ChSceneE_ValueTypeShift 2
#define LED_TW_ChSceneE_Lockobject                 53      // 1 Bit, Bit 1
#define     LED_TW_ChSceneE_LockobjectMask 0x02
#define     LED_TW_ChSceneE_LockobjectShift 1
#define LED_TW_ChSceneE_LockobjectFunc             53      // 2 Bits, Bit 0--1
#define LED_TW_ChSceneE_AllowSave                  54      // 1 Bit, Bit 7
#define     LED_TW_ChSceneE_AllowSaveMask 0x80
#define     LED_TW_ChSceneE_AllowSaveShift 7
#define LED_TW_ChSceneE_Number                     54      // 7 Bits, Bit 6-0
#define     LED_TW_ChSceneE_NumberMask 0x7F
#define     LED_TW_ChSceneE_NumberShift 0
#define LED_TW_ChSceneE_Function                   55      // 2 Bits, Bit 7-6
#define     LED_TW_ChSceneE_FunctionMask 0xC0
#define     LED_TW_ChSceneE_FunctionShift 6
#define LED_TW_ChSceneE_Sequence                   55      // 2 Bits, Bit 7-6
#define     LED_TW_ChSceneE_SequenceMask 0xC0
#define     LED_TW_ChSceneE_SequenceShift 6
#define LED_TW_ChSceneE_Brightness                 55      // uint8_t
#define LED_TW_ChSceneE_TW                         56      // uint16_t
#define LED_TW_ChSceneF_Type                       58      // 3 Bits, Bit 7-5
#define     LED_TW_ChSceneF_TypeMask 0xE0
#define     LED_TW_ChSceneF_TypeShift 5
#define LED_TW_ChSceneF_ValueType                  58      // 3 Bits, Bit 4-2
#define     LED_TW_ChSceneF_ValueTypeMask 0x1C
#define     LED_TW_ChSceneF_ValueTypeShift 2
#define LED_TW_ChSceneF_Lockobject                 58      // 1 Bit, Bit 1
#define     LED_TW_ChSceneF_LockobjectMask 0x02
#define     LED_TW_ChSceneF_LockobjectShift 1
#define LED_TW_ChSceneF_LockobjectFunc             58      // 2 Bits, Bit 0--1
#define LED_TW_ChSceneF_AllowSave                  59      // 1 Bit, Bit 7
#define     LED_TW_ChSceneF_AllowSaveMask 0x80
#define     LED_TW_ChSceneF_AllowSaveShift 7
#define LED_TW_ChSceneF_Number                     59      // 7 Bits, Bit 6-0
#define     LED_TW_ChSceneF_NumberMask 0x7F
#define     LED_TW_ChSceneF_NumberShift 0
#define LED_TW_ChSceneF_Function                   60      // 2 Bits, Bit 7-6
#define     LED_TW_ChSceneF_FunctionMask 0xC0
#define     LED_TW_ChSceneF_FunctionShift 6
#define LED_TW_ChSceneF_Sequence                   60      // 2 Bits, Bit 7-6
#define     LED_TW_ChSceneF_SequenceMask 0xC0
#define     LED_TW_ChSceneF_SequenceShift 6
#define LED_TW_ChSceneF_Brightness                 60      // uint8_t
#define LED_TW_ChSceneF_TW                         61      // uint16_t
#define LED_TW_ChSceneG_Type                       63      // 3 Bits, Bit 7-5
#define     LED_TW_ChSceneG_TypeMask 0xE0
#define     LED_TW_ChSceneG_TypeShift 5
#define LED_TW_ChSceneG_ValueType                  63      // 3 Bits, Bit 4-2
#define     LED_TW_ChSceneG_ValueTypeMask 0x1C
#define     LED_TW_ChSceneG_ValueTypeShift 2
#define LED_TW_ChSceneG_Lockobject                 63      // 1 Bit, Bit 1
#define     LED_TW_ChSceneG_LockobjectMask 0x02
#define     LED_TW_ChSceneG_LockobjectShift 1
#define LED_TW_ChSceneG_LockobjectFunc             63      // 2 Bits, Bit 0--1
#define LED_TW_ChSceneG_AllowSave                  64      // 1 Bit, Bit 7
#define     LED_TW_ChSceneG_AllowSaveMask 0x80
#define     LED_TW_ChSceneG_AllowSaveShift 7
#define LED_TW_ChSceneG_Number                     64      // 7 Bits, Bit 6-0
#define     LED_TW_ChSceneG_NumberMask 0x7F
#define     LED_TW_ChSceneG_NumberShift 0
#define LED_TW_ChSceneG_Function                   65      // 2 Bits, Bit 7-6
#define     LED_TW_ChSceneG_FunctionMask 0xC0
#define     LED_TW_ChSceneG_FunctionShift 6
#define LED_TW_ChSceneG_Sequence                   65      // 2 Bits, Bit 7-6
#define     LED_TW_ChSceneG_SequenceMask 0xC0
#define     LED_TW_ChSceneG_SequenceShift 6
#define LED_TW_ChSceneG_Brightness                 65      // uint8_t
#define LED_TW_ChSceneG_TW                         66      // uint16_t
#define LED_TW_ChSceneH_Type                       68      // 3 Bits, Bit 7-5
#define     LED_TW_ChSceneH_TypeMask 0xE0
#define     LED_TW_ChSceneH_TypeShift 5
#define LED_TW_ChSceneH_ValueType                  68      // 3 Bits, Bit 4-2
#define     LED_TW_ChSceneH_ValueTypeMask 0x1C
#define     LED_TW_ChSceneH_ValueTypeShift 2
#define LED_TW_ChSceneH_Lockobject                 68      // 1 Bit, Bit 1
#define     LED_TW_ChSceneH_LockobjectMask 0x02
#define     LED_TW_ChSceneH_LockobjectShift 1
#define LED_TW_ChSceneH_LockobjectFunc             68      // 2 Bits, Bit 0--1
#define LED_TW_ChSceneH_AllowSave                  69      // 1 Bit, Bit 7
#define     LED_TW_ChSceneH_AllowSaveMask 0x80
#define     LED_TW_ChSceneH_AllowSaveShift 7
#define LED_TW_ChSceneH_Number                     69      // 7 Bits, Bit 6-0
#define     LED_TW_ChSceneH_NumberMask 0x7F
#define     LED_TW_ChSceneH_NumberShift 0
#define LED_TW_ChSceneH_Function                   70      // 2 Bits, Bit 7-6
#define     LED_TW_ChSceneH_FunctionMask 0xC0
#define     LED_TW_ChSceneH_FunctionShift 6
#define LED_TW_ChSceneH_Sequence                   70      // 2 Bits, Bit 7-6
#define     LED_TW_ChSceneH_SequenceMask 0xC0
#define     LED_TW_ChSceneH_SequenceShift 6
#define LED_TW_ChSceneH_Brightness                 70      // uint8_t
#define LED_TW_ChSceneH_TW                         71      // uint16_t

// Dimmzeit Tag An
#define ParamLED_TW_ChLightDimmDayOnTime                (knx.paramWord(LED_TW_ParamCalcIndex(LED_TW_ChLightDimmDayOnTime)))
// Dimmzeit Tag Aus
#define ParamLED_TW_ChLightDimmDayOffTime               (knx.paramWord(LED_TW_ParamCalcIndex(LED_TW_ChLightDimmDayOffTime)))
// Dimmzeit Nacht An
#define ParamLED_TW_ChLightDimmNightOnTime              (knx.paramWord(LED_TW_ParamCalcIndex(LED_TW_ChLightDimmNightOnTime)))
// Dimmzeit Nacht Aus
#define ParamLED_TW_ChLightDimmNightOffTime             (knx.paramWord(LED_TW_ParamCalcIndex(LED_TW_ChLightDimmNightOffTime)))
// Dimmzeit Relativ
#define ParamLED_TW_ChLightDimmRelTime                  (knx.paramWord(LED_TW_ParamCalcIndex(LED_TW_ChLightDimmRelTime)))
// Helligkeit min.
#define ParamLED_TW_ChBrightnessMin                     (knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChBrightnessMin)))
// Helligkeit max. (Tag)
#define ParamLED_TW_ChBrightnessMaxDay                  (knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChBrightnessMaxDay)))
// Helligkeit max. (Nacht)
#define ParamLED_TW_ChBrightnessMaxNight                (knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChBrightnessMaxNight)))
// Dimmkurve
#define ParamLED_TW_ChDimCurve                          ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChDimCurve)) & LED_TW_ChDimCurveMask) >> LED_TW_ChDimCurveShift)
// Einschaltverhalten
#define ParamLED_TW_ChStartupBehavior                   ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChStartupBehavior)) & LED_TW_ChStartupBehaviorMask) >> LED_TW_ChStartupBehaviorShift)
// Status Ein/Aus senden
#define ParamLED_TW_ChStatusOnOffSend                   ((bool)(knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChStatusOnOffSend)) & LED_TW_ChStatusOnOffSendMask))
// Status Helligkeit senden
#define ParamLED_TW_ChStatusBrightnessSend              ((bool)(knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChStatusBrightnessSend)) & LED_TW_ChStatusBrightnessSendMask))
// Status Farbtemperatur senden
#define ParamLED_TW_ChStatusTempSend                    ((bool)(knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChStatusTempSend)) & LED_TW_ChStatusTempSendMask))
// Zeitbasis
#define ParamLED_TW_ChStatusOnOffBase                   ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChStatusOnOffBase)) & LED_TW_ChStatusOnOffBaseMask) >> LED_TW_ChStatusOnOffBaseShift)
// Zeit
#define ParamLED_TW_ChStatusOnOffTime                   (knx.paramWord(LED_TW_ParamCalcIndex(LED_TW_ChStatusOnOffTime)) & LED_TW_ChStatusOnOffTimeMask)
// Zeit (in Millisekunden)
#define ParamLED_TW_ChStatusOnOffTimeMS                 (paramDelay(knx.paramWord(LED_TW_ParamCalcIndex(LED_TW_ChStatusOnOffTime))))
// Zeitbasis
#define ParamLED_TW_ChStatusBrightnessBase              ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChStatusBrightnessBase)) & LED_TW_ChStatusBrightnessBaseMask) >> LED_TW_ChStatusBrightnessBaseShift)
// Zeit
#define ParamLED_TW_ChStatusBrightnessTime              (knx.paramWord(LED_TW_ParamCalcIndex(LED_TW_ChStatusBrightnessTime)) & LED_TW_ChStatusBrightnessTimeMask)
// Zeit (in Millisekunden)
#define ParamLED_TW_ChStatusBrightnessTimeMS            (paramDelay(knx.paramWord(LED_TW_ParamCalcIndex(LED_TW_ChStatusBrightnessTime))))
// Zeitbasis
#define ParamLED_TW_ChStatusTempBase                    ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChStatusTempBase)) & LED_TW_ChStatusTempBaseMask) >> LED_TW_ChStatusTempBaseShift)
// Zeit
#define ParamLED_TW_ChStatusTempTime                    (knx.paramWord(LED_TW_ParamCalcIndex(LED_TW_ChStatusTempTime)) & LED_TW_ChStatusTempTimeMask)
// Zeit (in Millisekunden)
#define ParamLED_TW_ChStatusTempTimeMS                  (paramDelay(knx.paramWord(LED_TW_ParamCalcIndex(LED_TW_ChStatusTempTime))))
// Treppenlichtfunktion
#define ParamLED_TW_ChStairCaseActive                   ((bool)(knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChStairCaseActive)) & LED_TW_ChStairCaseActiveMask))
// Treppenlicht Trigger
#define ParamLED_TW_ChStairCaseTrigger                  ((bool)(knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChStairCaseTrigger)) & LED_TW_ChStairCaseTriggerMask))
// Zeitbasis
#define ParamLED_TW_ChStairCaseBase                     ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChStairCaseBase)) & LED_TW_ChStairCaseBaseMask) >> LED_TW_ChStairCaseBaseShift)
// Zeit
#define ParamLED_TW_ChStairCaseTime                     (knx.paramWord(LED_TW_ParamCalcIndex(LED_TW_ChStairCaseTime)) & LED_TW_ChStairCaseTimeMask)
// Zeit (in Millisekunden)
#define ParamLED_TW_ChStairCaseTimeMS                   (paramDelay(knx.paramWord(LED_TW_ParamCalcIndex(LED_TW_ChStairCaseTime))))
// Farbtemperatur Kaltweiss
#define ParamLED_TW_ChColorTempCW                       (knx.paramWord(LED_TW_ParamCalcIndex(LED_TW_ChColorTempCW)))
// Farbtemperatur Warmweiss
#define ParamLED_TW_ChColorTempWW                       (knx.paramWord(LED_TW_ParamCalcIndex(LED_TW_ChColorTempWW)))
// Farbtemperatur Tag
#define ParamLED_TW_ChColorTempDay                      (knx.paramWord(LED_TW_ParamCalcIndex(LED_TW_ChColorTempDay)))
// Farbtemperatur Nacht
#define ParamLED_TW_ChColorTempNight                    (knx.paramWord(LED_TW_ParamCalcIndex(LED_TW_ChColorTempNight)))
// Szenen
#define ParamLED_TW_ChScenesActive                      ((bool)(knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChScenesActive)) & LED_TW_ChScenesActiveMask))
// Deaktivierung bei Nachtumschaltung
#define ParamLED_TW_ChScenesDisableNightSw              ((bool)(knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChScenesDisableNightSw)) & LED_TW_ChScenesDisableNightSwMask))
// Typ
#define ParamLED_TW_ChSceneA_Type                       ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneA_Type)) & LED_TW_ChSceneA_TypeMask) >> LED_TW_ChSceneA_TypeShift)
// Typ
#define ParamLED_TW_ChSceneA_ValueType                  ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneA_ValueType)) & LED_TW_ChSceneA_ValueTypeMask) >> LED_TW_ChSceneA_ValueTypeShift)
// Sperrobjekt
#define ParamLED_TW_ChSceneA_Lockobject                 ((bool)(knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneA_Lockobject)) & LED_TW_ChSceneA_LockobjectMask))
// Sperren
#define ParamLED_TW_ChSceneA_LockobjectFunc             (knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneA_LockobjectFunc)))
// Speichern
#define ParamLED_TW_ChSceneA_AllowSave                  ((bool)(knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneA_AllowSave)) & LED_TW_ChSceneA_AllowSaveMask))
// Typ
#define ParamLED_TW_ChSceneA_Number                     (knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneA_Number)) & LED_TW_ChSceneA_NumberMask)
// Funktion
#define ParamLED_TW_ChSceneA_Function                   ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneA_Function)) & LED_TW_ChSceneA_FunctionMask) >> LED_TW_ChSceneA_FunctionShift)
// Ablauf
#define ParamLED_TW_ChSceneA_Sequence                   ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneA_Sequence)) & LED_TW_ChSceneA_SequenceMask) >> LED_TW_ChSceneA_SequenceShift)
// Helligkeit
#define ParamLED_TW_ChSceneA_Brightness                 (knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneA_Brightness)))
// Lichtfarbe
#define ParamLED_TW_ChSceneA_TW                         (knx.paramWord(LED_TW_ParamCalcIndex(LED_TW_ChSceneA_TW)))
// Typ
#define ParamLED_TW_ChSceneB_Type                       ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneB_Type)) & LED_TW_ChSceneB_TypeMask) >> LED_TW_ChSceneB_TypeShift)
// Typ
#define ParamLED_TW_ChSceneB_ValueType                  ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneB_ValueType)) & LED_TW_ChSceneB_ValueTypeMask) >> LED_TW_ChSceneB_ValueTypeShift)
// Sperrobjekt
#define ParamLED_TW_ChSceneB_Lockobject                 ((bool)(knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneB_Lockobject)) & LED_TW_ChSceneB_LockobjectMask))
// Sperren
#define ParamLED_TW_ChSceneB_LockobjectFunc             (knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneB_LockobjectFunc)))
// Speichern
#define ParamLED_TW_ChSceneB_AllowSave                  ((bool)(knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneB_AllowSave)) & LED_TW_ChSceneB_AllowSaveMask))
// Typ
#define ParamLED_TW_ChSceneB_Number                     (knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneB_Number)) & LED_TW_ChSceneB_NumberMask)
// Funktion
#define ParamLED_TW_ChSceneB_Function                   ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneB_Function)) & LED_TW_ChSceneB_FunctionMask) >> LED_TW_ChSceneB_FunctionShift)
// Ablauf
#define ParamLED_TW_ChSceneB_Sequence                   ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneB_Sequence)) & LED_TW_ChSceneB_SequenceMask) >> LED_TW_ChSceneB_SequenceShift)
// Helligkeit
#define ParamLED_TW_ChSceneB_Brightness                 (knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneB_Brightness)))
// Lichtfarbe
#define ParamLED_TW_ChSceneB_TW                         (knx.paramWord(LED_TW_ParamCalcIndex(LED_TW_ChSceneB_TW)))
// Typ
#define ParamLED_TW_ChSceneC_Type                       ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneC_Type)) & LED_TW_ChSceneC_TypeMask) >> LED_TW_ChSceneC_TypeShift)
// Typ
#define ParamLED_TW_ChSceneC_ValueType                  ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneC_ValueType)) & LED_TW_ChSceneC_ValueTypeMask) >> LED_TW_ChSceneC_ValueTypeShift)
// Sperrobjekt
#define ParamLED_TW_ChSceneC_Lockobject                 ((bool)(knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneC_Lockobject)) & LED_TW_ChSceneC_LockobjectMask))
// Sperren
#define ParamLED_TW_ChSceneC_LockobjectFunc             (knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneC_LockobjectFunc)))
// Speichern
#define ParamLED_TW_ChSceneC_AllowSave                  ((bool)(knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneC_AllowSave)) & LED_TW_ChSceneC_AllowSaveMask))
// Typ
#define ParamLED_TW_ChSceneC_Number                     (knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneC_Number)) & LED_TW_ChSceneC_NumberMask)
// Funktion
#define ParamLED_TW_ChSceneC_Function                   ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneC_Function)) & LED_TW_ChSceneC_FunctionMask) >> LED_TW_ChSceneC_FunctionShift)
// Ablauf
#define ParamLED_TW_ChSceneC_Sequence                   ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneC_Sequence)) & LED_TW_ChSceneC_SequenceMask) >> LED_TW_ChSceneC_SequenceShift)
// Helligkeit
#define ParamLED_TW_ChSceneC_Brightness                 (knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneC_Brightness)))
// Lichtfarbe
#define ParamLED_TW_ChSceneC_TW                         (knx.paramWord(LED_TW_ParamCalcIndex(LED_TW_ChSceneC_TW)))
// Typ
#define ParamLED_TW_ChSceneD_Type                       ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneD_Type)) & LED_TW_ChSceneD_TypeMask) >> LED_TW_ChSceneD_TypeShift)
// Typ
#define ParamLED_TW_ChSceneD_ValueType                  ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneD_ValueType)) & LED_TW_ChSceneD_ValueTypeMask) >> LED_TW_ChSceneD_ValueTypeShift)
// Sperrobjekt
#define ParamLED_TW_ChSceneD_Lockobject                 ((bool)(knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneD_Lockobject)) & LED_TW_ChSceneD_LockobjectMask))
// Sperren
#define ParamLED_TW_ChSceneD_LockobjectFunc             (knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneD_LockobjectFunc)))
// Speichern
#define ParamLED_TW_ChSceneD_AllowSave                  ((bool)(knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneD_AllowSave)) & LED_TW_ChSceneD_AllowSaveMask))
// Typ
#define ParamLED_TW_ChSceneD_Number                     (knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneD_Number)) & LED_TW_ChSceneD_NumberMask)
// Funktion
#define ParamLED_TW_ChSceneD_Function                   ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneD_Function)) & LED_TW_ChSceneD_FunctionMask) >> LED_TW_ChSceneD_FunctionShift)
// Ablauf
#define ParamLED_TW_ChSceneD_Sequence                   ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneD_Sequence)) & LED_TW_ChSceneD_SequenceMask) >> LED_TW_ChSceneD_SequenceShift)
// Helligkeit
#define ParamLED_TW_ChSceneD_Brightness                 (knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneD_Brightness)))
// Lichtfarbe
#define ParamLED_TW_ChSceneD_TW                         (knx.paramWord(LED_TW_ParamCalcIndex(LED_TW_ChSceneD_TW)))
// Typ
#define ParamLED_TW_ChSceneE_Type                       ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneE_Type)) & LED_TW_ChSceneE_TypeMask) >> LED_TW_ChSceneE_TypeShift)
// Typ
#define ParamLED_TW_ChSceneE_ValueType                  ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneE_ValueType)) & LED_TW_ChSceneE_ValueTypeMask) >> LED_TW_ChSceneE_ValueTypeShift)
// Sperrobjekt
#define ParamLED_TW_ChSceneE_Lockobject                 ((bool)(knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneE_Lockobject)) & LED_TW_ChSceneE_LockobjectMask))
// Sperren
#define ParamLED_TW_ChSceneE_LockobjectFunc             (knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneE_LockobjectFunc)))
// Speichern
#define ParamLED_TW_ChSceneE_AllowSave                  ((bool)(knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneE_AllowSave)) & LED_TW_ChSceneE_AllowSaveMask))
// Typ
#define ParamLED_TW_ChSceneE_Number                     (knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneE_Number)) & LED_TW_ChSceneE_NumberMask)
// Funktion
#define ParamLED_TW_ChSceneE_Function                   ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneE_Function)) & LED_TW_ChSceneE_FunctionMask) >> LED_TW_ChSceneE_FunctionShift)
// Ablauf
#define ParamLED_TW_ChSceneE_Sequence                   ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneE_Sequence)) & LED_TW_ChSceneE_SequenceMask) >> LED_TW_ChSceneE_SequenceShift)
// Helligkeit
#define ParamLED_TW_ChSceneE_Brightness                 (knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneE_Brightness)))
// Lichtfarbe
#define ParamLED_TW_ChSceneE_TW                         (knx.paramWord(LED_TW_ParamCalcIndex(LED_TW_ChSceneE_TW)))
// Typ
#define ParamLED_TW_ChSceneF_Type                       ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneF_Type)) & LED_TW_ChSceneF_TypeMask) >> LED_TW_ChSceneF_TypeShift)
// Typ
#define ParamLED_TW_ChSceneF_ValueType                  ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneF_ValueType)) & LED_TW_ChSceneF_ValueTypeMask) >> LED_TW_ChSceneF_ValueTypeShift)
// Sperrobjekt
#define ParamLED_TW_ChSceneF_Lockobject                 ((bool)(knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneF_Lockobject)) & LED_TW_ChSceneF_LockobjectMask))
// Sperren
#define ParamLED_TW_ChSceneF_LockobjectFunc             (knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneF_LockobjectFunc)))
// Speichern
#define ParamLED_TW_ChSceneF_AllowSave                  ((bool)(knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneF_AllowSave)) & LED_TW_ChSceneF_AllowSaveMask))
// Typ
#define ParamLED_TW_ChSceneF_Number                     (knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneF_Number)) & LED_TW_ChSceneF_NumberMask)
// Funktion
#define ParamLED_TW_ChSceneF_Function                   ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneF_Function)) & LED_TW_ChSceneF_FunctionMask) >> LED_TW_ChSceneF_FunctionShift)
// Ablauf
#define ParamLED_TW_ChSceneF_Sequence                   ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneF_Sequence)) & LED_TW_ChSceneF_SequenceMask) >> LED_TW_ChSceneF_SequenceShift)
// Helligkeit
#define ParamLED_TW_ChSceneF_Brightness                 (knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneF_Brightness)))
// Lichtfarbe
#define ParamLED_TW_ChSceneF_TW                         (knx.paramWord(LED_TW_ParamCalcIndex(LED_TW_ChSceneF_TW)))
// Typ
#define ParamLED_TW_ChSceneG_Type                       ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneG_Type)) & LED_TW_ChSceneG_TypeMask) >> LED_TW_ChSceneG_TypeShift)
// Typ
#define ParamLED_TW_ChSceneG_ValueType                  ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneG_ValueType)) & LED_TW_ChSceneG_ValueTypeMask) >> LED_TW_ChSceneG_ValueTypeShift)
// Sperrobjekt
#define ParamLED_TW_ChSceneG_Lockobject                 ((bool)(knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneG_Lockobject)) & LED_TW_ChSceneG_LockobjectMask))
// Sperren
#define ParamLED_TW_ChSceneG_LockobjectFunc             (knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneG_LockobjectFunc)))
// Speichern
#define ParamLED_TW_ChSceneG_AllowSave                  ((bool)(knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneG_AllowSave)) & LED_TW_ChSceneG_AllowSaveMask))
// Typ
#define ParamLED_TW_ChSceneG_Number                     (knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneG_Number)) & LED_TW_ChSceneG_NumberMask)
// Funktion
#define ParamLED_TW_ChSceneG_Function                   ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneG_Function)) & LED_TW_ChSceneG_FunctionMask) >> LED_TW_ChSceneG_FunctionShift)
// Ablauf
#define ParamLED_TW_ChSceneG_Sequence                   ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneG_Sequence)) & LED_TW_ChSceneG_SequenceMask) >> LED_TW_ChSceneG_SequenceShift)
// Helligkeit
#define ParamLED_TW_ChSceneG_Brightness                 (knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneG_Brightness)))
// Lichtfarbe
#define ParamLED_TW_ChSceneG_TW                         (knx.paramWord(LED_TW_ParamCalcIndex(LED_TW_ChSceneG_TW)))
// Typ
#define ParamLED_TW_ChSceneH_Type                       ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneH_Type)) & LED_TW_ChSceneH_TypeMask) >> LED_TW_ChSceneH_TypeShift)
// Typ
#define ParamLED_TW_ChSceneH_ValueType                  ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneH_ValueType)) & LED_TW_ChSceneH_ValueTypeMask) >> LED_TW_ChSceneH_ValueTypeShift)
// Sperrobjekt
#define ParamLED_TW_ChSceneH_Lockobject                 ((bool)(knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneH_Lockobject)) & LED_TW_ChSceneH_LockobjectMask))
// Sperren
#define ParamLED_TW_ChSceneH_LockobjectFunc             (knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneH_LockobjectFunc)))
// Speichern
#define ParamLED_TW_ChSceneH_AllowSave                  ((bool)(knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneH_AllowSave)) & LED_TW_ChSceneH_AllowSaveMask))
// Typ
#define ParamLED_TW_ChSceneH_Number                     (knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneH_Number)) & LED_TW_ChSceneH_NumberMask)
// Funktion
#define ParamLED_TW_ChSceneH_Function                   ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneH_Function)) & LED_TW_ChSceneH_FunctionMask) >> LED_TW_ChSceneH_FunctionShift)
// Ablauf
#define ParamLED_TW_ChSceneH_Sequence                   ((knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneH_Sequence)) & LED_TW_ChSceneH_SequenceMask) >> LED_TW_ChSceneH_SequenceShift)
// Helligkeit
#define ParamLED_TW_ChSceneH_Brightness                 (knx.paramByte(LED_TW_ParamCalcIndex(LED_TW_ChSceneH_Brightness)))
// Lichtfarbe
#define ParamLED_TW_ChSceneH_TW                         (knx.paramWord(LED_TW_ParamCalcIndex(LED_TW_ChSceneH_TW)))

// deprecated
#define LED_TW_KoOffset 200

// Communication objects per channel (multiple occurrence)
#define LED_TW_KoBlockOffset 200
#define LED_TW_KoBlockSize 13

#define LED_TW_KoCalcNumber(index) (index + LED_TW_KoBlockOffset + _channelIndex * LED_TW_KoBlockSize)
#define LED_TW_KoCalcIndex(number) ((number >= LED_TW_KoCalcNumber(0) && number < LED_TW_KoCalcNumber(LED_TW_KoBlockSize)) ? (number - LED_TW_KoBlockOffset) % LED_TW_KoBlockSize : -1)
#define LED_TW_KoCalcChannel(number) ((number >= LED_TW_KoBlockOffset && number < LED_TW_KoBlockOffset + LED_TW_ChannelCount * LED_TW_KoBlockSize) ? (number - LED_TW_KoBlockOffset) / LED_TW_KoBlockSize : -1)

#define LED_TW_KoChSwitch 0
#define LED_TW_KoChSwitchNoDim 1
#define LED_TW_KoChSwitchBoost 2
#define LED_TW_KoChStateOnOff 3
#define LED_TW_KoChLocking 4
#define LED_TW_KoChStateLocking 5
#define LED_TW_KoChBrightness 6
#define LED_TW_KoChBrightnessRel 7
#define LED_TW_KoChBrightnessStatus 8
#define LED_TW_KoChColorTemperature 9
#define LED_TW_KoChColorTemperatureStatus 10
#define LED_TW_KoChNight 11
#define LED_TW_KoChScene 12

// Schalten
#define KoLED_TW_ChSwitch                            (knx.getGroupObject(LED_TW_KoCalcNumber(LED_TW_KoChSwitch)))
// Schalten Sofort
#define KoLED_TW_ChSwitchNoDim                       (knx.getGroupObject(LED_TW_KoCalcNumber(LED_TW_KoChSwitchNoDim)))
// Schalten Boost
#define KoLED_TW_ChSwitchBoost                       (knx.getGroupObject(LED_TW_KoCalcNumber(LED_TW_KoChSwitchBoost)))
// Status Ein/Aus
#define KoLED_TW_ChStateOnOff                        (knx.getGroupObject(LED_TW_KoCalcNumber(LED_TW_KoChStateOnOff)))
// Sperren
#define KoLED_TW_ChLocking                           (knx.getGroupObject(LED_TW_KoCalcNumber(LED_TW_KoChLocking)))
// Sperren Status
#define KoLED_TW_ChStateLocking                      (knx.getGroupObject(LED_TW_KoCalcNumber(LED_TW_KoChStateLocking)))
// Helligkeit
#define KoLED_TW_ChBrightness                        (knx.getGroupObject(LED_TW_KoCalcNumber(LED_TW_KoChBrightness)))
// Helligkeit Relativ
#define KoLED_TW_ChBrightnessRel                     (knx.getGroupObject(LED_TW_KoCalcNumber(LED_TW_KoChBrightnessRel)))
// Helligkeit Status
#define KoLED_TW_ChBrightnessStatus                  (knx.getGroupObject(LED_TW_KoCalcNumber(LED_TW_KoChBrightnessStatus)))
// Farbtemperatur
#define KoLED_TW_ChColorTemperature                  (knx.getGroupObject(LED_TW_KoCalcNumber(LED_TW_KoChColorTemperature)))
// Farbtemperatur Status
#define KoLED_TW_ChColorTemperatureStatus            (knx.getGroupObject(LED_TW_KoCalcNumber(LED_TW_KoChColorTemperatureStatus)))
// Nacht
#define KoLED_TW_ChNight                             (knx.getGroupObject(LED_TW_KoCalcNumber(LED_TW_KoChNight)))
// Szene
#define KoLED_TW_ChScene                             (knx.getGroupObject(LED_TW_KoCalcNumber(LED_TW_KoChScene)))

#define LED_RGB_ChannelCount 5

// Parameter per channel
#define LED_RGB_ParamBlockOffset 1831
#define LED_RGB_ParamBlockSize 81
#define LED_RGB_ParamCalcIndex(index) (index + LED_RGB_ParamBlockOffset + _channelIndex * LED_RGB_ParamBlockSize)

#define LED_RGB_ChLightDimmDayOnTime                 0      // uint16_t
#define LED_RGB_ChLightDimmDayOffTime                2      // uint16_t
#define LED_RGB_ChLightDimmNightOnTime               4      // uint16_t
#define LED_RGB_ChLightDimmNightOffTime              6      // uint16_t
#define LED_RGB_ChLightDimmRelTime                   8      // uint16_t
#define LED_RGB_ChBrightnessMin                     10      // uint8_t
#define LED_RGB_ChBrightnessMaxDay                  11      // uint8_t
#define LED_RGB_ChBrightnessMaxNight                12      // uint8_t
#define LED_RGB_ChDimCurve                          13      // 3 Bits, Bit 7-5
#define     LED_RGB_ChDimCurveMask 0xE0
#define     LED_RGB_ChDimCurveShift 5
#define LED_RGB_ChStartupBehavior                   13      // 2 Bits, Bit 4-3
#define     LED_RGB_ChStartupBehaviorMask 0x18
#define     LED_RGB_ChStartupBehaviorShift 3
#define LED_RGB_ChStatusOnOffSend                   14      // 1 Bit, Bit 7
#define     LED_RGB_ChStatusOnOffSendMask 0x80
#define     LED_RGB_ChStatusOnOffSendShift 7
#define LED_RGB_ChStatusBrightnessSend              14      // 1 Bit, Bit 6
#define     LED_RGB_ChStatusBrightnessSendMask 0x40
#define     LED_RGB_ChStatusBrightnessSendShift 6
#define LED_RGB_ChStatusTempSend                    14      // 1 Bit, Bit 5
#define     LED_RGB_ChStatusTempSendMask 0x20
#define     LED_RGB_ChStatusTempSendShift 5
#define LED_RGB_ChStatusRGBSend                     14      // 1 Bit, Bit 4
#define     LED_RGB_ChStatusRGBSendMask 0x10
#define     LED_RGB_ChStatusRGBSendShift 4
#define LED_RGB_ChStatusHSVSend                     14      // 1 Bit, Bit 3
#define     LED_RGB_ChStatusHSVSendMask 0x08
#define     LED_RGB_ChStatusHSVSendShift 3
#define LED_RGB_ChStatusOnOffBase                   15      // 2 Bits, Bit 7-6
#define     LED_RGB_ChStatusOnOffBaseMask 0xC0
#define     LED_RGB_ChStatusOnOffBaseShift 6
#define LED_RGB_ChStatusOnOffTime                   15      // 14 Bits, Bit 13-0
#define     LED_RGB_ChStatusOnOffTimeMask 0x3FFF
#define     LED_RGB_ChStatusOnOffTimeShift 0
#define LED_RGB_ChStatusBrightnessBase              17      // 2 Bits, Bit 7-6
#define     LED_RGB_ChStatusBrightnessBaseMask 0xC0
#define     LED_RGB_ChStatusBrightnessBaseShift 6
#define LED_RGB_ChStatusBrightnessTime              17      // 14 Bits, Bit 13-0
#define     LED_RGB_ChStatusBrightnessTimeMask 0x3FFF
#define     LED_RGB_ChStatusBrightnessTimeShift 0
#define LED_RGB_ChStatusTempBase                    19      // 2 Bits, Bit 7-6
#define     LED_RGB_ChStatusTempBaseMask 0xC0
#define     LED_RGB_ChStatusTempBaseShift 6
#define LED_RGB_ChStatusTempTime                    19      // 14 Bits, Bit 13-0
#define     LED_RGB_ChStatusTempTimeMask 0x3FFF
#define     LED_RGB_ChStatusTempTimeShift 0
#define LED_RGB_ChStatusRGBBase                     21      // 2 Bits, Bit 7-6
#define     LED_RGB_ChStatusRGBBaseMask 0xC0
#define     LED_RGB_ChStatusRGBBaseShift 6
#define LED_RGB_ChStatusRGBTime                     21      // 14 Bits, Bit 13-0
#define     LED_RGB_ChStatusRGBTimeMask 0x3FFF
#define     LED_RGB_ChStatusRGBTimeShift 0
#define LED_RGB_ChStatusHSVBase                     23      // 2 Bits, Bit 7-6
#define     LED_RGB_ChStatusHSVBaseMask 0xC0
#define     LED_RGB_ChStatusHSVBaseShift 6
#define LED_RGB_ChStatusHSVTime                     23      // 14 Bits, Bit 13-0
#define     LED_RGB_ChStatusHSVTimeMask 0x3FFF
#define     LED_RGB_ChStatusHSVTimeShift 0
#define LED_RGB_ChStairCaseActive                   25      // 1 Bit, Bit 7
#define     LED_RGB_ChStairCaseActiveMask 0x80
#define     LED_RGB_ChStairCaseActiveShift 7
#define LED_RGB_ChStairCaseTrigger                  25      // 1 Bit, Bit 6
#define     LED_RGB_ChStairCaseTriggerMask 0x40
#define     LED_RGB_ChStairCaseTriggerShift 6
#define LED_RGB_ChStairCaseBase                     26      // 2 Bits, Bit 7-6
#define     LED_RGB_ChStairCaseBaseMask 0xC0
#define     LED_RGB_ChStairCaseBaseShift 6
#define LED_RGB_ChStairCaseTime                     26      // 14 Bits, Bit 13-0
#define     LED_RGB_ChStairCaseTimeMask 0x3FFF
#define     LED_RGB_ChStairCaseTimeShift 0
#define LED_RGB_ChColorDay                          28      // 5 Bits, Bit 7-3
#define     LED_RGB_ChColorDayMask 0xF8
#define     LED_RGB_ChColorDayShift 3
#define LED_RGB_ChColorDayPicker                    29      // 24 Bits, Bit 31-8
#define     LED_RGB_ChColorDayPickerMask 0xFFFFFF00
#define     LED_RGB_ChColorDayPickerShift 8
#define LED_RGB_ChColorDayTemp                      30      // uint16_t
#define LED_RGB_ChColorDayBase                      32      // 2 Bits, Bit 7-6
#define     LED_RGB_ChColorDayBaseMask 0xC0
#define     LED_RGB_ChColorDayBaseShift 6
#define LED_RGB_ChColorDayTime                      32      // 14 Bits, Bit 13-0
#define     LED_RGB_ChColorDayTimeMask 0x3FFF
#define     LED_RGB_ChColorDayTimeShift 0
#define LED_RGB_ChColorNight                        34      // 5 Bits, Bit 7-3
#define     LED_RGB_ChColorNightMask 0xF8
#define     LED_RGB_ChColorNightShift 3
#define LED_RGB_ChColorNightPicker                  35      // 24 Bits, Bit 31-8
#define     LED_RGB_ChColorNightPickerMask 0xFFFFFF00
#define     LED_RGB_ChColorNightPickerShift 8
#define LED_RGB_ChColorNightTemp                    36      // uint16_t
#define LED_RGB_ChColorNightBase                    38      // 2 Bits, Bit 7-6
#define     LED_RGB_ChColorNightBaseMask 0xC0
#define     LED_RGB_ChColorNightBaseShift 6
#define LED_RGB_ChColorNightTime                    38      // 14 Bits, Bit 13-0
#define     LED_RGB_ChColorNightTimeMask 0x3FFF
#define     LED_RGB_ChColorNightTimeShift 0
#define LED_RGB_ChScenesActive                      40      // 1 Bit, Bit 7
#define     LED_RGB_ChScenesActiveMask 0x80
#define     LED_RGB_ChScenesActiveShift 7
#define LED_RGB_ChScenesDisableNightSw              40      // 1 Bit, Bit 6
#define     LED_RGB_ChScenesDisableNightSwMask 0x40
#define     LED_RGB_ChScenesDisableNightSwShift 6
#define LED_RGB_ChSceneA_Type                       41      // 3 Bits, Bit 7-5
#define     LED_RGB_ChSceneA_TypeMask 0xE0
#define     LED_RGB_ChSceneA_TypeShift 5
#define LED_RGB_ChSceneA_ValueType                  41      // 3 Bits, Bit 4-2
#define     LED_RGB_ChSceneA_ValueTypeMask 0x1C
#define     LED_RGB_ChSceneA_ValueTypeShift 2
#define LED_RGB_ChSceneA_Lockobject                 41      // 1 Bit, Bit 1
#define     LED_RGB_ChSceneA_LockobjectMask 0x02
#define     LED_RGB_ChSceneA_LockobjectShift 1
#define LED_RGB_ChSceneA_LockobjectFunc             41      // 2 Bits, Bit 0--1
#define LED_RGB_ChSceneA_AllowSave                  42      // 1 Bit, Bit 7
#define     LED_RGB_ChSceneA_AllowSaveMask 0x80
#define     LED_RGB_ChSceneA_AllowSaveShift 7
#define LED_RGB_ChSceneA_Number                     42      // 7 Bits, Bit 6-0
#define     LED_RGB_ChSceneA_NumberMask 0x7F
#define     LED_RGB_ChSceneA_NumberShift 0
#define LED_RGB_ChSceneA_Function                   43      // 2 Bits, Bit 7-6
#define     LED_RGB_ChSceneA_FunctionMask 0xC0
#define     LED_RGB_ChSceneA_FunctionShift 6
#define LED_RGB_ChSceneA_Sequence                   43      // 2 Bits, Bit 7-6
#define     LED_RGB_ChSceneA_SequenceMask 0xC0
#define     LED_RGB_ChSceneA_SequenceShift 6
#define LED_RGB_ChSceneA_Brightness                 43      // uint8_t
#define LED_RGB_ChSceneA_RGB                        43      // 24 Bits, Bit 31-8
#define     LED_RGB_ChSceneA_RGBMask 0xFFFFFF00
#define     LED_RGB_ChSceneA_RGBShift 8
#define LED_RGB_ChSceneA_Hue                        43      // uint8_t
#define LED_RGB_ChSceneA_Sat                        43      // uint8_t
#define LED_RGB_ChSceneB_Type                       46      // 3 Bits, Bit 7-5
#define     LED_RGB_ChSceneB_TypeMask 0xE0
#define     LED_RGB_ChSceneB_TypeShift 5
#define LED_RGB_ChSceneB_ValueType                  46      // 3 Bits, Bit 4-2
#define     LED_RGB_ChSceneB_ValueTypeMask 0x1C
#define     LED_RGB_ChSceneB_ValueTypeShift 2
#define LED_RGB_ChSceneB_Lockobject                 46      // 1 Bit, Bit 1
#define     LED_RGB_ChSceneB_LockobjectMask 0x02
#define     LED_RGB_ChSceneB_LockobjectShift 1
#define LED_RGB_ChSceneB_LockobjectFunc             46      // 2 Bits, Bit 0--1
#define LED_RGB_ChSceneB_AllowSave                  47      // 1 Bit, Bit 7
#define     LED_RGB_ChSceneB_AllowSaveMask 0x80
#define     LED_RGB_ChSceneB_AllowSaveShift 7
#define LED_RGB_ChSceneB_Number                     47      // 7 Bits, Bit 6-0
#define     LED_RGB_ChSceneB_NumberMask 0x7F
#define     LED_RGB_ChSceneB_NumberShift 0
#define LED_RGB_ChSceneB_Function                   48      // 2 Bits, Bit 7-6
#define     LED_RGB_ChSceneB_FunctionMask 0xC0
#define     LED_RGB_ChSceneB_FunctionShift 6
#define LED_RGB_ChSceneB_Sequence                   48      // 2 Bits, Bit 7-6
#define     LED_RGB_ChSceneB_SequenceMask 0xC0
#define     LED_RGB_ChSceneB_SequenceShift 6
#define LED_RGB_ChSceneB_Brightness                 48      // uint8_t
#define LED_RGB_ChSceneB_RGB                        48      // 24 Bits, Bit 31-8
#define     LED_RGB_ChSceneB_RGBMask 0xFFFFFF00
#define     LED_RGB_ChSceneB_RGBShift 8
#define LED_RGB_ChSceneB_Hue                        48      // uint8_t
#define LED_RGB_ChSceneB_Sat                        48      // uint8_t
#define LED_RGB_ChSceneC_Type                       51      // 3 Bits, Bit 7-5
#define     LED_RGB_ChSceneC_TypeMask 0xE0
#define     LED_RGB_ChSceneC_TypeShift 5
#define LED_RGB_ChSceneC_ValueType                  51      // 3 Bits, Bit 4-2
#define     LED_RGB_ChSceneC_ValueTypeMask 0x1C
#define     LED_RGB_ChSceneC_ValueTypeShift 2
#define LED_RGB_ChSceneC_Lockobject                 51      // 1 Bit, Bit 1
#define     LED_RGB_ChSceneC_LockobjectMask 0x02
#define     LED_RGB_ChSceneC_LockobjectShift 1
#define LED_RGB_ChSceneC_LockobjectFunc             51      // 2 Bits, Bit 0--1
#define LED_RGB_ChSceneC_AllowSave                  52      // 1 Bit, Bit 7
#define     LED_RGB_ChSceneC_AllowSaveMask 0x80
#define     LED_RGB_ChSceneC_AllowSaveShift 7
#define LED_RGB_ChSceneC_Number                     52      // 7 Bits, Bit 6-0
#define     LED_RGB_ChSceneC_NumberMask 0x7F
#define     LED_RGB_ChSceneC_NumberShift 0
#define LED_RGB_ChSceneC_Function                   53      // 2 Bits, Bit 7-6
#define     LED_RGB_ChSceneC_FunctionMask 0xC0
#define     LED_RGB_ChSceneC_FunctionShift 6
#define LED_RGB_ChSceneC_Sequence                   53      // 2 Bits, Bit 7-6
#define     LED_RGB_ChSceneC_SequenceMask 0xC0
#define     LED_RGB_ChSceneC_SequenceShift 6
#define LED_RGB_ChSceneC_Brightness                 53      // uint8_t
#define LED_RGB_ChSceneC_RGB                        53      // 24 Bits, Bit 31-8
#define     LED_RGB_ChSceneC_RGBMask 0xFFFFFF00
#define     LED_RGB_ChSceneC_RGBShift 8
#define LED_RGB_ChSceneC_Hue                        53      // uint8_t
#define LED_RGB_ChSceneC_Sat                        53      // uint8_t
#define LED_RGB_ChSceneD_Type                       56      // 3 Bits, Bit 7-5
#define     LED_RGB_ChSceneD_TypeMask 0xE0
#define     LED_RGB_ChSceneD_TypeShift 5
#define LED_RGB_ChSceneD_ValueType                  56      // 3 Bits, Bit 4-2
#define     LED_RGB_ChSceneD_ValueTypeMask 0x1C
#define     LED_RGB_ChSceneD_ValueTypeShift 2
#define LED_RGB_ChSceneD_Lockobject                 56      // 1 Bit, Bit 1
#define     LED_RGB_ChSceneD_LockobjectMask 0x02
#define     LED_RGB_ChSceneD_LockobjectShift 1
#define LED_RGB_ChSceneD_LockobjectFunc             56      // 2 Bits, Bit 0--1
#define LED_RGB_ChSceneD_AllowSave                  57      // 1 Bit, Bit 7
#define     LED_RGB_ChSceneD_AllowSaveMask 0x80
#define     LED_RGB_ChSceneD_AllowSaveShift 7
#define LED_RGB_ChSceneD_Number                     57      // 7 Bits, Bit 6-0
#define     LED_RGB_ChSceneD_NumberMask 0x7F
#define     LED_RGB_ChSceneD_NumberShift 0
#define LED_RGB_ChSceneD_Function                   58      // 2 Bits, Bit 7-6
#define     LED_RGB_ChSceneD_FunctionMask 0xC0
#define     LED_RGB_ChSceneD_FunctionShift 6
#define LED_RGB_ChSceneD_Sequence                   58      // 2 Bits, Bit 7-6
#define     LED_RGB_ChSceneD_SequenceMask 0xC0
#define     LED_RGB_ChSceneD_SequenceShift 6
#define LED_RGB_ChSceneD_Brightness                 58      // uint8_t
#define LED_RGB_ChSceneD_RGB                        58      // 24 Bits, Bit 31-8
#define     LED_RGB_ChSceneD_RGBMask 0xFFFFFF00
#define     LED_RGB_ChSceneD_RGBShift 8
#define LED_RGB_ChSceneD_Hue                        58      // uint8_t
#define LED_RGB_ChSceneD_Sat                        58      // uint8_t
#define LED_RGB_ChSceneE_Type                       61      // 3 Bits, Bit 7-5
#define     LED_RGB_ChSceneE_TypeMask 0xE0
#define     LED_RGB_ChSceneE_TypeShift 5
#define LED_RGB_ChSceneE_ValueType                  61      // 3 Bits, Bit 4-2
#define     LED_RGB_ChSceneE_ValueTypeMask 0x1C
#define     LED_RGB_ChSceneE_ValueTypeShift 2
#define LED_RGB_ChSceneE_Lockobject                 61      // 1 Bit, Bit 1
#define     LED_RGB_ChSceneE_LockobjectMask 0x02
#define     LED_RGB_ChSceneE_LockobjectShift 1
#define LED_RGB_ChSceneE_LockobjectFunc             61      // 2 Bits, Bit 0--1
#define LED_RGB_ChSceneE_AllowSave                  62      // 1 Bit, Bit 7
#define     LED_RGB_ChSceneE_AllowSaveMask 0x80
#define     LED_RGB_ChSceneE_AllowSaveShift 7
#define LED_RGB_ChSceneE_Number                     62      // 7 Bits, Bit 6-0
#define     LED_RGB_ChSceneE_NumberMask 0x7F
#define     LED_RGB_ChSceneE_NumberShift 0
#define LED_RGB_ChSceneE_Function                   63      // 2 Bits, Bit 7-6
#define     LED_RGB_ChSceneE_FunctionMask 0xC0
#define     LED_RGB_ChSceneE_FunctionShift 6
#define LED_RGB_ChSceneE_Sequence                   63      // 2 Bits, Bit 7-6
#define     LED_RGB_ChSceneE_SequenceMask 0xC0
#define     LED_RGB_ChSceneE_SequenceShift 6
#define LED_RGB_ChSceneE_Brightness                 63      // uint8_t
#define LED_RGB_ChSceneE_RGB                        63      // 24 Bits, Bit 31-8
#define     LED_RGB_ChSceneE_RGBMask 0xFFFFFF00
#define     LED_RGB_ChSceneE_RGBShift 8
#define LED_RGB_ChSceneE_Hue                        63      // uint8_t
#define LED_RGB_ChSceneE_Sat                        63      // uint8_t
#define LED_RGB_ChSceneF_Type                       66      // 3 Bits, Bit 7-5
#define     LED_RGB_ChSceneF_TypeMask 0xE0
#define     LED_RGB_ChSceneF_TypeShift 5
#define LED_RGB_ChSceneF_ValueType                  66      // 3 Bits, Bit 4-2
#define     LED_RGB_ChSceneF_ValueTypeMask 0x1C
#define     LED_RGB_ChSceneF_ValueTypeShift 2
#define LED_RGB_ChSceneF_Lockobject                 66      // 1 Bit, Bit 1
#define     LED_RGB_ChSceneF_LockobjectMask 0x02
#define     LED_RGB_ChSceneF_LockobjectShift 1
#define LED_RGB_ChSceneF_LockobjectFunc             66      // 2 Bits, Bit 0--1
#define LED_RGB_ChSceneF_AllowSave                  67      // 1 Bit, Bit 7
#define     LED_RGB_ChSceneF_AllowSaveMask 0x80
#define     LED_RGB_ChSceneF_AllowSaveShift 7
#define LED_RGB_ChSceneF_Number                     67      // 7 Bits, Bit 6-0
#define     LED_RGB_ChSceneF_NumberMask 0x7F
#define     LED_RGB_ChSceneF_NumberShift 0
#define LED_RGB_ChSceneF_Function                   68      // 2 Bits, Bit 7-6
#define     LED_RGB_ChSceneF_FunctionMask 0xC0
#define     LED_RGB_ChSceneF_FunctionShift 6
#define LED_RGB_ChSceneF_Sequence                   68      // 2 Bits, Bit 7-6
#define     LED_RGB_ChSceneF_SequenceMask 0xC0
#define     LED_RGB_ChSceneF_SequenceShift 6
#define LED_RGB_ChSceneF_Brightness                 68      // uint8_t
#define LED_RGB_ChSceneF_RGB                        68      // 24 Bits, Bit 31-8
#define     LED_RGB_ChSceneF_RGBMask 0xFFFFFF00
#define     LED_RGB_ChSceneF_RGBShift 8
#define LED_RGB_ChSceneF_Hue                        68      // uint8_t
#define LED_RGB_ChSceneF_Sat                        68      // uint8_t
#define LED_RGB_ChSceneG_Type                       71      // 3 Bits, Bit 7-5
#define     LED_RGB_ChSceneG_TypeMask 0xE0
#define     LED_RGB_ChSceneG_TypeShift 5
#define LED_RGB_ChSceneG_ValueType                  71      // 3 Bits, Bit 4-2
#define     LED_RGB_ChSceneG_ValueTypeMask 0x1C
#define     LED_RGB_ChSceneG_ValueTypeShift 2
#define LED_RGB_ChSceneG_Lockobject                 71      // 1 Bit, Bit 1
#define     LED_RGB_ChSceneG_LockobjectMask 0x02
#define     LED_RGB_ChSceneG_LockobjectShift 1
#define LED_RGB_ChSceneG_LockobjectFunc             71      // 2 Bits, Bit 0--1
#define LED_RGB_ChSceneG_AllowSave                  72      // 1 Bit, Bit 7
#define     LED_RGB_ChSceneG_AllowSaveMask 0x80
#define     LED_RGB_ChSceneG_AllowSaveShift 7
#define LED_RGB_ChSceneG_Number                     72      // 7 Bits, Bit 6-0
#define     LED_RGB_ChSceneG_NumberMask 0x7F
#define     LED_RGB_ChSceneG_NumberShift 0
#define LED_RGB_ChSceneG_Function                   73      // 2 Bits, Bit 7-6
#define     LED_RGB_ChSceneG_FunctionMask 0xC0
#define     LED_RGB_ChSceneG_FunctionShift 6
#define LED_RGB_ChSceneG_Sequence                   73      // 2 Bits, Bit 7-6
#define     LED_RGB_ChSceneG_SequenceMask 0xC0
#define     LED_RGB_ChSceneG_SequenceShift 6
#define LED_RGB_ChSceneG_Brightness                 73      // uint8_t
#define LED_RGB_ChSceneG_RGB                        73      // 24 Bits, Bit 31-8
#define     LED_RGB_ChSceneG_RGBMask 0xFFFFFF00
#define     LED_RGB_ChSceneG_RGBShift 8
#define LED_RGB_ChSceneG_Hue                        73      // uint8_t
#define LED_RGB_ChSceneG_Sat                        73      // uint8_t
#define LED_RGB_ChSceneH_Type                       76      // 3 Bits, Bit 7-5
#define     LED_RGB_ChSceneH_TypeMask 0xE0
#define     LED_RGB_ChSceneH_TypeShift 5
#define LED_RGB_ChSceneH_ValueType                  76      // 3 Bits, Bit 4-2
#define     LED_RGB_ChSceneH_ValueTypeMask 0x1C
#define     LED_RGB_ChSceneH_ValueTypeShift 2
#define LED_RGB_ChSceneH_Lockobject                 76      // 1 Bit, Bit 1
#define     LED_RGB_ChSceneH_LockobjectMask 0x02
#define     LED_RGB_ChSceneH_LockobjectShift 1
#define LED_RGB_ChSceneH_LockobjectFunc             76      // 2 Bits, Bit 0--1
#define LED_RGB_ChSceneH_AllowSave                  77      // 1 Bit, Bit 7
#define     LED_RGB_ChSceneH_AllowSaveMask 0x80
#define     LED_RGB_ChSceneH_AllowSaveShift 7
#define LED_RGB_ChSceneH_Number                     77      // 7 Bits, Bit 6-0
#define     LED_RGB_ChSceneH_NumberMask 0x7F
#define     LED_RGB_ChSceneH_NumberShift 0
#define LED_RGB_ChSceneH_Function                   78      // 2 Bits, Bit 7-6
#define     LED_RGB_ChSceneH_FunctionMask 0xC0
#define     LED_RGB_ChSceneH_FunctionShift 6
#define LED_RGB_ChSceneH_Sequence                   78      // 2 Bits, Bit 7-6
#define     LED_RGB_ChSceneH_SequenceMask 0xC0
#define     LED_RGB_ChSceneH_SequenceShift 6
#define LED_RGB_ChSceneH_Brightness                 78      // uint8_t
#define LED_RGB_ChSceneH_RGB                        78      // 24 Bits, Bit 31-8
#define     LED_RGB_ChSceneH_RGBMask 0xFFFFFF00
#define     LED_RGB_ChSceneH_RGBShift 8
#define LED_RGB_ChSceneH_Hue                        78      // uint8_t
#define LED_RGB_ChSceneH_Sat                        78      // uint8_t

// Dimmzeit Tag An
#define ParamLED_RGB_ChLightDimmDayOnTime                (knx.paramWord(LED_RGB_ParamCalcIndex(LED_RGB_ChLightDimmDayOnTime)))
// Dimmzeit Tag Aus
#define ParamLED_RGB_ChLightDimmDayOffTime               (knx.paramWord(LED_RGB_ParamCalcIndex(LED_RGB_ChLightDimmDayOffTime)))
// Dimmzeit Nacht An
#define ParamLED_RGB_ChLightDimmNightOnTime              (knx.paramWord(LED_RGB_ParamCalcIndex(LED_RGB_ChLightDimmNightOnTime)))
// Dimmzeit Nacht Aus
#define ParamLED_RGB_ChLightDimmNightOffTime             (knx.paramWord(LED_RGB_ParamCalcIndex(LED_RGB_ChLightDimmNightOffTime)))
// Dimmzeit Relativ
#define ParamLED_RGB_ChLightDimmRelTime                  (knx.paramWord(LED_RGB_ParamCalcIndex(LED_RGB_ChLightDimmRelTime)))
// Helligkeit min.
#define ParamLED_RGB_ChBrightnessMin                     (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChBrightnessMin)))
// Helligkeit max. (Tag)
#define ParamLED_RGB_ChBrightnessMaxDay                  (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChBrightnessMaxDay)))
// Helligkeit max. (Nacht)
#define ParamLED_RGB_ChBrightnessMaxNight                (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChBrightnessMaxNight)))
// Dimmkurve
#define ParamLED_RGB_ChDimCurve                          ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChDimCurve)) & LED_RGB_ChDimCurveMask) >> LED_RGB_ChDimCurveShift)
// Einschaltverhalten
#define ParamLED_RGB_ChStartupBehavior                   ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChStartupBehavior)) & LED_RGB_ChStartupBehaviorMask) >> LED_RGB_ChStartupBehaviorShift)
// Status Ein/Aus senden
#define ParamLED_RGB_ChStatusOnOffSend                   ((bool)(knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChStatusOnOffSend)) & LED_RGB_ChStatusOnOffSendMask))
// Status Helligkeit senden
#define ParamLED_RGB_ChStatusBrightnessSend              ((bool)(knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChStatusBrightnessSend)) & LED_RGB_ChStatusBrightnessSendMask))
// Status Farbtemperatur senden
#define ParamLED_RGB_ChStatusTempSend                    ((bool)(knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChStatusTempSend)) & LED_RGB_ChStatusTempSendMask))
// Status RGB senden
#define ParamLED_RGB_ChStatusRGBSend                     ((bool)(knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChStatusRGBSend)) & LED_RGB_ChStatusRGBSendMask))
// Status HSV senden
#define ParamLED_RGB_ChStatusHSVSend                     ((bool)(knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChStatusHSVSend)) & LED_RGB_ChStatusHSVSendMask))
// Zeitbasis
#define ParamLED_RGB_ChStatusOnOffBase                   ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChStatusOnOffBase)) & LED_RGB_ChStatusOnOffBaseMask) >> LED_RGB_ChStatusOnOffBaseShift)
// Zeit
#define ParamLED_RGB_ChStatusOnOffTime                   (knx.paramWord(LED_RGB_ParamCalcIndex(LED_RGB_ChStatusOnOffTime)) & LED_RGB_ChStatusOnOffTimeMask)
// Zeit (in Millisekunden)
#define ParamLED_RGB_ChStatusOnOffTimeMS                 (paramDelay(knx.paramWord(LED_RGB_ParamCalcIndex(LED_RGB_ChStatusOnOffTime))))
// Zeitbasis
#define ParamLED_RGB_ChStatusBrightnessBase              ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChStatusBrightnessBase)) & LED_RGB_ChStatusBrightnessBaseMask) >> LED_RGB_ChStatusBrightnessBaseShift)
// Zeit
#define ParamLED_RGB_ChStatusBrightnessTime              (knx.paramWord(LED_RGB_ParamCalcIndex(LED_RGB_ChStatusBrightnessTime)) & LED_RGB_ChStatusBrightnessTimeMask)
// Zeit (in Millisekunden)
#define ParamLED_RGB_ChStatusBrightnessTimeMS            (paramDelay(knx.paramWord(LED_RGB_ParamCalcIndex(LED_RGB_ChStatusBrightnessTime))))
// Zeitbasis
#define ParamLED_RGB_ChStatusTempBase                    ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChStatusTempBase)) & LED_RGB_ChStatusTempBaseMask) >> LED_RGB_ChStatusTempBaseShift)
// Zeit
#define ParamLED_RGB_ChStatusTempTime                    (knx.paramWord(LED_RGB_ParamCalcIndex(LED_RGB_ChStatusTempTime)) & LED_RGB_ChStatusTempTimeMask)
// Zeit (in Millisekunden)
#define ParamLED_RGB_ChStatusTempTimeMS                  (paramDelay(knx.paramWord(LED_RGB_ParamCalcIndex(LED_RGB_ChStatusTempTime))))
// Zeitbasis
#define ParamLED_RGB_ChStatusRGBBase                     ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChStatusRGBBase)) & LED_RGB_ChStatusRGBBaseMask) >> LED_RGB_ChStatusRGBBaseShift)
// Zeit
#define ParamLED_RGB_ChStatusRGBTime                     (knx.paramWord(LED_RGB_ParamCalcIndex(LED_RGB_ChStatusRGBTime)) & LED_RGB_ChStatusRGBTimeMask)
// Zeit (in Millisekunden)
#define ParamLED_RGB_ChStatusRGBTimeMS                   (paramDelay(knx.paramWord(LED_RGB_ParamCalcIndex(LED_RGB_ChStatusRGBTime))))
// Zeitbasis
#define ParamLED_RGB_ChStatusHSVBase                     ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChStatusHSVBase)) & LED_RGB_ChStatusHSVBaseMask) >> LED_RGB_ChStatusHSVBaseShift)
// Zeit
#define ParamLED_RGB_ChStatusHSVTime                     (knx.paramWord(LED_RGB_ParamCalcIndex(LED_RGB_ChStatusHSVTime)) & LED_RGB_ChStatusHSVTimeMask)
// Zeit (in Millisekunden)
#define ParamLED_RGB_ChStatusHSVTimeMS                   (paramDelay(knx.paramWord(LED_RGB_ParamCalcIndex(LED_RGB_ChStatusHSVTime))))
// Treppenlichtfunktion
#define ParamLED_RGB_ChStairCaseActive                   ((bool)(knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChStairCaseActive)) & LED_RGB_ChStairCaseActiveMask))
// Treppenlicht Trigger
#define ParamLED_RGB_ChStairCaseTrigger                  ((bool)(knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChStairCaseTrigger)) & LED_RGB_ChStairCaseTriggerMask))
// Zeitbasis
#define ParamLED_RGB_ChStairCaseBase                     ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChStairCaseBase)) & LED_RGB_ChStairCaseBaseMask) >> LED_RGB_ChStairCaseBaseShift)
// Zeit
#define ParamLED_RGB_ChStairCaseTime                     (knx.paramWord(LED_RGB_ParamCalcIndex(LED_RGB_ChStairCaseTime)) & LED_RGB_ChStairCaseTimeMask)
// Zeit (in Millisekunden)
#define ParamLED_RGB_ChStairCaseTimeMS                   (paramDelay(knx.paramWord(LED_RGB_ParamCalcIndex(LED_RGB_ChStairCaseTime))))
// Farbe Tag
#define ParamLED_RGB_ChColorDay                          ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChColorDay)) & LED_RGB_ChColorDayMask) >> LED_RGB_ChColorDayShift)
// Farbe Tag 3-Byte-RGB
#define ParamLED_RGB_ChColorDayPicker                    ((knx.paramInt(LED_RGB_ParamCalcIndex(LED_RGB_ChColorDayPicker)) & LED_RGB_ChColorDayPickerMask) >> LED_RGB_ChColorDayPickerShift)
// Farbtemperatur Tag
#define ParamLED_RGB_ChColorDayTemp                      (knx.paramWord(LED_RGB_ParamCalcIndex(LED_RGB_ChColorDayTemp)))
// Zeitbasis
#define ParamLED_RGB_ChColorDayBase                      ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChColorDayBase)) & LED_RGB_ChColorDayBaseMask) >> LED_RGB_ChColorDayBaseShift)
// Zeit
#define ParamLED_RGB_ChColorDayTime                      (knx.paramWord(LED_RGB_ParamCalcIndex(LED_RGB_ChColorDayTime)) & LED_RGB_ChColorDayTimeMask)
// Zeit (in Millisekunden)
#define ParamLED_RGB_ChColorDayTimeMS                    (paramDelay(knx.paramWord(LED_RGB_ParamCalcIndex(LED_RGB_ChColorDayTime))))
// Farbe Nacht
#define ParamLED_RGB_ChColorNight                        ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChColorNight)) & LED_RGB_ChColorNightMask) >> LED_RGB_ChColorNightShift)
// Farbe Nacht 3-Byte-RGB
#define ParamLED_RGB_ChColorNightPicker                  ((knx.paramInt(LED_RGB_ParamCalcIndex(LED_RGB_ChColorNightPicker)) & LED_RGB_ChColorNightPickerMask) >> LED_RGB_ChColorNightPickerShift)
// Farbtemperatur Nacht
#define ParamLED_RGB_ChColorNightTemp                    (knx.paramWord(LED_RGB_ParamCalcIndex(LED_RGB_ChColorNightTemp)))
// Zeitbasis
#define ParamLED_RGB_ChColorNightBase                    ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChColorNightBase)) & LED_RGB_ChColorNightBaseMask) >> LED_RGB_ChColorNightBaseShift)
// Zeit
#define ParamLED_RGB_ChColorNightTime                    (knx.paramWord(LED_RGB_ParamCalcIndex(LED_RGB_ChColorNightTime)) & LED_RGB_ChColorNightTimeMask)
// Zeit (in Millisekunden)
#define ParamLED_RGB_ChColorNightTimeMS                  (paramDelay(knx.paramWord(LED_RGB_ParamCalcIndex(LED_RGB_ChColorNightTime))))
// Szenen
#define ParamLED_RGB_ChScenesActive                      ((bool)(knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChScenesActive)) & LED_RGB_ChScenesActiveMask))
// Deaktivierung bei Nachtumschaltung
#define ParamLED_RGB_ChScenesDisableNightSw              ((bool)(knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChScenesDisableNightSw)) & LED_RGB_ChScenesDisableNightSwMask))
// Typ
#define ParamLED_RGB_ChSceneA_Type                       ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneA_Type)) & LED_RGB_ChSceneA_TypeMask) >> LED_RGB_ChSceneA_TypeShift)
// Typ
#define ParamLED_RGB_ChSceneA_ValueType                  ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneA_ValueType)) & LED_RGB_ChSceneA_ValueTypeMask) >> LED_RGB_ChSceneA_ValueTypeShift)
// Sperrobjekt
#define ParamLED_RGB_ChSceneA_Lockobject                 ((bool)(knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneA_Lockobject)) & LED_RGB_ChSceneA_LockobjectMask))
// Sperren
#define ParamLED_RGB_ChSceneA_LockobjectFunc             (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneA_LockobjectFunc)))
// Speichern
#define ParamLED_RGB_ChSceneA_AllowSave                  ((bool)(knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneA_AllowSave)) & LED_RGB_ChSceneA_AllowSaveMask))
// Typ
#define ParamLED_RGB_ChSceneA_Number                     (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneA_Number)) & LED_RGB_ChSceneA_NumberMask)
// Funktion
#define ParamLED_RGB_ChSceneA_Function                   ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneA_Function)) & LED_RGB_ChSceneA_FunctionMask) >> LED_RGB_ChSceneA_FunctionShift)
// Ablauf
#define ParamLED_RGB_ChSceneA_Sequence                   ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneA_Sequence)) & LED_RGB_ChSceneA_SequenceMask) >> LED_RGB_ChSceneA_SequenceShift)
// Helligkeit
#define ParamLED_RGB_ChSceneA_Brightness                 (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneA_Brightness)))
// Lichtfarbe RGB
#define ParamLED_RGB_ChSceneA_RGB                        ((knx.paramInt(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneA_RGB)) & LED_RGB_ChSceneA_RGBMask) >> LED_RGB_ChSceneA_RGBShift)
// Hue
#define ParamLED_RGB_ChSceneA_Hue                        (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneA_Hue)))
// Saturation
#define ParamLED_RGB_ChSceneA_Sat                        (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneA_Sat)))
// Typ
#define ParamLED_RGB_ChSceneB_Type                       ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneB_Type)) & LED_RGB_ChSceneB_TypeMask) >> LED_RGB_ChSceneB_TypeShift)
// Typ
#define ParamLED_RGB_ChSceneB_ValueType                  ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneB_ValueType)) & LED_RGB_ChSceneB_ValueTypeMask) >> LED_RGB_ChSceneB_ValueTypeShift)
// Sperrobjekt
#define ParamLED_RGB_ChSceneB_Lockobject                 ((bool)(knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneB_Lockobject)) & LED_RGB_ChSceneB_LockobjectMask))
// Sperren
#define ParamLED_RGB_ChSceneB_LockobjectFunc             (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneB_LockobjectFunc)))
// Speichern
#define ParamLED_RGB_ChSceneB_AllowSave                  ((bool)(knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneB_AllowSave)) & LED_RGB_ChSceneB_AllowSaveMask))
// Typ
#define ParamLED_RGB_ChSceneB_Number                     (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneB_Number)) & LED_RGB_ChSceneB_NumberMask)
// Funktion
#define ParamLED_RGB_ChSceneB_Function                   ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneB_Function)) & LED_RGB_ChSceneB_FunctionMask) >> LED_RGB_ChSceneB_FunctionShift)
// Ablauf
#define ParamLED_RGB_ChSceneB_Sequence                   ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneB_Sequence)) & LED_RGB_ChSceneB_SequenceMask) >> LED_RGB_ChSceneB_SequenceShift)
// Helligkeit
#define ParamLED_RGB_ChSceneB_Brightness                 (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneB_Brightness)))
// Lichtfarbe RGB
#define ParamLED_RGB_ChSceneB_RGB                        ((knx.paramInt(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneB_RGB)) & LED_RGB_ChSceneB_RGBMask) >> LED_RGB_ChSceneB_RGBShift)
// Hue
#define ParamLED_RGB_ChSceneB_Hue                        (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneB_Hue)))
// Saturation
#define ParamLED_RGB_ChSceneB_Sat                        (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneB_Sat)))
// Typ
#define ParamLED_RGB_ChSceneC_Type                       ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneC_Type)) & LED_RGB_ChSceneC_TypeMask) >> LED_RGB_ChSceneC_TypeShift)
// Typ
#define ParamLED_RGB_ChSceneC_ValueType                  ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneC_ValueType)) & LED_RGB_ChSceneC_ValueTypeMask) >> LED_RGB_ChSceneC_ValueTypeShift)
// Sperrobjekt
#define ParamLED_RGB_ChSceneC_Lockobject                 ((bool)(knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneC_Lockobject)) & LED_RGB_ChSceneC_LockobjectMask))
// Sperren
#define ParamLED_RGB_ChSceneC_LockobjectFunc             (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneC_LockobjectFunc)))
// Speichern
#define ParamLED_RGB_ChSceneC_AllowSave                  ((bool)(knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneC_AllowSave)) & LED_RGB_ChSceneC_AllowSaveMask))
// Typ
#define ParamLED_RGB_ChSceneC_Number                     (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneC_Number)) & LED_RGB_ChSceneC_NumberMask)
// Funktion
#define ParamLED_RGB_ChSceneC_Function                   ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneC_Function)) & LED_RGB_ChSceneC_FunctionMask) >> LED_RGB_ChSceneC_FunctionShift)
// Ablauf
#define ParamLED_RGB_ChSceneC_Sequence                   ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneC_Sequence)) & LED_RGB_ChSceneC_SequenceMask) >> LED_RGB_ChSceneC_SequenceShift)
// Helligkeit
#define ParamLED_RGB_ChSceneC_Brightness                 (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneC_Brightness)))
// Lichtfarbe RGB
#define ParamLED_RGB_ChSceneC_RGB                        ((knx.paramInt(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneC_RGB)) & LED_RGB_ChSceneC_RGBMask) >> LED_RGB_ChSceneC_RGBShift)
// Hue
#define ParamLED_RGB_ChSceneC_Hue                        (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneC_Hue)))
// Saturation
#define ParamLED_RGB_ChSceneC_Sat                        (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneC_Sat)))
// Typ
#define ParamLED_RGB_ChSceneD_Type                       ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneD_Type)) & LED_RGB_ChSceneD_TypeMask) >> LED_RGB_ChSceneD_TypeShift)
// Typ
#define ParamLED_RGB_ChSceneD_ValueType                  ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneD_ValueType)) & LED_RGB_ChSceneD_ValueTypeMask) >> LED_RGB_ChSceneD_ValueTypeShift)
// Sperrobjekt
#define ParamLED_RGB_ChSceneD_Lockobject                 ((bool)(knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneD_Lockobject)) & LED_RGB_ChSceneD_LockobjectMask))
// Sperren
#define ParamLED_RGB_ChSceneD_LockobjectFunc             (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneD_LockobjectFunc)))
// Speichern
#define ParamLED_RGB_ChSceneD_AllowSave                  ((bool)(knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneD_AllowSave)) & LED_RGB_ChSceneD_AllowSaveMask))
// Typ
#define ParamLED_RGB_ChSceneD_Number                     (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneD_Number)) & LED_RGB_ChSceneD_NumberMask)
// Funktion
#define ParamLED_RGB_ChSceneD_Function                   ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneD_Function)) & LED_RGB_ChSceneD_FunctionMask) >> LED_RGB_ChSceneD_FunctionShift)
// Ablauf
#define ParamLED_RGB_ChSceneD_Sequence                   ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneD_Sequence)) & LED_RGB_ChSceneD_SequenceMask) >> LED_RGB_ChSceneD_SequenceShift)
// Helligkeit
#define ParamLED_RGB_ChSceneD_Brightness                 (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneD_Brightness)))
// Lichtfarbe RGB
#define ParamLED_RGB_ChSceneD_RGB                        ((knx.paramInt(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneD_RGB)) & LED_RGB_ChSceneD_RGBMask) >> LED_RGB_ChSceneD_RGBShift)
// Hue
#define ParamLED_RGB_ChSceneD_Hue                        (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneD_Hue)))
// Saturation
#define ParamLED_RGB_ChSceneD_Sat                        (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneD_Sat)))
// Typ
#define ParamLED_RGB_ChSceneE_Type                       ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneE_Type)) & LED_RGB_ChSceneE_TypeMask) >> LED_RGB_ChSceneE_TypeShift)
// Typ
#define ParamLED_RGB_ChSceneE_ValueType                  ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneE_ValueType)) & LED_RGB_ChSceneE_ValueTypeMask) >> LED_RGB_ChSceneE_ValueTypeShift)
// Sperrobjekt
#define ParamLED_RGB_ChSceneE_Lockobject                 ((bool)(knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneE_Lockobject)) & LED_RGB_ChSceneE_LockobjectMask))
// Sperren
#define ParamLED_RGB_ChSceneE_LockobjectFunc             (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneE_LockobjectFunc)))
// Speichern
#define ParamLED_RGB_ChSceneE_AllowSave                  ((bool)(knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneE_AllowSave)) & LED_RGB_ChSceneE_AllowSaveMask))
// Typ
#define ParamLED_RGB_ChSceneE_Number                     (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneE_Number)) & LED_RGB_ChSceneE_NumberMask)
// Funktion
#define ParamLED_RGB_ChSceneE_Function                   ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneE_Function)) & LED_RGB_ChSceneE_FunctionMask) >> LED_RGB_ChSceneE_FunctionShift)
// Ablauf
#define ParamLED_RGB_ChSceneE_Sequence                   ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneE_Sequence)) & LED_RGB_ChSceneE_SequenceMask) >> LED_RGB_ChSceneE_SequenceShift)
// Helligkeit
#define ParamLED_RGB_ChSceneE_Brightness                 (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneE_Brightness)))
// Lichtfarbe RGB
#define ParamLED_RGB_ChSceneE_RGB                        ((knx.paramInt(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneE_RGB)) & LED_RGB_ChSceneE_RGBMask) >> LED_RGB_ChSceneE_RGBShift)
// Hue
#define ParamLED_RGB_ChSceneE_Hue                        (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneE_Hue)))
// Saturation
#define ParamLED_RGB_ChSceneE_Sat                        (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneE_Sat)))
// Typ
#define ParamLED_RGB_ChSceneF_Type                       ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneF_Type)) & LED_RGB_ChSceneF_TypeMask) >> LED_RGB_ChSceneF_TypeShift)
// Typ
#define ParamLED_RGB_ChSceneF_ValueType                  ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneF_ValueType)) & LED_RGB_ChSceneF_ValueTypeMask) >> LED_RGB_ChSceneF_ValueTypeShift)
// Sperrobjekt
#define ParamLED_RGB_ChSceneF_Lockobject                 ((bool)(knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneF_Lockobject)) & LED_RGB_ChSceneF_LockobjectMask))
// Sperren
#define ParamLED_RGB_ChSceneF_LockobjectFunc             (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneF_LockobjectFunc)))
// Speichern
#define ParamLED_RGB_ChSceneF_AllowSave                  ((bool)(knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneF_AllowSave)) & LED_RGB_ChSceneF_AllowSaveMask))
// Typ
#define ParamLED_RGB_ChSceneF_Number                     (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneF_Number)) & LED_RGB_ChSceneF_NumberMask)
// Funktion
#define ParamLED_RGB_ChSceneF_Function                   ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneF_Function)) & LED_RGB_ChSceneF_FunctionMask) >> LED_RGB_ChSceneF_FunctionShift)
// Ablauf
#define ParamLED_RGB_ChSceneF_Sequence                   ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneF_Sequence)) & LED_RGB_ChSceneF_SequenceMask) >> LED_RGB_ChSceneF_SequenceShift)
// Helligkeit
#define ParamLED_RGB_ChSceneF_Brightness                 (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneF_Brightness)))
// Lichtfarbe RGB
#define ParamLED_RGB_ChSceneF_RGB                        ((knx.paramInt(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneF_RGB)) & LED_RGB_ChSceneF_RGBMask) >> LED_RGB_ChSceneF_RGBShift)
// Hue
#define ParamLED_RGB_ChSceneF_Hue                        (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneF_Hue)))
// Saturation
#define ParamLED_RGB_ChSceneF_Sat                        (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneF_Sat)))
// Typ
#define ParamLED_RGB_ChSceneG_Type                       ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneG_Type)) & LED_RGB_ChSceneG_TypeMask) >> LED_RGB_ChSceneG_TypeShift)
// Typ
#define ParamLED_RGB_ChSceneG_ValueType                  ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneG_ValueType)) & LED_RGB_ChSceneG_ValueTypeMask) >> LED_RGB_ChSceneG_ValueTypeShift)
// Sperrobjekt
#define ParamLED_RGB_ChSceneG_Lockobject                 ((bool)(knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneG_Lockobject)) & LED_RGB_ChSceneG_LockobjectMask))
// Sperren
#define ParamLED_RGB_ChSceneG_LockobjectFunc             (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneG_LockobjectFunc)))
// Speichern
#define ParamLED_RGB_ChSceneG_AllowSave                  ((bool)(knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneG_AllowSave)) & LED_RGB_ChSceneG_AllowSaveMask))
// Typ
#define ParamLED_RGB_ChSceneG_Number                     (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneG_Number)) & LED_RGB_ChSceneG_NumberMask)
// Funktion
#define ParamLED_RGB_ChSceneG_Function                   ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneG_Function)) & LED_RGB_ChSceneG_FunctionMask) >> LED_RGB_ChSceneG_FunctionShift)
// Ablauf
#define ParamLED_RGB_ChSceneG_Sequence                   ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneG_Sequence)) & LED_RGB_ChSceneG_SequenceMask) >> LED_RGB_ChSceneG_SequenceShift)
// Helligkeit
#define ParamLED_RGB_ChSceneG_Brightness                 (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneG_Brightness)))
// Lichtfarbe RGB
#define ParamLED_RGB_ChSceneG_RGB                        ((knx.paramInt(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneG_RGB)) & LED_RGB_ChSceneG_RGBMask) >> LED_RGB_ChSceneG_RGBShift)
// Hue
#define ParamLED_RGB_ChSceneG_Hue                        (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneG_Hue)))
// Saturation
#define ParamLED_RGB_ChSceneG_Sat                        (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneG_Sat)))
// Typ
#define ParamLED_RGB_ChSceneH_Type                       ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneH_Type)) & LED_RGB_ChSceneH_TypeMask) >> LED_RGB_ChSceneH_TypeShift)
// Typ
#define ParamLED_RGB_ChSceneH_ValueType                  ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneH_ValueType)) & LED_RGB_ChSceneH_ValueTypeMask) >> LED_RGB_ChSceneH_ValueTypeShift)
// Sperrobjekt
#define ParamLED_RGB_ChSceneH_Lockobject                 ((bool)(knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneH_Lockobject)) & LED_RGB_ChSceneH_LockobjectMask))
// Sperren
#define ParamLED_RGB_ChSceneH_LockobjectFunc             (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneH_LockobjectFunc)))
// Speichern
#define ParamLED_RGB_ChSceneH_AllowSave                  ((bool)(knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneH_AllowSave)) & LED_RGB_ChSceneH_AllowSaveMask))
// Typ
#define ParamLED_RGB_ChSceneH_Number                     (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneH_Number)) & LED_RGB_ChSceneH_NumberMask)
// Funktion
#define ParamLED_RGB_ChSceneH_Function                   ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneH_Function)) & LED_RGB_ChSceneH_FunctionMask) >> LED_RGB_ChSceneH_FunctionShift)
// Ablauf
#define ParamLED_RGB_ChSceneH_Sequence                   ((knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneH_Sequence)) & LED_RGB_ChSceneH_SequenceMask) >> LED_RGB_ChSceneH_SequenceShift)
// Helligkeit
#define ParamLED_RGB_ChSceneH_Brightness                 (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneH_Brightness)))
// Lichtfarbe RGB
#define ParamLED_RGB_ChSceneH_RGB                        ((knx.paramInt(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneH_RGB)) & LED_RGB_ChSceneH_RGBMask) >> LED_RGB_ChSceneH_RGBShift)
// Hue
#define ParamLED_RGB_ChSceneH_Hue                        (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneH_Hue)))
// Saturation
#define ParamLED_RGB_ChSceneH_Sat                        (knx.paramByte(LED_RGB_ParamCalcIndex(LED_RGB_ChSceneH_Sat)))

// deprecated
#define LED_RGB_KoOffset 305

// Communication objects per channel (multiple occurrence)
#define LED_RGB_KoBlockOffset 305
#define LED_RGB_KoBlockSize 16

#define LED_RGB_KoCalcNumber(index) (index + LED_RGB_KoBlockOffset + _channelIndex * LED_RGB_KoBlockSize)
#define LED_RGB_KoCalcIndex(number) ((number >= LED_RGB_KoCalcNumber(0) && number < LED_RGB_KoCalcNumber(LED_RGB_KoBlockSize)) ? (number - LED_RGB_KoBlockOffset) % LED_RGB_KoBlockSize : -1)
#define LED_RGB_KoCalcChannel(number) ((number >= LED_RGB_KoBlockOffset && number < LED_RGB_KoBlockOffset + LED_RGB_ChannelCount * LED_RGB_KoBlockSize) ? (number - LED_RGB_KoBlockOffset) / LED_RGB_KoBlockSize : -1)

#define LED_RGB_KoChSwitch 0
#define LED_RGB_KoChSwitchNoDim 1
#define LED_RGB_KoChStateOnOff 2
#define LED_RGB_KoChLocking 3
#define LED_RGB_KoChStateLocking 4
#define LED_RGB_KoChBrightness 5
#define LED_RGB_KoChBrightnessRel 6
#define LED_RGB_KoChBrightnessStatus 7
#define LED_RGB_KoChColorTemperature 8
#define LED_RGB_KoChColorTemperatureStatus 9
#define LED_RGB_KoChRGB 10
#define LED_RGB_KoChRGBStatus 11
#define LED_RGB_KoChHSV 12
#define LED_RGB_KoChHSVStatus 13
#define LED_RGB_KoChNight 14
#define LED_RGB_KoChScene 15

// Schalten
#define KoLED_RGB_ChSwitch                            (knx.getGroupObject(LED_RGB_KoCalcNumber(LED_RGB_KoChSwitch)))
// Schalten Sofort
#define KoLED_RGB_ChSwitchNoDim                       (knx.getGroupObject(LED_RGB_KoCalcNumber(LED_RGB_KoChSwitchNoDim)))
// Status Ein/Aus
#define KoLED_RGB_ChStateOnOff                        (knx.getGroupObject(LED_RGB_KoCalcNumber(LED_RGB_KoChStateOnOff)))
// Sperren
#define KoLED_RGB_ChLocking                           (knx.getGroupObject(LED_RGB_KoCalcNumber(LED_RGB_KoChLocking)))
// Sperren Status
#define KoLED_RGB_ChStateLocking                      (knx.getGroupObject(LED_RGB_KoCalcNumber(LED_RGB_KoChStateLocking)))
// Helligkeit
#define KoLED_RGB_ChBrightness                        (knx.getGroupObject(LED_RGB_KoCalcNumber(LED_RGB_KoChBrightness)))
// Helligkeit Relativ
#define KoLED_RGB_ChBrightnessRel                     (knx.getGroupObject(LED_RGB_KoCalcNumber(LED_RGB_KoChBrightnessRel)))
// Helligkeit Status
#define KoLED_RGB_ChBrightnessStatus                  (knx.getGroupObject(LED_RGB_KoCalcNumber(LED_RGB_KoChBrightnessStatus)))
// Farbtemperatur
#define KoLED_RGB_ChColorTemperature                  (knx.getGroupObject(LED_RGB_KoCalcNumber(LED_RGB_KoChColorTemperature)))
// Farbtemperatur Status
#define KoLED_RGB_ChColorTemperatureStatus            (knx.getGroupObject(LED_RGB_KoCalcNumber(LED_RGB_KoChColorTemperatureStatus)))
// RGB
#define KoLED_RGB_ChRGB                               (knx.getGroupObject(LED_RGB_KoCalcNumber(LED_RGB_KoChRGB)))
// RGB Status
#define KoLED_RGB_ChRGBStatus                         (knx.getGroupObject(LED_RGB_KoCalcNumber(LED_RGB_KoChRGBStatus)))
// HSV
#define KoLED_RGB_ChHSV                               (knx.getGroupObject(LED_RGB_KoCalcNumber(LED_RGB_KoChHSV)))
// HSV Status
#define KoLED_RGB_ChHSVStatus                         (knx.getGroupObject(LED_RGB_KoCalcNumber(LED_RGB_KoChHSVStatus)))
// Nacht
#define KoLED_RGB_ChNight                             (knx.getGroupObject(LED_RGB_KoCalcNumber(LED_RGB_KoChNight)))
// Szene
#define KoLED_RGB_ChScene                             (knx.getGroupObject(LED_RGB_KoCalcNumber(LED_RGB_KoChScene)))

#define SWA_VisibleChannels                     2236      // uint8_t

// Verfügbare Kanäle
#define ParamSWA_VisibleChannels                     (knx.paramByte(SWA_VisibleChannels))

#define SWA_KoCentralFunction 385

// Zentralfunktion
#define KoSWA_CentralFunction                     (knx.getGroupObject(SWA_KoCentralFunction))

#define SWA_ChannelCount 1

// Parameter per channel
#define SWA_ParamBlockOffset 2237
#define SWA_ParamBlockSize 74
#define SWA_ParamCalcIndex(index) (index + SWA_ParamBlockOffset + _channelIndex * SWA_ParamBlockSize)

#define SWA_ChActive                             0      // 2 Bits, Bit 7-6
#define     SWA_ChActiveMask 0xC0
#define     SWA_ChActiveShift 6
#define SWA_ChSyncSwitch                         0      // 1 Bit, Bit 5
#define     SWA_ChSyncSwitchMask 0x20
#define     SWA_ChSyncSwitchShift 5
#define SWA_ChOperationMode                      0      // 1 Bit, Bit 4
#define     SWA_ChOperationModeMask 0x10
#define     SWA_ChOperationModeShift 4
#define SWA_ChCentralFunction                    0      // 1 Bit, Bit 3
#define     SWA_ChCentralFunctionMask 0x08
#define     SWA_ChCentralFunctionShift 3
#define SWA_ChStatusSend                         0      // 2 Bits, Bit 2-1
#define     SWA_ChStatusSendMask 0x06
#define     SWA_ChStatusSendShift 1
#define SWA_ChStatusInverted                     0      // 1 Bit, Bit 0
#define     SWA_ChStatusInvertedMask 0x01
#define     SWA_ChStatusInvertedShift 0
#define SWA_ChTurnOnDelayBase                    1      // 2 Bits, Bit 7-6
#define     SWA_ChTurnOnDelayBaseMask 0xC0
#define     SWA_ChTurnOnDelayBaseShift 6
#define SWA_ChTurnOnDelayTime                    1      // 14 Bits, Bit 13-0
#define     SWA_ChTurnOnDelayTimeMask 0x3FFF
#define     SWA_ChTurnOnDelayTimeShift 0
#define SWA_ChTurnOffDelayBase                   3      // 2 Bits, Bit 7-6
#define     SWA_ChTurnOffDelayBaseMask 0xC0
#define     SWA_ChTurnOffDelayBaseShift 6
#define SWA_ChTurnOffDelayTime                   3      // 14 Bits, Bit 13-0
#define     SWA_ChTurnOffDelayTimeMask 0x3FFF
#define     SWA_ChTurnOffDelayTimeShift 0
#define SWA_ChStatusCyclicBase                   5      // 2 Bits, Bit 7-6
#define     SWA_ChStatusCyclicBaseMask 0xC0
#define     SWA_ChStatusCyclicBaseShift 6
#define SWA_ChStatusCyclicTime                   5      // 14 Bits, Bit 13-0
#define     SWA_ChStatusCyclicTimeMask 0x3FFF
#define     SWA_ChStatusCyclicTimeShift 0
#define SWA_ChBehaviorLock                       7      // 2 Bits, Bit 7-6
#define     SWA_ChBehaviorLockMask 0xC0
#define     SWA_ChBehaviorLockShift 6
#define SWA_ChBehaviorUnlock                     7      // 3 Bits, Bit 5-3
#define     SWA_ChBehaviorUnlockMask 0x38
#define     SWA_ChBehaviorUnlockShift 3
#define SWA_ChBehaviorPowerLoss                  8      // 2 Bits, Bit 7-6
#define     SWA_ChBehaviorPowerLossMask 0xC0
#define     SWA_ChBehaviorPowerLossShift 6
#define SWA_ChBehaviorPowerRegain                8      // 2 Bits, Bit 5-4
#define     SWA_ChBehaviorPowerRegainMask 0x30
#define     SWA_ChBehaviorPowerRegainShift 4
#define SWA_ChStairLightActive                   9      // 1 Bit, Bit 7
#define     SWA_ChStairLightActiveMask 0x80
#define     SWA_ChStairLightActiveShift 7
#define SWA_ChScenesActive                       9      // 1 Bit, Bit 6
#define     SWA_ChScenesActiveMask 0x40
#define     SWA_ChScenesActiveShift 6
#define SWA_ChSceneLearn                         9      // 1 Bit, Bit 0
#define     SWA_ChSceneLearnMask 0x01
#define     SWA_ChSceneLearnShift 0
#define SWA_ChStairTimeBase                     10      // 2 Bits, Bit 7-6
#define     SWA_ChStairTimeBaseMask 0xC0
#define     SWA_ChStairTimeBaseShift 6
#define SWA_ChStairTimeTime                     10      // 14 Bits, Bit 13-0
#define     SWA_ChStairTimeTimeMask 0x3FFF
#define     SWA_ChStairTimeTimeShift 0
#define SWA_ChStairRetrigger                    12      // 1 Bit, Bit 7
#define     SWA_ChStairRetriggerMask 0x80
#define     SWA_ChStairRetriggerShift 7
#define SWA_ChStairOff                          12      // 1 Bit, Bit 6
#define     SWA_ChStairOffMask 0x40
#define     SWA_ChStairOffShift 6
#define SWA_ChStairBlinkBase                    13      // 2 Bits, Bit 7-6
#define     SWA_ChStairBlinkBaseMask 0xC0
#define     SWA_ChStairBlinkBaseShift 6
#define SWA_ChStairBlinkTime                    13      // 14 Bits, Bit 13-0
#define     SWA_ChStairBlinkTimeMask 0x3FFF
#define     SWA_ChStairBlinkTimeShift 0
#define SWA_ChSceneAActive                      58      // 1 Bit, Bit 7
#define     SWA_ChSceneAActiveMask 0x80
#define     SWA_ChSceneAActiveShift 7
#define SWA_ChSceneABehavior                    58      // 2 Bits, Bit 6-5
#define     SWA_ChSceneABehaviorMask 0x60
#define     SWA_ChSceneABehaviorShift 5
#define SWA_ChSceneANumber                      59      // 8 Bits, Bit 7-0
#define SWA_ChSceneBActive                      60      // 1 Bit, Bit 7
#define     SWA_ChSceneBActiveMask 0x80
#define     SWA_ChSceneBActiveShift 7
#define SWA_ChSceneBBehavior                    60      // 2 Bits, Bit 6-5
#define     SWA_ChSceneBBehaviorMask 0x60
#define     SWA_ChSceneBBehaviorShift 5
#define SWA_ChSceneBNumber                      61      // 8 Bits, Bit 7-0
#define SWA_ChSceneCActive                      62      // 1 Bit, Bit 7
#define     SWA_ChSceneCActiveMask 0x80
#define     SWA_ChSceneCActiveShift 7
#define SWA_ChSceneCBehavior                    62      // 2 Bits, Bit 6-5
#define     SWA_ChSceneCBehaviorMask 0x60
#define     SWA_ChSceneCBehaviorShift 5
#define SWA_ChSceneCNumber                      63      // 8 Bits, Bit 7-0
#define SWA_ChSceneDActive                      64      // 1 Bit, Bit 7
#define     SWA_ChSceneDActiveMask 0x80
#define     SWA_ChSceneDActiveShift 7
#define SWA_ChSceneDBehavior                    64      // 2 Bits, Bit 6-5
#define     SWA_ChSceneDBehaviorMask 0x60
#define     SWA_ChSceneDBehaviorShift 5
#define SWA_ChSceneDNumber                      65      // 8 Bits, Bit 7-0
#define SWA_ChSceneEActive                      66      // 1 Bit, Bit 7
#define     SWA_ChSceneEActiveMask 0x80
#define     SWA_ChSceneEActiveShift 7
#define SWA_ChSceneEBehavior                    66      // 2 Bits, Bit 6-5
#define     SWA_ChSceneEBehaviorMask 0x60
#define     SWA_ChSceneEBehaviorShift 5
#define SWA_ChSceneENumber                      67      // 8 Bits, Bit 7-0
#define SWA_ChSceneFActive                      68      // 1 Bit, Bit 7
#define     SWA_ChSceneFActiveMask 0x80
#define     SWA_ChSceneFActiveShift 7
#define SWA_ChSceneFBehavior                    68      // 2 Bits, Bit 6-5
#define     SWA_ChSceneFBehaviorMask 0x60
#define     SWA_ChSceneFBehaviorShift 5
#define SWA_ChSceneFNumber                      69      // 8 Bits, Bit 7-0
#define SWA_ChSceneGActive                      70      // 1 Bit, Bit 7
#define     SWA_ChSceneGActiveMask 0x80
#define     SWA_ChSceneGActiveShift 7
#define SWA_ChSceneGBehavior                    70      // 2 Bits, Bit 6-5
#define     SWA_ChSceneGBehaviorMask 0x60
#define     SWA_ChSceneGBehaviorShift 5
#define SWA_ChSceneGNumber                      71      // 8 Bits, Bit 7-0
#define SWA_ChSceneHActive                      72      // 1 Bit, Bit 7
#define     SWA_ChSceneHActiveMask 0x80
#define     SWA_ChSceneHActiveShift 7
#define SWA_ChSceneHBehavior                    72      // 2 Bits, Bit 6-5
#define     SWA_ChSceneHBehaviorMask 0x60
#define     SWA_ChSceneHBehaviorShift 5
#define SWA_ChSceneHNumber                      73      // 8 Bits, Bit 7-0

// Kanalaktivität
#define ParamSWA_ChActive                            ((knx.paramByte(SWA_ParamCalcIndex(SWA_ChActive)) & SWA_ChActiveMask) >> SWA_ChActiveShift)
// Synchron schalten
#define ParamSWA_ChSyncSwitch                        ((bool)(knx.paramByte(SWA_ParamCalcIndex(SWA_ChSyncSwitch)) & SWA_ChSyncSwitchMask))
// Betriebsmodus
#define ParamSWA_ChOperationMode                     ((bool)(knx.paramByte(SWA_ParamCalcIndex(SWA_ChOperationMode)) & SWA_ChOperationModeMask))
// Zentralfunktion
#define ParamSWA_ChCentralFunction                   ((bool)(knx.paramByte(SWA_ParamCalcIndex(SWA_ChCentralFunction)) & SWA_ChCentralFunctionMask))
// Status senden
#define ParamSWA_ChStatusSend                        ((knx.paramByte(SWA_ParamCalcIndex(SWA_ChStatusSend)) & SWA_ChStatusSendMask) >> SWA_ChStatusSendShift)
// Zusätzlicher invertierter Status
#define ParamSWA_ChStatusInverted                    ((bool)(knx.paramByte(SWA_ParamCalcIndex(SWA_ChStatusInverted)) & SWA_ChStatusInvertedMask))
// Zeitbasis
#define ParamSWA_ChTurnOnDelayBase                   ((knx.paramByte(SWA_ParamCalcIndex(SWA_ChTurnOnDelayBase)) & SWA_ChTurnOnDelayBaseMask) >> SWA_ChTurnOnDelayBaseShift)
// Zeit
#define ParamSWA_ChTurnOnDelayTime                   (knx.paramWord(SWA_ParamCalcIndex(SWA_ChTurnOnDelayTime)) & SWA_ChTurnOnDelayTimeMask)
// Zeit (in Millisekunden)
#define ParamSWA_ChTurnOnDelayTimeMS                 (paramDelay(knx.paramWord(SWA_ParamCalcIndex(SWA_ChTurnOnDelayTime))))
// Zeitbasis
#define ParamSWA_ChTurnOffDelayBase                  ((knx.paramByte(SWA_ParamCalcIndex(SWA_ChTurnOffDelayBase)) & SWA_ChTurnOffDelayBaseMask) >> SWA_ChTurnOffDelayBaseShift)
// Zeit
#define ParamSWA_ChTurnOffDelayTime                  (knx.paramWord(SWA_ParamCalcIndex(SWA_ChTurnOffDelayTime)) & SWA_ChTurnOffDelayTimeMask)
// Zeit (in Millisekunden)
#define ParamSWA_ChTurnOffDelayTimeMS                (paramDelay(knx.paramWord(SWA_ParamCalcIndex(SWA_ChTurnOffDelayTime))))
// Zeitbasis
#define ParamSWA_ChStatusCyclicBase                  ((knx.paramByte(SWA_ParamCalcIndex(SWA_ChStatusCyclicBase)) & SWA_ChStatusCyclicBaseMask) >> SWA_ChStatusCyclicBaseShift)
// Zeit
#define ParamSWA_ChStatusCyclicTime                  (knx.paramWord(SWA_ParamCalcIndex(SWA_ChStatusCyclicTime)) & SWA_ChStatusCyclicTimeMask)
// Zeit (in Millisekunden)
#define ParamSWA_ChStatusCyclicTimeMS                (paramDelay(knx.paramWord(SWA_ParamCalcIndex(SWA_ChStatusCyclicTime))))
// bei Sperren
#define ParamSWA_ChBehaviorLock                      ((knx.paramByte(SWA_ParamCalcIndex(SWA_ChBehaviorLock)) & SWA_ChBehaviorLockMask) >> SWA_ChBehaviorLockShift)
// bei Entsperren
#define ParamSWA_ChBehaviorUnlock                    ((knx.paramByte(SWA_ParamCalcIndex(SWA_ChBehaviorUnlock)) & SWA_ChBehaviorUnlockMask) >> SWA_ChBehaviorUnlockShift)
// bei Busspannungsverlust
#define ParamSWA_ChBehaviorPowerLoss                 ((knx.paramByte(SWA_ParamCalcIndex(SWA_ChBehaviorPowerLoss)) & SWA_ChBehaviorPowerLossMask) >> SWA_ChBehaviorPowerLossShift)
// bei Busspannungswiederkehr
#define ParamSWA_ChBehaviorPowerRegain               ((knx.paramByte(SWA_ParamCalcIndex(SWA_ChBehaviorPowerRegain)) & SWA_ChBehaviorPowerRegainMask) >> SWA_ChBehaviorPowerRegainShift)
// Treppenlicht aktivieren
#define ParamSWA_ChStairLightActive                  ((bool)(knx.paramByte(SWA_ParamCalcIndex(SWA_ChStairLightActive)) & SWA_ChStairLightActiveMask))
// Szenen aktivieren
#define ParamSWA_ChScenesActive                      ((bool)(knx.paramByte(SWA_ParamCalcIndex(SWA_ChScenesActive)) & SWA_ChScenesActiveMask))
// Szene lernen
#define ParamSWA_ChSceneLearn                        ((bool)(knx.paramByte(SWA_ParamCalcIndex(SWA_ChSceneLearn)) & SWA_ChSceneLearnMask))
// Zeit für Treppenlicht
#define ParamSWA_ChStairTimeBase                     ((knx.paramByte(SWA_ParamCalcIndex(SWA_ChStairTimeBase)) & SWA_ChStairTimeBaseMask) >> SWA_ChStairTimeBaseShift)
// Zeit für Treppenlicht
#define ParamSWA_ChStairTimeTime                     (knx.paramWord(SWA_ParamCalcIndex(SWA_ChStairTimeTime)) & SWA_ChStairTimeTimeMask)
// Zeit für Treppenlicht (in Millisekunden)
#define ParamSWA_ChStairTimeTimeMS                   (paramDelay(knx.paramWord(SWA_ParamCalcIndex(SWA_ChStairTimeTime))))
// Treppenlicht kann verlängert werden
#define ParamSWA_ChStairRetrigger                    ((bool)(knx.paramByte(SWA_ParamCalcIndex(SWA_ChStairRetrigger)) & SWA_ChStairRetriggerMask))
// Treppenlicht kann ausgeschaltet werden
#define ParamSWA_ChStairOff                          ((bool)(knx.paramByte(SWA_ParamCalcIndex(SWA_ChStairOff)) & SWA_ChStairOffMask))
// Treppenlicht blinkt im Rhythmus
#define ParamSWA_ChStairBlinkBase                    ((knx.paramByte(SWA_ParamCalcIndex(SWA_ChStairBlinkBase)) & SWA_ChStairBlinkBaseMask) >> SWA_ChStairBlinkBaseShift)
// Treppenlicht blinkt im Rhythmus
#define ParamSWA_ChStairBlinkTime                    (knx.paramWord(SWA_ParamCalcIndex(SWA_ChStairBlinkTime)) & SWA_ChStairBlinkTimeMask)
// Treppenlicht blinkt im Rhythmus (in Millisekunden)
#define ParamSWA_ChStairBlinkTimeMS                  (paramDelay(knx.paramWord(SWA_ParamCalcIndex(SWA_ChStairBlinkTime))))
// Szene aktiv
#define ParamSWA_ChSceneAActive                      ((bool)(knx.paramByte(SWA_ParamCalcIndex(SWA_ChSceneAActive)) & SWA_ChSceneAActiveMask))
// Szene Verhalten
#define ParamSWA_ChSceneABehavior                    ((knx.paramByte(SWA_ParamCalcIndex(SWA_ChSceneABehavior)) & SWA_ChSceneABehaviorMask) >> SWA_ChSceneABehaviorShift)
// Szene Nummer
#define ParamSWA_ChSceneANumber                      (knx.paramByte(SWA_ParamCalcIndex(SWA_ChSceneANumber)))
// Szene aktiv
#define ParamSWA_ChSceneBActive                      ((bool)(knx.paramByte(SWA_ParamCalcIndex(SWA_ChSceneBActive)) & SWA_ChSceneBActiveMask))
// Szene Verhalten
#define ParamSWA_ChSceneBBehavior                    ((knx.paramByte(SWA_ParamCalcIndex(SWA_ChSceneBBehavior)) & SWA_ChSceneBBehaviorMask) >> SWA_ChSceneBBehaviorShift)
// Szene Nummer
#define ParamSWA_ChSceneBNumber                      (knx.paramByte(SWA_ParamCalcIndex(SWA_ChSceneBNumber)))
// Szene aktiv
#define ParamSWA_ChSceneCActive                      ((bool)(knx.paramByte(SWA_ParamCalcIndex(SWA_ChSceneCActive)) & SWA_ChSceneCActiveMask))
// Szene Verhalten
#define ParamSWA_ChSceneCBehavior                    ((knx.paramByte(SWA_ParamCalcIndex(SWA_ChSceneCBehavior)) & SWA_ChSceneCBehaviorMask) >> SWA_ChSceneCBehaviorShift)
// Szene Nummer
#define ParamSWA_ChSceneCNumber                      (knx.paramByte(SWA_ParamCalcIndex(SWA_ChSceneCNumber)))
// Szene aktiv
#define ParamSWA_ChSceneDActive                      ((bool)(knx.paramByte(SWA_ParamCalcIndex(SWA_ChSceneDActive)) & SWA_ChSceneDActiveMask))
// Szene Verhalten
#define ParamSWA_ChSceneDBehavior                    ((knx.paramByte(SWA_ParamCalcIndex(SWA_ChSceneDBehavior)) & SWA_ChSceneDBehaviorMask) >> SWA_ChSceneDBehaviorShift)
// Szene Nummer
#define ParamSWA_ChSceneDNumber                      (knx.paramByte(SWA_ParamCalcIndex(SWA_ChSceneDNumber)))
// Szene aktiv
#define ParamSWA_ChSceneEActive                      ((bool)(knx.paramByte(SWA_ParamCalcIndex(SWA_ChSceneEActive)) & SWA_ChSceneEActiveMask))
// Szene Verhalten
#define ParamSWA_ChSceneEBehavior                    ((knx.paramByte(SWA_ParamCalcIndex(SWA_ChSceneEBehavior)) & SWA_ChSceneEBehaviorMask) >> SWA_ChSceneEBehaviorShift)
// Szene Nummer
#define ParamSWA_ChSceneENumber                      (knx.paramByte(SWA_ParamCalcIndex(SWA_ChSceneENumber)))
// Szene aktiv
#define ParamSWA_ChSceneFActive                      ((bool)(knx.paramByte(SWA_ParamCalcIndex(SWA_ChSceneFActive)) & SWA_ChSceneFActiveMask))
// Szene Verhalten
#define ParamSWA_ChSceneFBehavior                    ((knx.paramByte(SWA_ParamCalcIndex(SWA_ChSceneFBehavior)) & SWA_ChSceneFBehaviorMask) >> SWA_ChSceneFBehaviorShift)
// Szene Nummer
#define ParamSWA_ChSceneFNumber                      (knx.paramByte(SWA_ParamCalcIndex(SWA_ChSceneFNumber)))
// Szene aktiv
#define ParamSWA_ChSceneGActive                      ((bool)(knx.paramByte(SWA_ParamCalcIndex(SWA_ChSceneGActive)) & SWA_ChSceneGActiveMask))
// Szene Verhalten
#define ParamSWA_ChSceneGBehavior                    ((knx.paramByte(SWA_ParamCalcIndex(SWA_ChSceneGBehavior)) & SWA_ChSceneGBehaviorMask) >> SWA_ChSceneGBehaviorShift)
// Szene Nummer
#define ParamSWA_ChSceneGNumber                      (knx.paramByte(SWA_ParamCalcIndex(SWA_ChSceneGNumber)))
// Szene aktiv
#define ParamSWA_ChSceneHActive                      ((bool)(knx.paramByte(SWA_ParamCalcIndex(SWA_ChSceneHActive)) & SWA_ChSceneHActiveMask))
// Szene Verhalten
#define ParamSWA_ChSceneHBehavior                    ((knx.paramByte(SWA_ParamCalcIndex(SWA_ChSceneHBehavior)) & SWA_ChSceneHBehaviorMask) >> SWA_ChSceneHBehaviorShift)
// Szene Nummer
#define ParamSWA_ChSceneHNumber                      (knx.paramByte(SWA_ParamCalcIndex(SWA_ChSceneHNumber)))

// deprecated
#define SWA_KoOffset 386

// Communication objects per channel (multiple occurrence)
#define SWA_KoBlockOffset 386
#define SWA_KoBlockSize 6

#define SWA_KoCalcNumber(index) (index + SWA_KoBlockOffset + _channelIndex * SWA_KoBlockSize)
#define SWA_KoCalcIndex(number) ((number >= SWA_KoCalcNumber(0) && number < SWA_KoCalcNumber(SWA_KoBlockSize)) ? (number - SWA_KoBlockOffset) % SWA_KoBlockSize : -1)
#define SWA_KoCalcChannel(number) ((number >= SWA_KoBlockOffset && number < SWA_KoBlockOffset + SWA_ChannelCount * SWA_KoBlockSize) ? (number - SWA_KoBlockOffset) / SWA_KoBlockSize : -1)

#define SWA_KoChSwitch 0
#define SWA_KoChStatus 1
#define SWA_KoChStatusInverted 2
#define SWA_KoChLock 3
#define SWA_KoChLockStatus 4
#define SWA_KoChScene 5

// 
#define KoSWA_ChSwitch                            (knx.getGroupObject(SWA_KoCalcNumber(SWA_KoChSwitch)))
// 
#define KoSWA_ChStatus                            (knx.getGroupObject(SWA_KoCalcNumber(SWA_KoChStatus)))
// 
#define KoSWA_ChStatusInverted                    (knx.getGroupObject(SWA_KoCalcNumber(SWA_KoChStatusInverted)))
// 
#define KoSWA_ChLock                              (knx.getGroupObject(SWA_KoCalcNumber(SWA_KoChLock)))
// 
#define KoSWA_ChLockStatus                        (knx.getGroupObject(SWA_KoCalcNumber(SWA_KoChLockStatus)))
// 
#define KoSWA_ChScene                             (knx.getGroupObject(SWA_KoCalcNumber(SWA_KoChScene)))



#define BI_ChannelCount 4

// Parameter per channel
#define BI_ParamBlockOffset 2311
#define BI_ParamBlockSize 4
#define BI_ParamCalcIndex(index) (index + BI_ParamBlockOffset + _channelIndex * BI_ParamBlockSize)

#define BI_ChannelActive                        0      // 1 Bit, Bit 7
#define     BI_ChannelActiveMask 0x80
#define     BI_ChannelActiveShift 7
#define BI_ChannelOpen                          0      // 2 Bits, Bit 5-4
#define     BI_ChannelOpenMask 0x30
#define     BI_ChannelOpenShift 4
#define BI_ChannelClose                         0      // 2 Bits, Bit 3-2
#define     BI_ChannelCloseMask 0x0C
#define     BI_ChannelCloseShift 2
#define BI_ChannelPeriodic                      0      // 1 Bit, Bit 2
#define     BI_ChannelPeriodicMask 0x04
#define     BI_ChannelPeriodicShift 2
#define BI_ChannelDebouncing                    1      // 8 Bits, Bit 7-0
#define BI_ChannelPeriodicBase                  2      // 2 Bits, Bit 7-6
#define     BI_ChannelPeriodicBaseMask 0xC0
#define     BI_ChannelPeriodicBaseShift 6
#define BI_ChannelPeriodicTime                  2      // 14 Bits, Bit 13-0
#define     BI_ChannelPeriodicTimeMask 0x3FFF
#define     BI_ChannelPeriodicTimeShift 0

// Aktiv
#define ParamBI_ChannelActive                       ((bool)(knx.paramByte(BI_ParamCalcIndex(BI_ChannelActive)) & BI_ChannelActiveMask))
// Geöffnet
#define ParamBI_ChannelOpen                         ((knx.paramByte(BI_ParamCalcIndex(BI_ChannelOpen)) & BI_ChannelOpenMask) >> BI_ChannelOpenShift)
// Geschlossen
#define ParamBI_ChannelClose                        ((knx.paramByte(BI_ParamCalcIndex(BI_ChannelClose)) & BI_ChannelCloseMask) >> BI_ChannelCloseShift)
// Zyklisch senden
#define ParamBI_ChannelPeriodic                     ((bool)(knx.paramByte(BI_ParamCalcIndex(BI_ChannelPeriodic)) & BI_ChannelPeriodicMask))
// Entprellung
#define ParamBI_ChannelDebouncing                   (knx.paramByte(BI_ParamCalcIndex(BI_ChannelDebouncing)))
// Zeitbasis
#define ParamBI_ChannelPeriodicBase                 ((knx.paramByte(BI_ParamCalcIndex(BI_ChannelPeriodicBase)) & BI_ChannelPeriodicBaseMask) >> BI_ChannelPeriodicBaseShift)
// Zeit
#define ParamBI_ChannelPeriodicTime                 (knx.paramWord(BI_ParamCalcIndex(BI_ChannelPeriodicTime)) & BI_ChannelPeriodicTimeMask)
// Zeit (in Millisekunden)
#define ParamBI_ChannelPeriodicTimeMS               (paramDelay(knx.paramWord(BI_ParamCalcIndex(BI_ChannelPeriodicTime))))

// deprecated
#define BI_KoOffset 395

// Communication objects per channel (multiple occurrence)
#define BI_KoBlockOffset 395
#define BI_KoBlockSize 1

#define BI_KoCalcNumber(index) (index + BI_KoBlockOffset + _channelIndex * BI_KoBlockSize)
#define BI_KoCalcIndex(number) ((number >= BI_KoCalcNumber(0) && number < BI_KoCalcNumber(BI_KoBlockSize)) ? (number - BI_KoBlockOffset) % BI_KoBlockSize : -1)
#define BI_KoCalcChannel(number) ((number >= BI_KoBlockOffset && number < BI_KoBlockOffset + BI_ChannelCount * BI_KoBlockSize) ? (number - BI_KoBlockOffset) / BI_KoBlockSize : -1)

#define BI_KoChannelOutput 0

// 
#define KoBI_ChannelOutput                       (knx.getGroupObject(BI_KoCalcNumber(BI_KoChannelOutput)))

#define BTN_ReactionTimeMultiClick              2327      // 8 Bits, Bit 7-0
#define BTN_ReactionTimeLong                    2328      // 8 Bits, Bit 7-0
#define BTN_ReactionTimeExtraLong               2329      // 8 Bits, Bit 7-0
#define BTN_VisibleChannels                     2330      // uint8_t

// Mehrfach-Klick
#define ParamBTN_ReactionTimeMultiClick              (knx.paramByte(BTN_ReactionTimeMultiClick))
// Langer Tastendruck
#define ParamBTN_ReactionTimeLong                    (knx.paramByte(BTN_ReactionTimeLong))
// Extra langer Tastendruck
#define ParamBTN_ReactionTimeExtraLong               (knx.paramByte(BTN_ReactionTimeExtraLong))
// Verfügbare Kanäle
#define ParamBTN_VisibleChannels                     (knx.paramByte(BTN_VisibleChannels))

#define BTN_ChannelCount 10

// Parameter per channel
#define BTN_ParamBlockOffset 2331
#define BTN_ParamBlockSize 53
#define BTN_ParamCalcIndex(index) (index + BTN_ParamBlockOffset + _channelIndex * BTN_ParamBlockSize)

#define BTN_bMode                                0      // 7 Bits, Bit 7-1
#define     BTN_bModeMask 0xFE
#define     BTN_bModeShift 1
#define BTN_bLock                                1      // 2 Bits, Bit 7-6
#define     BTN_bLockMask 0xC0
#define     BTN_bLockShift 6
#define BTN_bMultiClickCount                     1      // 1 Bit, Bit 7
#define     BTN_bMultiClickCountMask 0x80
#define     BTN_bMultiClickCountShift 7
#define BTN_bDynamicStatus                       1      // 1 Bit, Bit 2
#define     BTN_bDynamicStatusMask 0x04
#define     BTN_bDynamicStatusShift 2
#define BTN_bInA                                 2      // 16 Bits, Bit 15-0
#define BTN_bInB                                 4      // 16 Bits, Bit 15-0
#define BTN_bReactionTimeMultiClick              6      // 8 Bits, Bit 7-0
#define BTN_bReactionTimeLong                    7      // 8 Bits, Bit 7-0
#define BTN_bReactionTimeExtraLong               8      // 8 Bits, Bit 7-0
#define BTN_bOutShort_DPT                        9      // 8 Bits, Bit 7-0
#define BTN_bOutLong_DPT                        10      // 8 Bits, Bit 7-0
#define BTN_bOutExtraLong_DPT                   11      // 8 Bits, Bit 7-0
#define BTN_bOutMulti_DPT                       12      // 8 Bits, Bit 7-0
#define BTN_bOutMulti_Click1_Active             13      // 1 Bit, Bit 7
#define     BTN_bOutMulti_Click1_ActiveMask 0x80
#define     BTN_bOutMulti_Click1_ActiveShift 7
#define BTN_bOutMulti_Click2_Active             13      // 1 Bit, Bit 6
#define     BTN_bOutMulti_Click2_ActiveMask 0x40
#define     BTN_bOutMulti_Click2_ActiveShift 6
#define BTN_bOutMulti_Click3_Active             13      // 1 Bit, Bit 5
#define     BTN_bOutMulti_Click3_ActiveMask 0x20
#define     BTN_bOutMulti_Click3_ActiveShift 5
#define BTN_bOutShort_T1_Active_Press           14      // 1 Bit, Bit 7
#define     BTN_bOutShort_T1_Active_PressMask 0x80
#define     BTN_bOutShort_T1_Active_PressShift 7
#define BTN_bOutShort_T1_Active_Release         14      // 1 Bit, Bit 6
#define     BTN_bOutShort_T1_Active_ReleaseMask 0x40
#define     BTN_bOutShort_T1_Active_ReleaseShift 6
#define BTN_bOutShort_T2_Active_Press           14      // 1 Bit, Bit 5
#define     BTN_bOutShort_T2_Active_PressMask 0x20
#define     BTN_bOutShort_T2_Active_PressShift 5
#define BTN_bOutShort_T2_Active_Release         14      // 1 Bit, Bit 4
#define     BTN_bOutShort_T2_Active_ReleaseMask 0x10
#define     BTN_bOutShort_T2_Active_ReleaseShift 4
#define BTN_bOutLong_T1_Active_Press            15      // 1 Bit, Bit 7
#define     BTN_bOutLong_T1_Active_PressMask 0x80
#define     BTN_bOutLong_T1_Active_PressShift 7
#define BTN_bOutLong_T1_Active_Release          15      // 1 Bit, Bit 6
#define     BTN_bOutLong_T1_Active_ReleaseMask 0x40
#define     BTN_bOutLong_T1_Active_ReleaseShift 6
#define BTN_bOutLong_T2_Active_Press            15      // 1 Bit, Bit 5
#define     BTN_bOutLong_T2_Active_PressMask 0x20
#define     BTN_bOutLong_T2_Active_PressShift 5
#define BTN_bOutLong_T2_Active_Release          15      // 1 Bit, Bit 4
#define     BTN_bOutLong_T2_Active_ReleaseMask 0x10
#define     BTN_bOutLong_T2_Active_ReleaseShift 4
#define BTN_bOutExtraLong_T1_Active_Press       16      // 1 Bit, Bit 7
#define     BTN_bOutExtraLong_T1_Active_PressMask 0x80
#define     BTN_bOutExtraLong_T1_Active_PressShift 7
#define BTN_bOutExtraLong_T1_Active_Release     16      // 1 Bit, Bit 6
#define     BTN_bOutExtraLong_T1_Active_ReleaseMask 0x40
#define     BTN_bOutExtraLong_T1_Active_ReleaseShift 6
#define BTN_bOutExtraLong_T2_Active_Press       16      // 1 Bit, Bit 5
#define     BTN_bOutExtraLong_T2_Active_PressMask 0x20
#define     BTN_bOutExtraLong_T2_Active_PressShift 5
#define BTN_bOutExtraLong_T2_Active_Release     16      // 1 Bit, Bit 4
#define     BTN_bOutExtraLong_T2_Active_ReleaseMask 0x10
#define     BTN_bOutExtraLong_T2_Active_ReleaseShift 4
#define BTN_bOutShort_T1_Dpt1_Press             17      // 16 Bits, Bit 15-0
#define BTN_bOutShort_T1_Dpt1_Release           19      // 16 Bits, Bit 15-0
#define BTN_bOutShort_T2_Dpt1_Press             21      // 16 Bits, Bit 15-0
#define BTN_bOutShort_T2_Dpt1_Release           23      // 16 Bits, Bit 15-0
#define BTN_bOutLong_T1_Dpt1_Press              25      // 16 Bits, Bit 15-0
#define BTN_bOutLong_T1_Dpt1_Release            27      // 16 Bits, Bit 15-0
#define BTN_bOutLong_T2_Dpt1_Press              29      // 16 Bits, Bit 15-0
#define BTN_bOutLong_T2_Dpt1_Release            31      // 16 Bits, Bit 15-0
#define BTN_bOutExtraLong_T1_Dpt1_Press         33      // 16 Bits, Bit 15-0
#define BTN_bOutExtraLong_T1_Dpt1_Release       35      // 16 Bits, Bit 15-0
#define BTN_bOutExtraLong_T2_Dpt1_Press         37      // 16 Bits, Bit 15-0
#define BTN_bOutExtraLong_T2_Dpt1_Release       39      // 16 Bits, Bit 15-0
#define BTN_bOutMulti_Click1_Dpt1               41      // 16 Bits, Bit 15-0
#define BTN_bOutMulti_Click2_Dpt1               43      // 16 Bits, Bit 15-0
#define BTN_bOutMulti_Click3_Dpt1               45      // 16 Bits, Bit 15-0
#define BTN_bOutShort_T1_Dpt2_Press             17      // 16 Bits, Bit 15-0
#define BTN_bOutShort_T1_Dpt2_Release           19      // 16 Bits, Bit 15-0
#define BTN_bOutShort_T2_Dpt2_Press             21      // 16 Bits, Bit 15-0
#define BTN_bOutShort_T2_Dpt2_Release           23      // 16 Bits, Bit 15-0
#define BTN_bOutLong_T1_Dpt2_Press              25      // 16 Bits, Bit 15-0
#define BTN_bOutLong_T1_Dpt2_Release            27      // 16 Bits, Bit 15-0
#define BTN_bOutLong_T2_Dpt2_Press              29      // 16 Bits, Bit 15-0
#define BTN_bOutLong_T2_Dpt2_Release            31      // 16 Bits, Bit 15-0
#define BTN_bOutExtraLong_T1_Dpt2_Press         33      // 16 Bits, Bit 15-0
#define BTN_bOutExtraLong_T1_Dpt2_Release       35      // 16 Bits, Bit 15-0
#define BTN_bOutExtraLong_T2_Dpt2_Press         37      // 16 Bits, Bit 15-0
#define BTN_bOutExtraLong_T2_Dpt2_Release       39      // 16 Bits, Bit 15-0
#define BTN_bOutMulti_Click1_Dpt2               41      // 16 Bits, Bit 15-0
#define BTN_bOutMulti_Click2_Dpt2               43      // 16 Bits, Bit 15-0
#define BTN_bOutMulti_Click3_Dpt2               45      // 16 Bits, Bit 15-0
#define BTN_bOutShort_T1_Dpt5_Press             17      // uint16_t
#define BTN_bOutShort_T1_Dpt5_Release           19      // uint16_t
#define BTN_bOutShort_T2_Dpt5_Press             21      // uint16_t
#define BTN_bOutShort_T2_Dpt5_Release           23      // uint16_t
#define BTN_bOutLong_T1_Dpt5_Press              25      // uint16_t
#define BTN_bOutLong_T1_Dpt5_Release            27      // uint16_t
#define BTN_bOutLong_T2_Dpt5_Press              29      // uint16_t
#define BTN_bOutLong_T2_Dpt5_Release            31      // uint16_t
#define BTN_bOutExtraLong_T1_Dpt5_Press         33      // uint16_t
#define BTN_bOutExtraLong_T1_Dpt5_Release       35      // uint16_t
#define BTN_bOutExtraLong_T2_Dpt5_Press         37      // uint16_t
#define BTN_bOutExtraLong_T2_Dpt5_Release       39      // uint16_t
#define BTN_bOutMulti_Click1_Dpt5               41      // uint16_t
#define BTN_bOutMulti_Click2_Dpt5               43      // uint16_t
#define BTN_bOutMulti_Click3_Dpt5               45      // uint16_t
#define BTN_bOutShort_T1_Dpt5001_Press          17      // uint16_t
#define BTN_bOutShort_T1_Dpt5001_Release        19      // uint16_t
#define BTN_bOutShort_T2_Dpt5001_Press          21      // uint16_t
#define BTN_bOutShort_T2_Dpt5001_Release        23      // uint16_t
#define BTN_bOutLong_T1_Dpt5001_Press           25      // uint16_t
#define BTN_bOutLong_T1_Dpt5001_Release         27      // uint16_t
#define BTN_bOutLong_T2_Dpt5001_Press           29      // uint16_t
#define BTN_bOutLong_T2_Dpt5001_Release         31      // uint16_t
#define BTN_bOutExtraLong_T1_Dpt5001_Press      33      // uint16_t
#define BTN_bOutExtraLong_T1_Dpt5001_Release    35      // uint16_t
#define BTN_bOutExtraLong_T2_Dpt5001_Press      37      // uint16_t
#define BTN_bOutExtraLong_T2_Dpt5001_Release    39      // uint16_t
#define BTN_bOutMulti_Click1_Dpt5001            41      // uint16_t
#define BTN_bOutMulti_Click2_Dpt5001            43      // uint16_t
#define BTN_bOutMulti_Click3_Dpt5001            45      // uint16_t
#define BTN_bOutShort_T1_Dpt7_Press             17      // uint16_t
#define BTN_bOutShort_T1_Dpt7_Release           19      // uint16_t
#define BTN_bOutShort_T2_Dpt7_Press             21      // uint16_t
#define BTN_bOutShort_T2_Dpt7_Release           23      // uint16_t
#define BTN_bOutLong_T1_Dpt7_Press              25      // uint16_t
#define BTN_bOutLong_T1_Dpt7_Release            27      // uint16_t
#define BTN_bOutLong_T2_Dpt7_Press              29      // uint16_t
#define BTN_bOutLong_T2_Dpt7_Release            31      // uint16_t
#define BTN_bOutExtraLong_T1_Dpt7_Press         33      // uint16_t
#define BTN_bOutExtraLong_T1_Dpt7_Release       35      // uint16_t
#define BTN_bOutExtraLong_T2_Dpt7_Press         37      // uint16_t
#define BTN_bOutExtraLong_T2_Dpt7_Release       39      // uint16_t
#define BTN_bOutMulti_Click1_Dpt7               41      // uint16_t
#define BTN_bOutMulti_Click2_Dpt7               43      // uint16_t
#define BTN_bOutMulti_Click3_Dpt7               45      // uint16_t
#define BTN_bOutShort_T1_Dpt18_Press            17      // 16 Bits, Bit 15-0
#define BTN_bOutShort_T1_Dpt18_Release          19      // 16 Bits, Bit 15-0
#define BTN_bOutShort_T2_Dpt18_Press            21      // 16 Bits, Bit 15-0
#define BTN_bOutShort_T2_Dpt18_Release          23      // 16 Bits, Bit 15-0
#define BTN_bOutLong_T1_Dpt18_Press             25      // 16 Bits, Bit 15-0
#define BTN_bOutLong_T1_Dpt18_Release           27      // 16 Bits, Bit 15-0
#define BTN_bOutLong_T2_Dpt18_Press             29      // 16 Bits, Bit 15-0
#define BTN_bOutLong_T2_Dpt18_Release           31      // 16 Bits, Bit 15-0
#define BTN_bOutExtraLong_T1_Dpt18_Press        33      // 16 Bits, Bit 15-0
#define BTN_bOutExtraLong_T1_Dpt18_Release      35      // 16 Bits, Bit 15-0
#define BTN_bOutExtraLong_T2_Dpt18_Press        37      // 16 Bits, Bit 15-0
#define BTN_bOutExtraLong_T2_Dpt18_Release      39      // 16 Bits, Bit 15-0
#define BTN_bOutMulti_Click1_Dpt18              41      // 16 Bits, Bit 15-0
#define BTN_bOutMulti_Click2_Dpt18              43      // 16 Bits, Bit 15-0
#define BTN_bOutMulti_Click3_Dpt18              45      // 16 Bits, Bit 15-0
#define BTN_bOutLong_T1_Dpt3007_Press           25      // 16 Bits, Bit 15-0
#define BTN_bOutLong_T1_Dpt3007_PressSingle     25      // 16 Bits, Bit 15-0
#define BTN_bOutLong_T1_Dpt3007_Release         27      // 16 Bits, Bit 15-0
#define BTN_bOutLong_T2_Dpt3007_Press           29      // 16 Bits, Bit 15-0
#define BTN_bOutLong_T2_Dpt3007_Release         31      // 16 Bits, Bit 15-0
#define BTN_bOutLong_T1_Dpt3008_Press           25      // 16 Bits, Bit 15-0
#define BTN_bOutLong_T1_Dpt3008_PressSingle     25      // 16 Bits, Bit 15-0
#define BTN_bOutLong_T1_Dpt3008_Release         27      // 16 Bits, Bit 15-0
#define BTN_bOutLong_T2_Dpt3008_Press           29      // 16 Bits, Bit 15-0
#define BTN_bOutLong_T2_Dpt3008_Release         31      // 16 Bits, Bit 15-0
#define BTN_bOut2Short_T1                       47      // 2 Bits, Bit 7-6
#define     BTN_bOut2Short_T1Mask 0xC0
#define     BTN_bOut2Short_T1Shift 6
#define BTN_bOut2Short_T2                       47      // 2 Bits, Bit 5-4
#define     BTN_bOut2Short_T2Mask 0x30
#define     BTN_bOut2Short_T2Shift 4
#define BTN_bOut2Long_T1                        47      // 2 Bits, Bit 3-2
#define     BTN_bOut2Long_T1Mask 0x0C
#define     BTN_bOut2Long_T1Shift 2
#define BTN_bOut2Long_T2                        47      // 2 Bits, Bit 1-0
#define     BTN_bOut2Long_T2Mask 0x03
#define     BTN_bOut2Long_T2Shift 0
#define BTN_bOut2ExtraLong_T1                   48      // 2 Bits, Bit 7-6
#define     BTN_bOut2ExtraLong_T1Mask 0xC0
#define     BTN_bOut2ExtraLong_T1Shift 6
#define BTN_bOut2ExtraLong_T2                   48      // 2 Bits, Bit 5-4
#define     BTN_bOut2ExtraLong_T2Mask 0x30
#define     BTN_bOut2ExtraLong_T2Shift 4
#define BTN_bStatusFallbackTime                 49      // uint16_t
#define BTN_bStatusThresholdHigh                51      // uint8_t
#define BTN_bStatusThresholdLow                 52      // uint8_t

// Modus
#define ParamBTN_bMode                               ((knx.paramByte(BTN_ParamCalcIndex(BTN_bMode)) & BTN_bModeMask) >> BTN_bModeShift)
// Sperre
#define ParamBTN_bLock                               ((knx.paramByte(BTN_ParamCalcIndex(BTN_bLock)) & BTN_bLockMask) >> BTN_bLockShift)
// Ausgabe der Klickanzahl
#define ParamBTN_bMultiClickCount                    ((bool)(knx.paramByte(BTN_ParamCalcIndex(BTN_bMultiClickCount)) & BTN_bMultiClickCountMask))
// Dynamische Richtung
#define ParamBTN_bDynamicStatus                      ((bool)(knx.paramByte(BTN_ParamCalcIndex(BTN_bDynamicStatus)) & BTN_bDynamicStatusMask))
//    1. Taster
#define ParamBTN_bInA                                (knx.paramWord(BTN_ParamCalcIndex(BTN_bInA)))
//    2. Taster
#define ParamBTN_bInB                                (knx.paramWord(BTN_ParamCalcIndex(BTN_bInB)))
// Mehrfach-Klick
#define ParamBTN_bReactionTimeMultiClick             (knx.paramByte(BTN_ParamCalcIndex(BTN_bReactionTimeMultiClick)))
// Langer Tastendruck
#define ParamBTN_bReactionTimeLong                   (knx.paramByte(BTN_ParamCalcIndex(BTN_bReactionTimeLong)))
// Extra langer Tastendruck
#define ParamBTN_bReactionTimeExtraLong              (knx.paramByte(BTN_ParamCalcIndex(BTN_bReactionTimeExtraLong)))
// Datentyp
#define ParamBTN_bOutShort_DPT                       (knx.paramByte(BTN_ParamCalcIndex(BTN_bOutShort_DPT)))
// Datentyp
#define ParamBTN_bOutLong_DPT                        (knx.paramByte(BTN_ParamCalcIndex(BTN_bOutLong_DPT)))
// Datentyp
#define ParamBTN_bOutExtraLong_DPT                   (knx.paramByte(BTN_ParamCalcIndex(BTN_bOutExtraLong_DPT)))
// Datentyp
#define ParamBTN_bOutMulti_DPT                       (knx.paramByte(BTN_ParamCalcIndex(BTN_bOutMulti_DPT)))
// 1. Klick
#define ParamBTN_bOutMulti_Click1_Active             ((bool)(knx.paramByte(BTN_ParamCalcIndex(BTN_bOutMulti_Click1_Active)) & BTN_bOutMulti_Click1_ActiveMask))
// 2. Klick
#define ParamBTN_bOutMulti_Click2_Active             ((bool)(knx.paramByte(BTN_ParamCalcIndex(BTN_bOutMulti_Click2_Active)) & BTN_bOutMulti_Click2_ActiveMask))
// 3. Klick
#define ParamBTN_bOutMulti_Click3_Active             ((bool)(knx.paramByte(BTN_ParamCalcIndex(BTN_bOutMulti_Click3_Active)) & BTN_bOutMulti_Click3_ActiveMask))
// Wert beim Drücken
#define ParamBTN_bOutShort_T1_Active_Press           ((bool)(knx.paramByte(BTN_ParamCalcIndex(BTN_bOutShort_T1_Active_Press)) & BTN_bOutShort_T1_Active_PressMask))
// Wert beim Loslassen
#define ParamBTN_bOutShort_T1_Active_Release         ((bool)(knx.paramByte(BTN_ParamCalcIndex(BTN_bOutShort_T1_Active_Release)) & BTN_bOutShort_T1_Active_ReleaseMask))
// Wert beim Drücken
#define ParamBTN_bOutShort_T2_Active_Press           ((bool)(knx.paramByte(BTN_ParamCalcIndex(BTN_bOutShort_T2_Active_Press)) & BTN_bOutShort_T2_Active_PressMask))
// Wert beim Loslassen
#define ParamBTN_bOutShort_T2_Active_Release         ((bool)(knx.paramByte(BTN_ParamCalcIndex(BTN_bOutShort_T2_Active_Release)) & BTN_bOutShort_T2_Active_ReleaseMask))
// Wert beim Drücken
#define ParamBTN_bOutLong_T1_Active_Press            ((bool)(knx.paramByte(BTN_ParamCalcIndex(BTN_bOutLong_T1_Active_Press)) & BTN_bOutLong_T1_Active_PressMask))
// Wert beim Loslassen
#define ParamBTN_bOutLong_T1_Active_Release          ((bool)(knx.paramByte(BTN_ParamCalcIndex(BTN_bOutLong_T1_Active_Release)) & BTN_bOutLong_T1_Active_ReleaseMask))
// Wert beim Drücken
#define ParamBTN_bOutLong_T2_Active_Press            ((bool)(knx.paramByte(BTN_ParamCalcIndex(BTN_bOutLong_T2_Active_Press)) & BTN_bOutLong_T2_Active_PressMask))
// Wert beim Loslassen
#define ParamBTN_bOutLong_T2_Active_Release          ((bool)(knx.paramByte(BTN_ParamCalcIndex(BTN_bOutLong_T2_Active_Release)) & BTN_bOutLong_T2_Active_ReleaseMask))
// Wert beim Drücken
#define ParamBTN_bOutExtraLong_T1_Active_Press       ((bool)(knx.paramByte(BTN_ParamCalcIndex(BTN_bOutExtraLong_T1_Active_Press)) & BTN_bOutExtraLong_T1_Active_PressMask))
// Wert beim Loslassen
#define ParamBTN_bOutExtraLong_T1_Active_Release     ((bool)(knx.paramByte(BTN_ParamCalcIndex(BTN_bOutExtraLong_T1_Active_Release)) & BTN_bOutExtraLong_T1_Active_ReleaseMask))
// Wert beim Drücken
#define ParamBTN_bOutExtraLong_T2_Active_Press       ((bool)(knx.paramByte(BTN_ParamCalcIndex(BTN_bOutExtraLong_T2_Active_Press)) & BTN_bOutExtraLong_T2_Active_PressMask))
// Wert beim Loslassen
#define ParamBTN_bOutExtraLong_T2_Active_Release     ((bool)(knx.paramByte(BTN_ParamCalcIndex(BTN_bOutExtraLong_T2_Active_Release)) & BTN_bOutExtraLong_T2_Active_ReleaseMask))
// 
#define ParamBTN_bOutShort_T1_Dpt1_Press             (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutShort_T1_Dpt1_Press)))
// 
#define ParamBTN_bOutShort_T1_Dpt1_Release           (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutShort_T1_Dpt1_Release)))
// 
#define ParamBTN_bOutShort_T2_Dpt1_Press             (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutShort_T2_Dpt1_Press)))
// 
#define ParamBTN_bOutShort_T2_Dpt1_Release           (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutShort_T2_Dpt1_Release)))
// 
#define ParamBTN_bOutLong_T1_Dpt1_Press              (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T1_Dpt1_Press)))
// 
#define ParamBTN_bOutLong_T1_Dpt1_Release            (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T1_Dpt1_Release)))
// 
#define ParamBTN_bOutLong_T2_Dpt1_Press              (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T2_Dpt1_Press)))
// 
#define ParamBTN_bOutLong_T2_Dpt1_Release            (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T2_Dpt1_Release)))
// 
#define ParamBTN_bOutExtraLong_T1_Dpt1_Press         (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutExtraLong_T1_Dpt1_Press)))
// 
#define ParamBTN_bOutExtraLong_T1_Dpt1_Release       (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutExtraLong_T1_Dpt1_Release)))
// 
#define ParamBTN_bOutExtraLong_T2_Dpt1_Press         (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutExtraLong_T2_Dpt1_Press)))
// 
#define ParamBTN_bOutExtraLong_T2_Dpt1_Release       (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutExtraLong_T2_Dpt1_Release)))
// 
#define ParamBTN_bOutMulti_Click1_Dpt1               (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutMulti_Click1_Dpt1)))
// 
#define ParamBTN_bOutMulti_Click2_Dpt1               (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutMulti_Click2_Dpt1)))
// 
#define ParamBTN_bOutMulti_Click3_Dpt1               (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutMulti_Click3_Dpt1)))
// 
#define ParamBTN_bOutShort_T1_Dpt2_Press             (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutShort_T1_Dpt2_Press)))
// 
#define ParamBTN_bOutShort_T1_Dpt2_Release           (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutShort_T1_Dpt2_Release)))
// 
#define ParamBTN_bOutShort_T2_Dpt2_Press             (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutShort_T2_Dpt2_Press)))
// 
#define ParamBTN_bOutShort_T2_Dpt2_Release           (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutShort_T2_Dpt2_Release)))
// 
#define ParamBTN_bOutLong_T1_Dpt2_Press              (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T1_Dpt2_Press)))
// 
#define ParamBTN_bOutLong_T1_Dpt2_Release            (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T1_Dpt2_Release)))
// 
#define ParamBTN_bOutLong_T2_Dpt2_Press              (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T2_Dpt2_Press)))
// 
#define ParamBTN_bOutLong_T2_Dpt2_Release            (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T2_Dpt2_Release)))
// 
#define ParamBTN_bOutExtraLong_T1_Dpt2_Press         (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutExtraLong_T1_Dpt2_Press)))
// 
#define ParamBTN_bOutExtraLong_T1_Dpt2_Release       (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutExtraLong_T1_Dpt2_Release)))
// 
#define ParamBTN_bOutExtraLong_T2_Dpt2_Press         (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutExtraLong_T2_Dpt2_Press)))
// 
#define ParamBTN_bOutExtraLong_T2_Dpt2_Release       (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutExtraLong_T2_Dpt2_Release)))
// 
#define ParamBTN_bOutMulti_Click1_Dpt2               (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutMulti_Click1_Dpt2)))
// 
#define ParamBTN_bOutMulti_Click2_Dpt2               (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutMulti_Click2_Dpt2)))
// 
#define ParamBTN_bOutMulti_Click3_Dpt2               (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutMulti_Click3_Dpt2)))
// 
#define ParamBTN_bOutShort_T1_Dpt5_Press             (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutShort_T1_Dpt5_Press)))
// 
#define ParamBTN_bOutShort_T1_Dpt5_Release           (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutShort_T1_Dpt5_Release)))
// 
#define ParamBTN_bOutShort_T2_Dpt5_Press             (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutShort_T2_Dpt5_Press)))
// 
#define ParamBTN_bOutShort_T2_Dpt5_Release           (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutShort_T2_Dpt5_Release)))
// 
#define ParamBTN_bOutLong_T1_Dpt5_Press              (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T1_Dpt5_Press)))
// 
#define ParamBTN_bOutLong_T1_Dpt5_Release            (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T1_Dpt5_Release)))
// 
#define ParamBTN_bOutLong_T2_Dpt5_Press              (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T2_Dpt5_Press)))
// 
#define ParamBTN_bOutLong_T2_Dpt5_Release            (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T2_Dpt5_Release)))
// 
#define ParamBTN_bOutExtraLong_T1_Dpt5_Press         (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutExtraLong_T1_Dpt5_Press)))
// 
#define ParamBTN_bOutExtraLong_T1_Dpt5_Release       (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutExtraLong_T1_Dpt5_Release)))
// 
#define ParamBTN_bOutExtraLong_T2_Dpt5_Press         (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutExtraLong_T2_Dpt5_Press)))
// 
#define ParamBTN_bOutExtraLong_T2_Dpt5_Release       (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutExtraLong_T2_Dpt5_Release)))
// 
#define ParamBTN_bOutMulti_Click1_Dpt5               (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutMulti_Click1_Dpt5)))
// 
#define ParamBTN_bOutMulti_Click2_Dpt5               (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutMulti_Click2_Dpt5)))
// 
#define ParamBTN_bOutMulti_Click3_Dpt5               (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutMulti_Click3_Dpt5)))
// 
#define ParamBTN_bOutShort_T1_Dpt5001_Press          (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutShort_T1_Dpt5001_Press)))
// 
#define ParamBTN_bOutShort_T1_Dpt5001_Release        (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutShort_T1_Dpt5001_Release)))
// 
#define ParamBTN_bOutShort_T2_Dpt5001_Press          (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutShort_T2_Dpt5001_Press)))
// 
#define ParamBTN_bOutShort_T2_Dpt5001_Release        (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutShort_T2_Dpt5001_Release)))
// 
#define ParamBTN_bOutLong_T1_Dpt5001_Press           (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T1_Dpt5001_Press)))
// 
#define ParamBTN_bOutLong_T1_Dpt5001_Release         (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T1_Dpt5001_Release)))
// 
#define ParamBTN_bOutLong_T2_Dpt5001_Press           (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T2_Dpt5001_Press)))
// 
#define ParamBTN_bOutLong_T2_Dpt5001_Release         (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T2_Dpt5001_Release)))
// 
#define ParamBTN_bOutExtraLong_T1_Dpt5001_Press      (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutExtraLong_T1_Dpt5001_Press)))
// 
#define ParamBTN_bOutExtraLong_T1_Dpt5001_Release    (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutExtraLong_T1_Dpt5001_Release)))
// 
#define ParamBTN_bOutExtraLong_T2_Dpt5001_Press      (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutExtraLong_T2_Dpt5001_Press)))
// 
#define ParamBTN_bOutExtraLong_T2_Dpt5001_Release    (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutExtraLong_T2_Dpt5001_Release)))
// 
#define ParamBTN_bOutMulti_Click1_Dpt5001            (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutMulti_Click1_Dpt5001)))
// 
#define ParamBTN_bOutMulti_Click2_Dpt5001            (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutMulti_Click2_Dpt5001)))
// 
#define ParamBTN_bOutMulti_Click3_Dpt5001            (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutMulti_Click3_Dpt5001)))
// 
#define ParamBTN_bOutShort_T1_Dpt7_Press             (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutShort_T1_Dpt7_Press)))
// 
#define ParamBTN_bOutShort_T1_Dpt7_Release           (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutShort_T1_Dpt7_Release)))
// 
#define ParamBTN_bOutShort_T2_Dpt7_Press             (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutShort_T2_Dpt7_Press)))
// 
#define ParamBTN_bOutShort_T2_Dpt7_Release           (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutShort_T2_Dpt7_Release)))
// 
#define ParamBTN_bOutLong_T1_Dpt7_Press              (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T1_Dpt7_Press)))
// 
#define ParamBTN_bOutLong_T1_Dpt7_Release            (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T1_Dpt7_Release)))
// 
#define ParamBTN_bOutLong_T2_Dpt7_Press              (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T2_Dpt7_Press)))
// 
#define ParamBTN_bOutLong_T2_Dpt7_Release            (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T2_Dpt7_Release)))
// 
#define ParamBTN_bOutExtraLong_T1_Dpt7_Press         (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutExtraLong_T1_Dpt7_Press)))
// 
#define ParamBTN_bOutExtraLong_T1_Dpt7_Release       (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutExtraLong_T1_Dpt7_Release)))
// 
#define ParamBTN_bOutExtraLong_T2_Dpt7_Press         (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutExtraLong_T2_Dpt7_Press)))
// 
#define ParamBTN_bOutExtraLong_T2_Dpt7_Release       (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutExtraLong_T2_Dpt7_Release)))
// 
#define ParamBTN_bOutMulti_Click1_Dpt7               (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutMulti_Click1_Dpt7)))
// 
#define ParamBTN_bOutMulti_Click2_Dpt7               (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutMulti_Click2_Dpt7)))
// 
#define ParamBTN_bOutMulti_Click3_Dpt7               (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutMulti_Click3_Dpt7)))
// 
#define ParamBTN_bOutShort_T1_Dpt18_Press            (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutShort_T1_Dpt18_Press)))
// 
#define ParamBTN_bOutShort_T1_Dpt18_Release          (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutShort_T1_Dpt18_Release)))
// 
#define ParamBTN_bOutShort_T2_Dpt18_Press            (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutShort_T2_Dpt18_Press)))
// 
#define ParamBTN_bOutShort_T2_Dpt18_Release          (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutShort_T2_Dpt18_Release)))
// 
#define ParamBTN_bOutLong_T1_Dpt18_Press             (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T1_Dpt18_Press)))
// 
#define ParamBTN_bOutLong_T1_Dpt18_Release           (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T1_Dpt18_Release)))
// 
#define ParamBTN_bOutLong_T2_Dpt18_Press             (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T2_Dpt18_Press)))
// 
#define ParamBTN_bOutLong_T2_Dpt18_Release           (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T2_Dpt18_Release)))
// 
#define ParamBTN_bOutExtraLong_T1_Dpt18_Press        (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutExtraLong_T1_Dpt18_Press)))
// 
#define ParamBTN_bOutExtraLong_T1_Dpt18_Release      (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutExtraLong_T1_Dpt18_Release)))
// 
#define ParamBTN_bOutExtraLong_T2_Dpt18_Press        (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutExtraLong_T2_Dpt18_Press)))
// 
#define ParamBTN_bOutExtraLong_T2_Dpt18_Release      (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutExtraLong_T2_Dpt18_Release)))
// 
#define ParamBTN_bOutMulti_Click1_Dpt18              (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutMulti_Click1_Dpt18)))
// 
#define ParamBTN_bOutMulti_Click2_Dpt18              (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutMulti_Click2_Dpt18)))
// 
#define ParamBTN_bOutMulti_Click3_Dpt18              (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutMulti_Click3_Dpt18)))
// Wert beim Drücken
#define ParamBTN_bOutLong_T1_Dpt3007_Press           (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T1_Dpt3007_Press)))
// Wert beim Drücken
#define ParamBTN_bOutLong_T1_Dpt3007_PressSingle     (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T1_Dpt3007_PressSingle)))
// 
#define ParamBTN_bOutLong_T1_Dpt3007_Release         (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T1_Dpt3007_Release)))
// Wert beim Drücken
#define ParamBTN_bOutLong_T2_Dpt3007_Press           (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T2_Dpt3007_Press)))
// 
#define ParamBTN_bOutLong_T2_Dpt3007_Release         (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T2_Dpt3007_Release)))
// Wert beim Drücken
#define ParamBTN_bOutLong_T1_Dpt3008_Press           (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T1_Dpt3008_Press)))
// Wert beim Drücken
#define ParamBTN_bOutLong_T1_Dpt3008_PressSingle     (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T1_Dpt3008_PressSingle)))
// 
#define ParamBTN_bOutLong_T1_Dpt3008_Release         (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T1_Dpt3008_Release)))
// Wert beim Drücken
#define ParamBTN_bOutLong_T2_Dpt3008_Press           (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T2_Dpt3008_Press)))
// 
#define ParamBTN_bOutLong_T2_Dpt3008_Release         (knx.paramWord(BTN_ParamCalcIndex(BTN_bOutLong_T2_Dpt3008_Release)))
// Zusatzausgang (DPT1 beim Loslassen)
#define ParamBTN_bOut2Short_T1                       ((knx.paramByte(BTN_ParamCalcIndex(BTN_bOut2Short_T1)) & BTN_bOut2Short_T1Mask) >> BTN_bOut2Short_T1Shift)
// Zusatzausgang (DPT1 beim Loslassen)
#define ParamBTN_bOut2Short_T2                       ((knx.paramByte(BTN_ParamCalcIndex(BTN_bOut2Short_T2)) & BTN_bOut2Short_T2Mask) >> BTN_bOut2Short_T2Shift)
// Zusatzausgang (DPT1 beim Loslassen)
#define ParamBTN_bOut2Long_T1                        ((knx.paramByte(BTN_ParamCalcIndex(BTN_bOut2Long_T1)) & BTN_bOut2Long_T1Mask) >> BTN_bOut2Long_T1Shift)
// Zusatzausgang (DPT1 beim Loslassen)
#define ParamBTN_bOut2Long_T2                        (knx.paramByte(BTN_ParamCalcIndex(BTN_bOut2Long_T2)) & BTN_bOut2Long_T2Mask)
// Zusatzausgang (DPT1 beim Loslassen)
#define ParamBTN_bOut2ExtraLong_T1                   ((knx.paramByte(BTN_ParamCalcIndex(BTN_bOut2ExtraLong_T1)) & BTN_bOut2ExtraLong_T1Mask) >> BTN_bOut2ExtraLong_T1Shift)
// Zusatzausgang (DPT1 beim Loslassen)
#define ParamBTN_bOut2ExtraLong_T2                   ((knx.paramByte(BTN_ParamCalcIndex(BTN_bOut2ExtraLong_T2)) & BTN_bOut2ExtraLong_T2Mask) >> BTN_bOut2ExtraLong_T2Shift)
// Verzögerung
#define ParamBTN_bStatusFallbackTime                 (knx.paramWord(BTN_ParamCalcIndex(BTN_bStatusFallbackTime)))
// Oberer Schwellwert
#define ParamBTN_bStatusThresholdHigh                (knx.paramByte(BTN_ParamCalcIndex(BTN_bStatusThresholdHigh)))
// Unterer Schwellwert
#define ParamBTN_bStatusThresholdLow                 (knx.paramByte(BTN_ParamCalcIndex(BTN_bStatusThresholdLow)))

// deprecated
#define BTN_KoOffset 400

// Communication objects per channel (multiple occurrence)
#define BTN_KoBlockOffset 400
#define BTN_KoBlockSize 12

#define BTN_KoCalcNumber(index) (index + BTN_KoBlockOffset + _channelIndex * BTN_KoBlockSize)
#define BTN_KoCalcIndex(number) ((number >= BTN_KoCalcNumber(0) && number < BTN_KoCalcNumber(BTN_KoBlockSize)) ? (number - BTN_KoBlockOffset) % BTN_KoBlockSize : -1)
#define BTN_KoCalcChannel(number) ((number >= BTN_KoBlockOffset && number < BTN_KoBlockOffset + BTN_ChannelCount * BTN_KoBlockSize) ? (number - BTN_KoBlockOffset) / BTN_KoBlockSize : -1)

#define BTN_KoLock 0
#define BTN_KoIn1 1
#define BTN_KoIn2 2
#define BTN_KoOut1Status 3
#define BTN_KoOut2Status 4
#define BTN_KoOut3Status 5
#define BTN_KoOut1 6
#define BTN_KoOut2 7
#define BTN_KoOut3 8
#define BTN_KoOut4 9
#define BTN_KoOut5 10
#define BTN_KoOut6 11

// 
#define KoBTN_Lock                                (knx.getGroupObject(BTN_KoCalcNumber(BTN_KoLock)))
// 
#define KoBTN_In1                                 (knx.getGroupObject(BTN_KoCalcNumber(BTN_KoIn1)))
// 
#define KoBTN_In2                                 (knx.getGroupObject(BTN_KoCalcNumber(BTN_KoIn2)))
// 
#define KoBTN_Out1Status                          (knx.getGroupObject(BTN_KoCalcNumber(BTN_KoOut1Status)))
// 
#define KoBTN_Out2Status                          (knx.getGroupObject(BTN_KoCalcNumber(BTN_KoOut2Status)))
// 
#define KoBTN_Out3Status                          (knx.getGroupObject(BTN_KoCalcNumber(BTN_KoOut3Status)))
// 
#define KoBTN_Out1                                (knx.getGroupObject(BTN_KoCalcNumber(BTN_KoOut1)))
// 
#define KoBTN_Out2                                (knx.getGroupObject(BTN_KoCalcNumber(BTN_KoOut2)))
// 
#define KoBTN_Out3                                (knx.getGroupObject(BTN_KoCalcNumber(BTN_KoOut3)))
// 
#define KoBTN_Out4                                (knx.getGroupObject(BTN_KoCalcNumber(BTN_KoOut4)))
// 
#define KoBTN_Out5                                (knx.getGroupObject(BTN_KoCalcNumber(BTN_KoOut5)))
// 
#define KoBTN_Out6                                (knx.getGroupObject(BTN_KoCalcNumber(BTN_KoOut6)))

#define SENS_Error                               2861      // 1 Bit, Bit 7
#define     SENS_ErrorMask 0x80
#define     SENS_ErrorShift 7
#define SENS_Dewpoint                            2861      // 1 Bit, Bit 6
#define     SENS_DewpointMask 0x40
#define     SENS_DewpointShift 6
#define SENS_Comfort                             2861      // 1 Bit, Bit 5
#define     SENS_ComfortMask 0x20
#define     SENS_ComfortShift 5
#define SENS_Airquality                          2861      // 1 Bit, Bit 4
#define     SENS_AirqualityMask 0x10
#define     SENS_AirqualityShift 4
#define SENS_Accuracy                            2861      // 1 Bit, Bit 3
#define     SENS_AccuracyMask 0x08
#define     SENS_AccuracyShift 3
#define SENS_DeleteData                          2861      // 1 Bit, Bit 2
#define     SENS_DeleteDataMask 0x04
#define     SENS_DeleteDataShift 2
#define SENS_TempOffset                          2862      // int8_t
#define SENS_TempCycleBase                       2863      // 2 Bits, Bit 7-6
#define     SENS_TempCycleBaseMask 0xC0
#define     SENS_TempCycleBaseShift 6
#define SENS_TempCycleTime                       2863      // 14 Bits, Bit 13-0
#define     SENS_TempCycleTimeMask 0x3FFF
#define     SENS_TempCycleTimeShift 0
#define SENS_TempDeltaAbs                        2865      // uint16_t
#define SENS_TempDeltaPercent                    2867      // uint8_t
#define SENS_TempSmooth                          2868      // uint8_t
#define SENS_TempExtCount                        2869      // 2 Bits, Bit 1-0
#define     SENS_TempExtCountMask 0x03
#define     SENS_TempExtCountShift 0
#define SENS_TempExtRead                         2869      // 1 Bit, Bit 2
#define     SENS_TempExtReadMask 0x04
#define     SENS_TempExtReadShift 2
#define SENS_TempIntPercent                      2870      // uint8_t
#define SENS_TempExt1Percent                     2871      // uint8_t
#define SENS_TempExt2Percent                     2872      // uint8_t
#define SENS_HumOffset                           2873      // int8_t
#define SENS_HumCycleBase                        2874      // 2 Bits, Bit 7-6
#define     SENS_HumCycleBaseMask 0xC0
#define     SENS_HumCycleBaseShift 6
#define SENS_HumCycleTime                        2874      // 14 Bits, Bit 13-0
#define     SENS_HumCycleTimeMask 0x3FFF
#define     SENS_HumCycleTimeShift 0
#define SENS_HumDeltaAbs                         2876      // uint16_t
#define SENS_HumDeltaPercent                     2878      // uint8_t
#define SENS_HumSmooth                           2879      // uint8_t
#define SENS_HumExtCount                         2880      // 2 Bits, Bit 1-0
#define     SENS_HumExtCountMask 0x03
#define     SENS_HumExtCountShift 0
#define SENS_HumExtRead                          2880      // 1 Bit, Bit 2
#define     SENS_HumExtReadMask 0x04
#define     SENS_HumExtReadShift 2
#define SENS_HumIntPercent                       2881      // uint8_t
#define SENS_HumExt1Percent                      2882      // uint8_t
#define SENS_HumExt2Percent                      2883      // uint8_t
#define SENS_PreOffset                           2884      // int8_t
#define SENS_PreCycleBase                        2885      // 2 Bits, Bit 7-6
#define     SENS_PreCycleBaseMask 0xC0
#define     SENS_PreCycleBaseShift 6
#define SENS_PreCycleTime                        2885      // 14 Bits, Bit 13-0
#define     SENS_PreCycleTimeMask 0x3FFF
#define     SENS_PreCycleTimeShift 0
#define SENS_PreDeltaAbs                         2887      // uint16_t
#define SENS_PreDeltaPercent                     2889      // uint8_t
#define SENS_PreSmooth                           2890      // uint8_t
#define SENS_PreExtCount                         2891      // 2 Bits, Bit 1-0
#define     SENS_PreExtCountMask 0x03
#define     SENS_PreExtCountShift 0
#define SENS_PreExtRead                          2891      // 1 Bit, Bit 2
#define     SENS_PreExtReadMask 0x04
#define     SENS_PreExtReadShift 2
#define SENS_PreIntPercent                       2892      // uint8_t
#define SENS_PreExt1Percent                      2893      // uint8_t
#define SENS_PreExt2Percent                      2894      // uint8_t
#define SENS_VocOffset                           2895      // int8_t
#define SENS_VocCycleBase                        2896      // 2 Bits, Bit 7-6
#define     SENS_VocCycleBaseMask 0xC0
#define     SENS_VocCycleBaseShift 6
#define SENS_VocCycleTime                        2896      // 14 Bits, Bit 13-0
#define     SENS_VocCycleTimeMask 0x3FFF
#define     SENS_VocCycleTimeShift 0
#define SENS_VocDeltaAbs                         2898      // uint16_t
#define SENS_VocDeltaPercent                     2900      // uint8_t
#define SENS_VocSmooth                           2901      // uint8_t
#define SENS_VocExtCount                         2902      // 2 Bits, Bit 1-0
#define     SENS_VocExtCountMask 0x03
#define     SENS_VocExtCountShift 0
#define SENS_VocExtRead                          2902      // 1 Bit, Bit 2
#define     SENS_VocExtReadMask 0x04
#define     SENS_VocExtReadShift 2
#define SENS_VocIntPercent                       2903      // uint8_t
#define SENS_VocExt1Percent                      2904      // uint8_t
#define SENS_VocExt2Percent                      2905      // uint8_t
#define SENS_Co2Offset                           2906      // int8_t
#define SENS_Co2CycleBase                        2907      // 2 Bits, Bit 7-6
#define     SENS_Co2CycleBaseMask 0xC0
#define     SENS_Co2CycleBaseShift 6
#define SENS_Co2CycleTime                        2907      // 14 Bits, Bit 13-0
#define     SENS_Co2CycleTimeMask 0x3FFF
#define     SENS_Co2CycleTimeShift 0
#define SENS_Co2DeltaAbs                         2909      // uint16_t
#define SENS_Co2DeltaPercent                     2911      // uint8_t
#define SENS_Co2Smooth                           2912      // uint8_t
#define SENS_Co2ExtCount                         2913      // 2 Bits, Bit 1-0
#define     SENS_Co2ExtCountMask 0x03
#define     SENS_Co2ExtCountShift 0
#define SENS_Co2ExtRead                          2913      // 1 Bit, Bit 2
#define     SENS_Co2ExtReadMask 0x04
#define     SENS_Co2ExtReadShift 2
#define SENS_Co2IntPercent                       2914      // uint8_t
#define SENS_Co2Ext1Percent                      2915      // uint8_t
#define SENS_Co2Ext2Percent                      2916      // uint8_t
#define SENS_DewOffset                           2918      // int8_t
#define SENS_DewCycleBase                        2919      // 2 Bits, Bit 7-6
#define     SENS_DewCycleBaseMask 0xC0
#define     SENS_DewCycleBaseShift 6
#define SENS_DewCycleTime                        2919      // 14 Bits, Bit 13-0
#define     SENS_DewCycleTimeMask 0x3FFF
#define     SENS_DewCycleTimeShift 0
#define SENS_DewDeltaAbs                         2921      // uint16_t
#define SENS_DewDeltaPercent                     2923      // uint8_t
#define SENS_DewSmooth                           2924      // uint8_t
#define SENS_LuxOffset                           2925      // int8_t
#define SENS_LuxCycleBase                        2926      // 2 Bits, Bit 7-6
#define     SENS_LuxCycleBaseMask 0xC0
#define     SENS_LuxCycleBaseShift 6
#define SENS_LuxCycleTime                        2926      // 14 Bits, Bit 13-0
#define     SENS_LuxCycleTimeMask 0x3FFF
#define     SENS_LuxCycleTimeShift 0
#define SENS_LuxDeltaAbs                         2928      // uint16_t
#define SENS_LuxDeltaPercent                     2930      // uint8_t
#define SENS_LuxSmooth                           2931      // uint8_t
#define SENS_LuxExtCount                         2932      // 2 Bits, Bit 1-0
#define     SENS_LuxExtCountMask 0x03
#define     SENS_LuxExtCountShift 0
#define SENS_LuxExtRead                          2932      // 1 Bit, Bit 2
#define     SENS_LuxExtReadMask 0x04
#define     SENS_LuxExtReadShift 2
#define SENS_LuxIntPercent                       2933      // uint8_t
#define SENS_LuxExt1Percent                      2934      // uint8_t
#define SENS_LuxExt2Percent                      2935      // uint8_t
#define SENS_TofOffset                           2936      // int8_t
#define SENS_TofCycleBase                        2937      // 2 Bits, Bit 7-6
#define     SENS_TofCycleBaseMask 0xC0
#define     SENS_TofCycleBaseShift 6
#define SENS_TofCycleTime                        2937      // 14 Bits, Bit 13-0
#define     SENS_TofCycleTimeMask 0x3FFF
#define     SENS_TofCycleTimeShift 0
#define SENS_TofDeltaAbs                         2939      // uint16_t
#define SENS_TofDeltaPercent                     2941      // uint8_t
#define SENS_TofSmooth                           2942      // uint8_t
#define SENS_TofExtCount                         2943      // 2 Bits, Bit 1-0
#define     SENS_TofExtCountMask 0x03
#define     SENS_TofExtCountShift 0
#define SENS_TofExtRead                          2943      // 1 Bit, Bit 2
#define     SENS_TofExtReadMask 0x04
#define     SENS_TofExtReadShift 2
#define SENS_TofIntPercent                       2944      // uint8_t
#define SENS_TofExt1Percent                      2945      // uint8_t
#define SENS_TofExt2Percent                      2946      // uint8_t
#define SENS_TempSensor                          2947      // 4 Bits, Bit 7-4
#define     SENS_TempSensorMask 0xF0
#define     SENS_TempSensorShift 4
#define SENS_HumSensor                           2947      // 4 Bits, Bit 3-0
#define     SENS_HumSensorMask 0x0F
#define     SENS_HumSensorShift 0
#define SENS_PreSensor                           2948      // 4 Bits, Bit 7-4
#define     SENS_PreSensorMask 0xF0
#define     SENS_PreSensorShift 4
#define SENS_VocSensor                           2948      // 4 Bits, Bit 3-0
#define     SENS_VocSensorMask 0x0F
#define     SENS_VocSensorShift 0
#define SENS_Co2Sensor                           2949      // 4 Bits, Bit 7-4
#define     SENS_Co2SensorMask 0xF0
#define     SENS_Co2SensorShift 4
#define SENS_LuxSensor                           2949      // 4 Bits, Bit 3-0
#define     SENS_LuxSensorMask 0x0F
#define     SENS_LuxSensorShift 0
#define SENS_TofSensor                           2950      // 4 Bits, Bit 7-4
#define     SENS_TofSensorMask 0xF0
#define     SENS_TofSensorShift 4
#define SENS_SCD41MeasureIntervalDelayBase       2951      // 2 Bits, Bit 7-6
#define     SENS_SCD41MeasureIntervalDelayBaseMask 0xC0
#define     SENS_SCD41MeasureIntervalDelayBaseShift 6
#define SENS_SCD41MeasureIntervalDelayTime       2951      // 14 Bits, Bit 13-0
#define     SENS_SCD41MeasureIntervalDelayTimeMask 0x3FFF
#define     SENS_SCD41MeasureIntervalDelayTimeShift 0

// Fehlerobjekt für Standardmesswerte anzeigen
#define ParamSENS_Error                               ((bool)(knx.paramByte(SENS_Error) & SENS_ErrorMask))
// Taupunkt berechnen
#define ParamSENS_Dewpoint                            ((bool)(knx.paramByte(SENS_Dewpoint) & SENS_DewpointMask))
// Behaglichkeitszone ausgeben
#define ParamSENS_Comfort                             ((bool)(knx.paramByte(SENS_Comfort) & SENS_ComfortMask))
// Luftqualitätsampel ausgeben
#define ParamSENS_Airquality                          ((bool)(knx.paramByte(SENS_Airquality) & SENS_AirqualityMask))
// Kalibrierungsfortschritt ausgeben
#define ParamSENS_Accuracy                            ((bool)(knx.paramByte(SENS_Accuracy) & SENS_AccuracyMask))
// Kalibrierungsdaten löschen
#define ParamSENS_DeleteData                          ((bool)(knx.paramByte(SENS_DeleteData) & SENS_DeleteDataMask))
// Temperatur anpassen (interner Messwert)
#define ParamSENS_TempOffset                          ((int8_t)knx.paramByte(SENS_TempOffset))
// Zeitbasis
#define ParamSENS_TempCycleBase                       ((knx.paramByte(SENS_TempCycleBase) & SENS_TempCycleBaseMask) >> SENS_TempCycleBaseShift)
// Zeit
#define ParamSENS_TempCycleTime                       (knx.paramWord(SENS_TempCycleTime) & SENS_TempCycleTimeMask)
// Zeit (in Millisekunden)
#define ParamSENS_TempCycleTimeMS                     (paramDelay(knx.paramWord(SENS_TempCycleTime)))
// Temperatur bei absoluter Abweichung senden(0=nicht senden)
#define ParamSENS_TempDeltaAbs                        (knx.paramWord(SENS_TempDeltaAbs))
// Temperatur bei Abweichung vom vorherigen Wert senden(0=nicht senden)
#define ParamSENS_TempDeltaPercent                    (knx.paramByte(SENS_TempDeltaPercent))
// Temperatur glätten: P =
#define ParamSENS_TempSmooth                          (knx.paramByte(SENS_TempSmooth))
// Externe Messwerte berücksichtigen
#define ParamSENS_TempExtCount                        (knx.paramByte(SENS_TempExtCount) & SENS_TempExtCountMask)
//     Externe Messwerte beim Start lesen
#define ParamSENS_TempExtRead                         ((bool)(knx.paramByte(SENS_TempExtRead) & SENS_TempExtReadMask))
//     Anteil interner Messwert
#define ParamSENS_TempIntPercent                      (knx.paramByte(SENS_TempIntPercent))
//     Anteil externer Messwert 1
#define ParamSENS_TempExt1Percent                     (knx.paramByte(SENS_TempExt1Percent))
//     Anteil externer Messwert 2
#define ParamSENS_TempExt2Percent                     (knx.paramByte(SENS_TempExt2Percent))
// Luftfeuchte anpassen (interner Messwert)
#define ParamSENS_HumOffset                           ((int8_t)knx.paramByte(SENS_HumOffset))
// Zeitbasis
#define ParamSENS_HumCycleBase                        ((knx.paramByte(SENS_HumCycleBase) & SENS_HumCycleBaseMask) >> SENS_HumCycleBaseShift)
// Zeit
#define ParamSENS_HumCycleTime                        (knx.paramWord(SENS_HumCycleTime) & SENS_HumCycleTimeMask)
// Zeit (in Millisekunden)
#define ParamSENS_HumCycleTimeMS                      (paramDelay(knx.paramWord(SENS_HumCycleTime)))
// Luftfeuchte bei absoluter Abweichung senden(0=nicht senden)
#define ParamSENS_HumDeltaAbs                         (knx.paramWord(SENS_HumDeltaAbs))
// Luftfeuchte bei Abweichung vom vorherigen Wert senden(0=nicht senden)
#define ParamSENS_HumDeltaPercent                     (knx.paramByte(SENS_HumDeltaPercent))
// Luftfeuchte glätten: P =
#define ParamSENS_HumSmooth                           (knx.paramByte(SENS_HumSmooth))
// Externe Messwerte berücksichtigen
#define ParamSENS_HumExtCount                         (knx.paramByte(SENS_HumExtCount) & SENS_HumExtCountMask)
//     Externe Messwerte beim Start lesen
#define ParamSENS_HumExtRead                          ((bool)(knx.paramByte(SENS_HumExtRead) & SENS_HumExtReadMask))
//     Anteil interner Messwert
#define ParamSENS_HumIntPercent                       (knx.paramByte(SENS_HumIntPercent))
//     Anteil externer Messwert 1
#define ParamSENS_HumExt1Percent                      (knx.paramByte(SENS_HumExt1Percent))
//     Anteil externer Messwert 2
#define ParamSENS_HumExt2Percent                      (knx.paramByte(SENS_HumExt2Percent))
// Luftdruck anpassen (interner Messwert)
#define ParamSENS_PreOffset                           ((int8_t)knx.paramByte(SENS_PreOffset))
// Zeitbasis
#define ParamSENS_PreCycleBase                        ((knx.paramByte(SENS_PreCycleBase) & SENS_PreCycleBaseMask) >> SENS_PreCycleBaseShift)
// Zeit
#define ParamSENS_PreCycleTime                        (knx.paramWord(SENS_PreCycleTime) & SENS_PreCycleTimeMask)
// Zeit (in Millisekunden)
#define ParamSENS_PreCycleTimeMS                      (paramDelay(knx.paramWord(SENS_PreCycleTime)))
// Luftdruck bei absoluter Abweichung senden(0=nicht senden)
#define ParamSENS_PreDeltaAbs                         (knx.paramWord(SENS_PreDeltaAbs))
// Luftdruck bei Abweichung vom vorherigen Wert senden(0=nicht senden)
#define ParamSENS_PreDeltaPercent                     (knx.paramByte(SENS_PreDeltaPercent))
// Luftdruck glätten: P =
#define ParamSENS_PreSmooth                           (knx.paramByte(SENS_PreSmooth))
// Externe Messwerte berücksichtigen
#define ParamSENS_PreExtCount                         (knx.paramByte(SENS_PreExtCount) & SENS_PreExtCountMask)
//     Externe Messwerte beim Start lesen
#define ParamSENS_PreExtRead                          ((bool)(knx.paramByte(SENS_PreExtRead) & SENS_PreExtReadMask))
//     Anteil interner Messwert
#define ParamSENS_PreIntPercent                       (knx.paramByte(SENS_PreIntPercent))
//     Anteil externer Messwert 1
#define ParamSENS_PreExt1Percent                      (knx.paramByte(SENS_PreExt1Percent))
//     Anteil externer Messwert 2
#define ParamSENS_PreExt2Percent                      (knx.paramByte(SENS_PreExt2Percent))
// VOC anpassen (interner Messwert)
#define ParamSENS_VocOffset                           ((int8_t)knx.paramByte(SENS_VocOffset))
// Zeitbasis
#define ParamSENS_VocCycleBase                        ((knx.paramByte(SENS_VocCycleBase) & SENS_VocCycleBaseMask) >> SENS_VocCycleBaseShift)
// Zeit
#define ParamSENS_VocCycleTime                        (knx.paramWord(SENS_VocCycleTime) & SENS_VocCycleTimeMask)
// Zeit (in Millisekunden)
#define ParamSENS_VocCycleTimeMS                      (paramDelay(knx.paramWord(SENS_VocCycleTime)))
// VOC bei absoluter Abweichung senden(0=nicht senden)
#define ParamSENS_VocDeltaAbs                         (knx.paramWord(SENS_VocDeltaAbs))
// VOC bei Abweichung vom vorherigen Wert senden(0=nicht senden)
#define ParamSENS_VocDeltaPercent                     (knx.paramByte(SENS_VocDeltaPercent))
// VOC glätten: P =
#define ParamSENS_VocSmooth                           (knx.paramByte(SENS_VocSmooth))
// Externe Messwerte berücksichtigen
#define ParamSENS_VocExtCount                         (knx.paramByte(SENS_VocExtCount) & SENS_VocExtCountMask)
//     Externe Messwerte beim Start lesen
#define ParamSENS_VocExtRead                          ((bool)(knx.paramByte(SENS_VocExtRead) & SENS_VocExtReadMask))
//     Anteil interner Messwert
#define ParamSENS_VocIntPercent                       (knx.paramByte(SENS_VocIntPercent))
//     Anteil externer Messwert 1
#define ParamSENS_VocExt1Percent                      (knx.paramByte(SENS_VocExt1Percent))
//     Anteil externer Messwert 2
#define ParamSENS_VocExt2Percent                      (knx.paramByte(SENS_VocExt2Percent))
// CO2 anpassen (interner Messwert)
#define ParamSENS_Co2Offset                           ((int8_t)knx.paramByte(SENS_Co2Offset))
// Zeitbasis
#define ParamSENS_Co2CycleBase                        ((knx.paramByte(SENS_Co2CycleBase) & SENS_Co2CycleBaseMask) >> SENS_Co2CycleBaseShift)
// Zeit
#define ParamSENS_Co2CycleTime                        (knx.paramWord(SENS_Co2CycleTime) & SENS_Co2CycleTimeMask)
// Zeit (in Millisekunden)
#define ParamSENS_Co2CycleTimeMS                      (paramDelay(knx.paramWord(SENS_Co2CycleTime)))
// CO2 bei absoluter Abweichung senden(0=nicht senden)
#define ParamSENS_Co2DeltaAbs                         (knx.paramWord(SENS_Co2DeltaAbs))
// CO2 bei Abweichung vom vorherigen Wert senden(0=nicht senden)
#define ParamSENS_Co2DeltaPercent                     (knx.paramByte(SENS_Co2DeltaPercent))
// CO2 glätten: P =
#define ParamSENS_Co2Smooth                           (knx.paramByte(SENS_Co2Smooth))
// Externe Messwerte berücksichtigen
#define ParamSENS_Co2ExtCount                         (knx.paramByte(SENS_Co2ExtCount) & SENS_Co2ExtCountMask)
//     Externe Messwerte beim Start lesen
#define ParamSENS_Co2ExtRead                          ((bool)(knx.paramByte(SENS_Co2ExtRead) & SENS_Co2ExtReadMask))
//     Anteil interner Messwert
#define ParamSENS_Co2IntPercent                       (knx.paramByte(SENS_Co2IntPercent))
//     Anteil externer Messwert 1
#define ParamSENS_Co2Ext1Percent                      (knx.paramByte(SENS_Co2Ext1Percent))
//     Anteil externer Messwert 2
#define ParamSENS_Co2Ext2Percent                      (knx.paramByte(SENS_Co2Ext2Percent))
// Taupunkt anpassen
#define ParamSENS_DewOffset                           ((int8_t)knx.paramByte(SENS_DewOffset))
// Zeitbasis
#define ParamSENS_DewCycleBase                        ((knx.paramByte(SENS_DewCycleBase) & SENS_DewCycleBaseMask) >> SENS_DewCycleBaseShift)
// Zeit
#define ParamSENS_DewCycleTime                        (knx.paramWord(SENS_DewCycleTime) & SENS_DewCycleTimeMask)
// Zeit (in Millisekunden)
#define ParamSENS_DewCycleTimeMS                      (paramDelay(knx.paramWord(SENS_DewCycleTime)))
// Taupunkt bei absoluter Abweichung senden(0=nicht senden)
#define ParamSENS_DewDeltaAbs                         (knx.paramWord(SENS_DewDeltaAbs))
// Taupunkt bei Abweichung vom vorherigen Wert senden(0=nicht senden)
#define ParamSENS_DewDeltaPercent                     (knx.paramByte(SENS_DewDeltaPercent))
// Taupunkt glätten: P =
#define ParamSENS_DewSmooth                           (knx.paramByte(SENS_DewSmooth))
// Helligkeit anpassen (interner Messwert)
#define ParamSENS_LuxOffset                           ((int8_t)knx.paramByte(SENS_LuxOffset))
// Zeitbasis
#define ParamSENS_LuxCycleBase                        ((knx.paramByte(SENS_LuxCycleBase) & SENS_LuxCycleBaseMask) >> SENS_LuxCycleBaseShift)
// Zeit
#define ParamSENS_LuxCycleTime                        (knx.paramWord(SENS_LuxCycleTime) & SENS_LuxCycleTimeMask)
// Zeit (in Millisekunden)
#define ParamSENS_LuxCycleTimeMS                      (paramDelay(knx.paramWord(SENS_LuxCycleTime)))
// Helligkeit bei absoluter Abweichung senden(0=nicht senden)
#define ParamSENS_LuxDeltaAbs                         (knx.paramWord(SENS_LuxDeltaAbs))
// Helligkeit bei Abweichung vom vorherigen Wert senden(0=nicht senden)
#define ParamSENS_LuxDeltaPercent                     (knx.paramByte(SENS_LuxDeltaPercent))
// Helligkeit glätten: P =
#define ParamSENS_LuxSmooth                           (knx.paramByte(SENS_LuxSmooth))
// Externe Messwerte berücksichtigen
#define ParamSENS_LuxExtCount                         (knx.paramByte(SENS_LuxExtCount) & SENS_LuxExtCountMask)
//     Externe Messwerte beim Start lesen
#define ParamSENS_LuxExtRead                          ((bool)(knx.paramByte(SENS_LuxExtRead) & SENS_LuxExtReadMask))
//     Anteil interner Messwert
#define ParamSENS_LuxIntPercent                       (knx.paramByte(SENS_LuxIntPercent))
//     Anteil externer Messwert 1
#define ParamSENS_LuxExt1Percent                      (knx.paramByte(SENS_LuxExt1Percent))
//     Anteil externer Messwert 2
#define ParamSENS_LuxExt2Percent                      (knx.paramByte(SENS_LuxExt2Percent))
// Entfernung anpassen (interner Messwert)
#define ParamSENS_TofOffset                           ((int8_t)knx.paramByte(SENS_TofOffset))
// Zeitbasis
#define ParamSENS_TofCycleBase                        ((knx.paramByte(SENS_TofCycleBase) & SENS_TofCycleBaseMask) >> SENS_TofCycleBaseShift)
// Zeit
#define ParamSENS_TofCycleTime                        (knx.paramWord(SENS_TofCycleTime) & SENS_TofCycleTimeMask)
// Zeit (in Millisekunden)
#define ParamSENS_TofCycleTimeMS                      (paramDelay(knx.paramWord(SENS_TofCycleTime)))
// Entfernung bei absoluter Abweichung senden(0=nicht senden)
#define ParamSENS_TofDeltaAbs                         (knx.paramWord(SENS_TofDeltaAbs))
// Entfernung bei Abweichung vom vorherigen Wert senden(0=nicht senden)
#define ParamSENS_TofDeltaPercent                     (knx.paramByte(SENS_TofDeltaPercent))
// Entfernung glätten: P =
#define ParamSENS_TofSmooth                           (knx.paramByte(SENS_TofSmooth))
// Externe Messwerte berücksichtigen
#define ParamSENS_TofExtCount                         (knx.paramByte(SENS_TofExtCount) & SENS_TofExtCountMask)
//     Externe Messwerte beim Start lesen
#define ParamSENS_TofExtRead                          ((bool)(knx.paramByte(SENS_TofExtRead) & SENS_TofExtReadMask))
//     Anteil interner Messwert
#define ParamSENS_TofIntPercent                       (knx.paramByte(SENS_TofIntPercent))
//     Anteil externer Messwert 1
#define ParamSENS_TofExt1Percent                      (knx.paramByte(SENS_TofExt1Percent))
//     Anteil externer Messwert 2
#define ParamSENS_TofExt2Percent                      (knx.paramByte(SENS_TofExt2Percent))
// Temperatursensor
#define ParamSENS_TempSensor                          ((knx.paramByte(SENS_TempSensor) & SENS_TempSensorMask) >> SENS_TempSensorShift)
// Luftfeuchtesensor
#define ParamSENS_HumSensor                           (knx.paramByte(SENS_HumSensor) & SENS_HumSensorMask)
// Luftdrucksensor
#define ParamSENS_PreSensor                           ((knx.paramByte(SENS_PreSensor) & SENS_PreSensorMask) >> SENS_PreSensorShift)
// Voc-Sensor
#define ParamSENS_VocSensor                           (knx.paramByte(SENS_VocSensor) & SENS_VocSensorMask)
// Co2-Sensor
#define ParamSENS_Co2Sensor                           ((knx.paramByte(SENS_Co2Sensor) & SENS_Co2SensorMask) >> SENS_Co2SensorShift)
// Helligkeitssensor
#define ParamSENS_LuxSensor                           (knx.paramByte(SENS_LuxSensor) & SENS_LuxSensorMask)
// Füllstands- und Näherungssensor
#define ParamSENS_TofSensor                           ((knx.paramByte(SENS_TofSensor) & SENS_TofSensorMask) >> SENS_TofSensorShift)
// Zeitbasis
#define ParamSENS_SCD41MeasureIntervalDelayBase       ((knx.paramByte(SENS_SCD41MeasureIntervalDelayBase) & SENS_SCD41MeasureIntervalDelayBaseMask) >> SENS_SCD41MeasureIntervalDelayBaseShift)
// Zeit
#define ParamSENS_SCD41MeasureIntervalDelayTime       (knx.paramWord(SENS_SCD41MeasureIntervalDelayTime) & SENS_SCD41MeasureIntervalDelayTimeMask)
// Zeit (in Millisekunden)
#define ParamSENS_SCD41MeasureIntervalDelayTimeMS     (paramDelay(knx.paramWord(SENS_SCD41MeasureIntervalDelayTime)))

#define SENS_KoRequestValues 563
#define SENS_KoError 564
#define SENS_KoTemp 580
#define SENS_KoExt1Temp 590
#define SENS_KoExt2Temp 591
#define SENS_KoHum 581
#define SENS_KoExt1Hum 592
#define SENS_KoExt2Hum 593
#define SENS_KoPre 582
#define SENS_KoExt1Pre 594
#define SENS_KoExt2Pre 595
#define SENS_KoVoc 583
#define SENS_KoExt1Voc 596
#define SENS_KoExt2Voc 597
#define SENS_KoCo2 584
#define SENS_KoExt1Co2 598
#define SENS_KoExt2Co2 599
#define SENS_KoLux 607
#define SENS_KoExt1Lux 600
#define SENS_KoExt2Lux 601
#define SENS_KoTof 608
#define SENS_KoExt1Tof 602
#define SENS_KoExt2Tof 603
#define SENS_KoCo2b 585
#define SENS_KoDewpoint 586
#define SENS_KoComfort 587
#define SENS_KoAirquality 588
#define SENS_KoSensorAccuracy 589

// Sensorwerte anfordern
#define KoSENS_RequestValues                       (knx.getGroupObject(SENS_KoRequestValues))
// Sensorfehler
#define KoSENS_Error                               (knx.getGroupObject(SENS_KoError))
// Temperatur
#define KoSENS_Temp                                (knx.getGroupObject(SENS_KoTemp))
// Extern: Temperatur 1
#define KoSENS_Ext1Temp                            (knx.getGroupObject(SENS_KoExt1Temp))
// Extern: Temperatur 2
#define KoSENS_Ext2Temp                            (knx.getGroupObject(SENS_KoExt2Temp))
// Luftfeuchte
#define KoSENS_Hum                                 (knx.getGroupObject(SENS_KoHum))
// Extern: Luftfeuchte 1
#define KoSENS_Ext1Hum                             (knx.getGroupObject(SENS_KoExt1Hum))
// Extern: Luftfeuchte 2
#define KoSENS_Ext2Hum                             (knx.getGroupObject(SENS_KoExt2Hum))
// Luftdruck
#define KoSENS_Pre                                 (knx.getGroupObject(SENS_KoPre))
// Extern: Luftdruck 1
#define KoSENS_Ext1Pre                             (knx.getGroupObject(SENS_KoExt1Pre))
// Extern: Luftdruck 2
#define KoSENS_Ext2Pre                             (knx.getGroupObject(SENS_KoExt2Pre))
// VOC
#define KoSENS_Voc                                 (knx.getGroupObject(SENS_KoVoc))
// Extern: VOC 1
#define KoSENS_Ext1Voc                             (knx.getGroupObject(SENS_KoExt1Voc))
// Extern: VOC 2
#define KoSENS_Ext2Voc                             (knx.getGroupObject(SENS_KoExt2Voc))
// CO2
#define KoSENS_Co2                                 (knx.getGroupObject(SENS_KoCo2))
// Extern: CO2 1
#define KoSENS_Ext1Co2                             (knx.getGroupObject(SENS_KoExt1Co2))
// Extern: CO2 2
#define KoSENS_Ext2Co2                             (knx.getGroupObject(SENS_KoExt2Co2))
// Helligkeit
#define KoSENS_Lux                                 (knx.getGroupObject(SENS_KoLux))
// Extern: Helligkeit 1
#define KoSENS_Ext1Lux                             (knx.getGroupObject(SENS_KoExt1Lux))
// Extern: Helligkeit 2
#define KoSENS_Ext2Lux                             (knx.getGroupObject(SENS_KoExt2Lux))
// Entfernung
#define KoSENS_Tof                                 (knx.getGroupObject(SENS_KoTof))
// Extern: Entfernung 1
#define KoSENS_Ext1Tof                             (knx.getGroupObject(SENS_KoExt1Tof))
// Extern: Entfernung 2
#define KoSENS_Ext2Tof                             (knx.getGroupObject(SENS_KoExt2Tof))
// CO2-VOC
#define KoSENS_Co2b                                (knx.getGroupObject(SENS_KoCo2b))
// Taupunkt
#define KoSENS_Dewpoint                            (knx.getGroupObject(SENS_KoDewpoint))
// Behaglichkeit
#define KoSENS_Comfort                             (knx.getGroupObject(SENS_KoComfort))
// Luftqualitätsampel (1-6)
#define KoSENS_Airquality                          (knx.getGroupObject(SENS_KoAirquality))
// Kalibrierungfortschritt
#define KoSENS_SensorAccuracy                      (knx.getGroupObject(SENS_KoSensorAccuracy))

#define LOG_BuzzerInstalled                     2953      // 1 Bit, Bit 7
#define     LOG_BuzzerInstalledMask 0x80
#define     LOG_BuzzerInstalledShift 7
#define LOG_LedInstalled                        2953      // 1 Bit, Bit 6
#define     LOG_LedInstalledMask 0x40
#define     LOG_LedInstalledShift 6
#define LOG_VacationKo                          2953      // 1 Bit, Bit 5
#define     LOG_VacationKoMask 0x20
#define     LOG_VacationKoShift 5
#define LOG_HolidayKo                           2953      // 1 Bit, Bit 4
#define     LOG_HolidayKoMask 0x10
#define     LOG_HolidayKoShift 4
#define LOG_VacationRead                        2953      // 1 Bit, Bit 3
#define     LOG_VacationReadMask 0x08
#define     LOG_VacationReadShift 3
#define LOG_HolidaySend                         2953      // 1 Bit, Bit 2
#define     LOG_HolidaySendMask 0x04
#define     LOG_HolidaySendShift 2
#define LOG_Neujahr                             2954      // 1 Bit, Bit 7
#define     LOG_NeujahrMask 0x80
#define     LOG_NeujahrShift 7
#define LOG_DreiKoenige                         2954      // 1 Bit, Bit 6
#define     LOG_DreiKoenigeMask 0x40
#define     LOG_DreiKoenigeShift 6
#define LOG_Weiberfastnacht                     2954      // 1 Bit, Bit 5
#define     LOG_WeiberfastnachtMask 0x20
#define     LOG_WeiberfastnachtShift 5
#define LOG_Rosenmontag                         2954      // 1 Bit, Bit 4
#define     LOG_RosenmontagMask 0x10
#define     LOG_RosenmontagShift 4
#define LOG_Fastnachtsdienstag                  2954      // 1 Bit, Bit 3
#define     LOG_FastnachtsdienstagMask 0x08
#define     LOG_FastnachtsdienstagShift 3
#define LOG_Aschermittwoch                      2954      // 1 Bit, Bit 2
#define     LOG_AschermittwochMask 0x04
#define     LOG_AschermittwochShift 2
#define LOG_Frauentag                           2954      // 1 Bit, Bit 1
#define     LOG_FrauentagMask 0x02
#define     LOG_FrauentagShift 1
#define LOG_Gruendonnerstag                     2954      // 1 Bit, Bit 0
#define     LOG_GruendonnerstagMask 0x01
#define     LOG_GruendonnerstagShift 0
#define LOG_Karfreitag                          2955      // 1 Bit, Bit 7
#define     LOG_KarfreitagMask 0x80
#define     LOG_KarfreitagShift 7
#define LOG_Ostersonntag                        2955      // 1 Bit, Bit 6
#define     LOG_OstersonntagMask 0x40
#define     LOG_OstersonntagShift 6
#define LOG_Ostermontag                         2955      // 1 Bit, Bit 5
#define     LOG_OstermontagMask 0x20
#define     LOG_OstermontagShift 5
#define LOG_TagDerArbeit                        2955      // 1 Bit, Bit 4
#define     LOG_TagDerArbeitMask 0x10
#define     LOG_TagDerArbeitShift 4
#define LOG_Himmelfahrt                         2955      // 1 Bit, Bit 3
#define     LOG_HimmelfahrtMask 0x08
#define     LOG_HimmelfahrtShift 3
#define LOG_Pfingstsonntag                      2955      // 1 Bit, Bit 2
#define     LOG_PfingstsonntagMask 0x04
#define     LOG_PfingstsonntagShift 2
#define LOG_Pfingstmontag                       2955      // 1 Bit, Bit 1
#define     LOG_PfingstmontagMask 0x02
#define     LOG_PfingstmontagShift 1
#define LOG_Fronleichnam                        2955      // 1 Bit, Bit 0
#define     LOG_FronleichnamMask 0x01
#define     LOG_FronleichnamShift 0
#define LOG_Friedensfest                        2956      // 1 Bit, Bit 7
#define     LOG_FriedensfestMask 0x80
#define     LOG_FriedensfestShift 7
#define LOG_MariaHimmelfahrt                    2956      // 1 Bit, Bit 6
#define     LOG_MariaHimmelfahrtMask 0x40
#define     LOG_MariaHimmelfahrtShift 6
#define LOG_DeutscheEinheit                     2956      // 1 Bit, Bit 5
#define     LOG_DeutscheEinheitMask 0x20
#define     LOG_DeutscheEinheitShift 5
#define LOG_Reformationstag                     2956      // 1 Bit, Bit 4
#define     LOG_ReformationstagMask 0x10
#define     LOG_ReformationstagShift 4
#define LOG_Allerheiligen                       2956      // 1 Bit, Bit 3
#define     LOG_AllerheiligenMask 0x08
#define     LOG_AllerheiligenShift 3
#define LOG_BussBettag                          2956      // 1 Bit, Bit 2
#define     LOG_BussBettagMask 0x04
#define     LOG_BussBettagShift 2
#define LOG_Advent1                             2956      // 1 Bit, Bit 1
#define     LOG_Advent1Mask 0x02
#define     LOG_Advent1Shift 1
#define LOG_Advent2                             2956      // 1 Bit, Bit 0
#define     LOG_Advent2Mask 0x01
#define     LOG_Advent2Shift 0
#define LOG_Advent3                             2957      // 1 Bit, Bit 7
#define     LOG_Advent3Mask 0x80
#define     LOG_Advent3Shift 7
#define LOG_Advent4                             2957      // 1 Bit, Bit 6
#define     LOG_Advent4Mask 0x40
#define     LOG_Advent4Shift 6
#define LOG_Heiligabend                         2957      // 1 Bit, Bit 5
#define     LOG_HeiligabendMask 0x20
#define     LOG_HeiligabendShift 5
#define LOG_Weihnachtstag1                      2957      // 1 Bit, Bit 4
#define     LOG_Weihnachtstag1Mask 0x10
#define     LOG_Weihnachtstag1Shift 4
#define LOG_Weihnachtstag2                      2957      // 1 Bit, Bit 3
#define     LOG_Weihnachtstag2Mask 0x08
#define     LOG_Weihnachtstag2Shift 3
#define LOG_Silvester                           2957      // 1 Bit, Bit 2
#define     LOG_SilvesterMask 0x04
#define     LOG_SilvesterShift 2
#define LOG_Nationalfeiertag                    2957      // 1 Bit, Bit 1
#define     LOG_NationalfeiertagMask 0x02
#define     LOG_NationalfeiertagShift 1
#define LOG_MariaEmpfaengnis                    2957      // 1 Bit, Bit 0
#define     LOG_MariaEmpfaengnisMask 0x01
#define     LOG_MariaEmpfaengnisShift 0
#define LOG_NationalfeiertagSchweiz             2958      // 1 Bit, Bit 7
#define     LOG_NationalfeiertagSchweizMask 0x80
#define     LOG_NationalfeiertagSchweizShift 7
#define LOG_Totensonntag                        2958      // 1 Bit, Bit 6
#define     LOG_TotensonntagMask 0x40
#define     LOG_TotensonntagShift 6
#define LOG_Weltkindertag                       2958      // 1 Bit, Bit 5
#define     LOG_WeltkindertagMask 0x20
#define     LOG_WeltkindertagShift 5
#define LOG_BuzzerSilent                        2959      // uint16_t
#define LOG_BuzzerNormal                        2961      // uint16_t
#define LOG_BuzzerLoud                          2963      // uint16_t
#define LOG_VisibleChannels                     2965      // uint8_t
#define LOG_LedMapping                          2966      // 3 Bits, Bit 7-5
#define     LOG_LedMappingMask 0xE0
#define     LOG_LedMappingShift 5
#define LOG_UserFormula1                        2967      // char*, 99 Byte
#define LOG_UserFormula1Active                  3066      // 1 Bit, Bit 7
#define     LOG_UserFormula1ActiveMask 0x80
#define     LOG_UserFormula1ActiveShift 7
#define LOG_UserFormula2                        3067      // char*, 99 Byte
#define LOG_UserFormula2Active                  3166      // 1 Bit, Bit 7
#define     LOG_UserFormula2ActiveMask 0x80
#define     LOG_UserFormula2ActiveShift 7
#define LOG_UserFormula3                        3167      // char*, 99 Byte
#define LOG_UserFormula3Active                  3266      // 1 Bit, Bit 7
#define     LOG_UserFormula3ActiveMask 0x80
#define     LOG_UserFormula3ActiveShift 7
#define LOG_UserFormula4                        3267      // char*, 99 Byte
#define LOG_UserFormula4Active                  3366      // 1 Bit, Bit 7
#define     LOG_UserFormula4ActiveMask 0x80
#define     LOG_UserFormula4ActiveShift 7
#define LOG_UserFormula5                        3367      // char*, 99 Byte
#define LOG_UserFormula5Active                  3466      // 1 Bit, Bit 7
#define     LOG_UserFormula5ActiveMask 0x80
#define     LOG_UserFormula5ActiveShift 7
#define LOG_UserFormula6                        3467      // char*, 99 Byte
#define LOG_UserFormula6Active                  3566      // 1 Bit, Bit 7
#define     LOG_UserFormula6ActiveMask 0x80
#define     LOG_UserFormula6ActiveShift 7
#define LOG_UserFormula7                        3567      // char*, 99 Byte
#define LOG_UserFormula7Active                  3666      // 1 Bit, Bit 7
#define     LOG_UserFormula7ActiveMask 0x80
#define     LOG_UserFormula7ActiveShift 7
#define LOG_UserFormula8                        3667      // char*, 99 Byte
#define LOG_UserFormula8Active                  3766      // 1 Bit, Bit 7
#define     LOG_UserFormula8ActiveMask 0x80
#define     LOG_UserFormula8ActiveShift 7
#define LOG_UserFormula9                        3767      // char*, 99 Byte
#define LOG_UserFormula9Active                  3866      // 1 Bit, Bit 7
#define     LOG_UserFormula9ActiveMask 0x80
#define     LOG_UserFormula9ActiveShift 7
#define LOG_UserFormula10                       3867      // char*, 99 Byte
#define LOG_UserFormula10Active                 3966      // 1 Bit, Bit 7
#define     LOG_UserFormula10ActiveMask 0x80
#define     LOG_UserFormula10ActiveShift 7
#define LOG_UserFormula11                       3967      // char*, 99 Byte
#define LOG_UserFormula11Active                 4066      // 1 Bit, Bit 7
#define     LOG_UserFormula11ActiveMask 0x80
#define     LOG_UserFormula11ActiveShift 7
#define LOG_UserFormula12                       4067      // char*, 99 Byte
#define LOG_UserFormula12Active                 4166      // 1 Bit, Bit 7
#define     LOG_UserFormula12ActiveMask 0x80
#define     LOG_UserFormula12ActiveShift 7
#define LOG_UserFormula13                       4167      // char*, 99 Byte
#define LOG_UserFormula13Active                 4266      // 1 Bit, Bit 7
#define     LOG_UserFormula13ActiveMask 0x80
#define     LOG_UserFormula13ActiveShift 7
#define LOG_UserFormula14                       4267      // char*, 99 Byte
#define LOG_UserFormula14Active                 4366      // 1 Bit, Bit 7
#define     LOG_UserFormula14ActiveMask 0x80
#define     LOG_UserFormula14ActiveShift 7
#define LOG_UserFormula15                       4367      // char*, 99 Byte
#define LOG_UserFormula15Active                 4466      // 1 Bit, Bit 7
#define     LOG_UserFormula15ActiveMask 0x80
#define     LOG_UserFormula15ActiveShift 7
#define LOG_UserFormula16                       4467      // char*, 99 Byte
#define LOG_UserFormula16Active                 4566      // 1 Bit, Bit 7
#define     LOG_UserFormula16ActiveMask 0x80
#define     LOG_UserFormula16ActiveShift 7
#define LOG_UserFormula17                       4567      // char*, 99 Byte
#define LOG_UserFormula17Active                 4666      // 1 Bit, Bit 7
#define     LOG_UserFormula17ActiveMask 0x80
#define     LOG_UserFormula17ActiveShift 7
#define LOG_UserFormula18                       4667      // char*, 99 Byte
#define LOG_UserFormula18Active                 4766      // 1 Bit, Bit 7
#define     LOG_UserFormula18ActiveMask 0x80
#define     LOG_UserFormula18ActiveShift 7
#define LOG_UserFormula19                       4767      // char*, 99 Byte
#define LOG_UserFormula19Active                 4866      // 1 Bit, Bit 7
#define     LOG_UserFormula19ActiveMask 0x80
#define     LOG_UserFormula19ActiveShift 7
#define LOG_UserFormula20                       4867      // char*, 99 Byte
#define LOG_UserFormula20Active                 4966      // 1 Bit, Bit 7
#define     LOG_UserFormula20ActiveMask 0x80
#define     LOG_UserFormula20ActiveShift 7
#define LOG_UserFormula21                       4967      // char*, 99 Byte
#define LOG_UserFormula21Active                 5066      // 1 Bit, Bit 7
#define     LOG_UserFormula21ActiveMask 0x80
#define     LOG_UserFormula21ActiveShift 7
#define LOG_UserFormula22                       5067      // char*, 99 Byte
#define LOG_UserFormula22Active                 5166      // 1 Bit, Bit 7
#define     LOG_UserFormula22ActiveMask 0x80
#define     LOG_UserFormula22ActiveShift 7
#define LOG_UserFormula23                       5167      // char*, 99 Byte
#define LOG_UserFormula23Active                 5266      // 1 Bit, Bit 7
#define     LOG_UserFormula23ActiveMask 0x80
#define     LOG_UserFormula23ActiveShift 7
#define LOG_UserFormula24                       5267      // char*, 99 Byte
#define LOG_UserFormula24Active                 5366      // 1 Bit, Bit 7
#define     LOG_UserFormula24ActiveMask 0x80
#define     LOG_UserFormula24ActiveShift 7
#define LOG_UserFormula25                       5367      // char*, 99 Byte
#define LOG_UserFormula25Active                 5466      // 1 Bit, Bit 7
#define     LOG_UserFormula25ActiveMask 0x80
#define     LOG_UserFormula25ActiveShift 7
#define LOG_UserFormula26                       5467      // char*, 99 Byte
#define LOG_UserFormula26Active                 5566      // 1 Bit, Bit 7
#define     LOG_UserFormula26ActiveMask 0x80
#define     LOG_UserFormula26ActiveShift 7
#define LOG_UserFormula27                       5567      // char*, 99 Byte
#define LOG_UserFormula27Active                 5666      // 1 Bit, Bit 7
#define     LOG_UserFormula27ActiveMask 0x80
#define     LOG_UserFormula27ActiveShift 7
#define LOG_UserFormula28                       5667      // char*, 99 Byte
#define LOG_UserFormula28Active                 5766      // 1 Bit, Bit 7
#define     LOG_UserFormula28ActiveMask 0x80
#define     LOG_UserFormula28ActiveShift 7
#define LOG_UserFormula29                       5767      // char*, 99 Byte
#define LOG_UserFormula29Active                 5866      // 1 Bit, Bit 7
#define     LOG_UserFormula29ActiveMask 0x80
#define     LOG_UserFormula29ActiveShift 7
#define LOG_UserFormula30                       5867      // char*, 99 Byte
#define LOG_UserFormula30Active                 5966      // 1 Bit, Bit 7
#define     LOG_UserFormula30ActiveMask 0x80
#define     LOG_UserFormula30ActiveShift 7

// Akustischer Signalgeber vorhanden (Buzzer)?
#define ParamLOG_BuzzerInstalled                     ((bool)(knx.paramByte(LOG_BuzzerInstalled) & LOG_BuzzerInstalledMask))
// Optischer Signalgeber vorhanden (RGB-LED)?
#define ParamLOG_LedInstalled                        ((bool)(knx.paramByte(LOG_LedInstalled) & LOG_LedInstalledMask))
// Urlaubsbehandlung aktivieren?
#define ParamLOG_VacationKo                          ((bool)(knx.paramByte(LOG_VacationKo) & LOG_VacationKoMask))
// Feiertage auf dem Bus verfügbar machen?
#define ParamLOG_HolidayKo                           ((bool)(knx.paramByte(LOG_HolidayKo) & LOG_HolidayKoMask))
// Nach Neustart Urlaubsinfo lesen?
#define ParamLOG_VacationRead                        ((bool)(knx.paramByte(LOG_VacationRead) & LOG_VacationReadMask))
// Nach Neuberechnung Feiertagsinfo senden?
#define ParamLOG_HolidaySend                         ((bool)(knx.paramByte(LOG_HolidaySend) & LOG_HolidaySendMask))
// 1. Neujahr
#define ParamLOG_Neujahr                             ((bool)(knx.paramByte(LOG_Neujahr) & LOG_NeujahrMask))
// 2. Heilige Drei Könige
#define ParamLOG_DreiKoenige                         ((bool)(knx.paramByte(LOG_DreiKoenige) & LOG_DreiKoenigeMask))
// 3. Weiberfastnacht
#define ParamLOG_Weiberfastnacht                     ((bool)(knx.paramByte(LOG_Weiberfastnacht) & LOG_WeiberfastnachtMask))
// 4. Rosenmontag
#define ParamLOG_Rosenmontag                         ((bool)(knx.paramByte(LOG_Rosenmontag) & LOG_RosenmontagMask))
// 5. Fastnachtsdienstag
#define ParamLOG_Fastnachtsdienstag                  ((bool)(knx.paramByte(LOG_Fastnachtsdienstag) & LOG_FastnachtsdienstagMask))
// 6. Aschermittwoch
#define ParamLOG_Aschermittwoch                      ((bool)(knx.paramByte(LOG_Aschermittwoch) & LOG_AschermittwochMask))
// 7. Frauentag
#define ParamLOG_Frauentag                           ((bool)(knx.paramByte(LOG_Frauentag) & LOG_FrauentagMask))
// 8. Gründonnerstag
#define ParamLOG_Gruendonnerstag                     ((bool)(knx.paramByte(LOG_Gruendonnerstag) & LOG_GruendonnerstagMask))
// 9. Karfreitag
#define ParamLOG_Karfreitag                          ((bool)(knx.paramByte(LOG_Karfreitag) & LOG_KarfreitagMask))
// 10. Ostersonntag
#define ParamLOG_Ostersonntag                        ((bool)(knx.paramByte(LOG_Ostersonntag) & LOG_OstersonntagMask))
// 11. Ostermontag
#define ParamLOG_Ostermontag                         ((bool)(knx.paramByte(LOG_Ostermontag) & LOG_OstermontagMask))
// 12. Tag der Arbeit
#define ParamLOG_TagDerArbeit                        ((bool)(knx.paramByte(LOG_TagDerArbeit) & LOG_TagDerArbeitMask))
// 13. Christi Himmelfahrt
#define ParamLOG_Himmelfahrt                         ((bool)(knx.paramByte(LOG_Himmelfahrt) & LOG_HimmelfahrtMask))
// 14. Pfingstsonntag
#define ParamLOG_Pfingstsonntag                      ((bool)(knx.paramByte(LOG_Pfingstsonntag) & LOG_PfingstsonntagMask))
// 15. Pfingstmontag
#define ParamLOG_Pfingstmontag                       ((bool)(knx.paramByte(LOG_Pfingstmontag) & LOG_PfingstmontagMask))
// 16. Fronleichnam
#define ParamLOG_Fronleichnam                        ((bool)(knx.paramByte(LOG_Fronleichnam) & LOG_FronleichnamMask))
// 17. Hohes Friedensfest
#define ParamLOG_Friedensfest                        ((bool)(knx.paramByte(LOG_Friedensfest) & LOG_FriedensfestMask))
// 18. Mariä Himmelfahrt
#define ParamLOG_MariaHimmelfahrt                    ((bool)(knx.paramByte(LOG_MariaHimmelfahrt) & LOG_MariaHimmelfahrtMask))
// 19. Tag der Deutschen Einheit
#define ParamLOG_DeutscheEinheit                     ((bool)(knx.paramByte(LOG_DeutscheEinheit) & LOG_DeutscheEinheitMask))
// 20. Reformationstag
#define ParamLOG_Reformationstag                     ((bool)(knx.paramByte(LOG_Reformationstag) & LOG_ReformationstagMask))
// 21. Allerheiligen
#define ParamLOG_Allerheiligen                       ((bool)(knx.paramByte(LOG_Allerheiligen) & LOG_AllerheiligenMask))
// 22. Buß- und Bettag
#define ParamLOG_BussBettag                          ((bool)(knx.paramByte(LOG_BussBettag) & LOG_BussBettagMask))
// 23. Erster Advent
#define ParamLOG_Advent1                             ((bool)(knx.paramByte(LOG_Advent1) & LOG_Advent1Mask))
// 24. Zweiter Advent
#define ParamLOG_Advent2                             ((bool)(knx.paramByte(LOG_Advent2) & LOG_Advent2Mask))
// 25. Dritter Advent
#define ParamLOG_Advent3                             ((bool)(knx.paramByte(LOG_Advent3) & LOG_Advent3Mask))
// 26. Vierter Advent
#define ParamLOG_Advent4                             ((bool)(knx.paramByte(LOG_Advent4) & LOG_Advent4Mask))
// 27. Heiligabend
#define ParamLOG_Heiligabend                         ((bool)(knx.paramByte(LOG_Heiligabend) & LOG_HeiligabendMask))
// 28. Erster Weihnachtstag
#define ParamLOG_Weihnachtstag1                      ((bool)(knx.paramByte(LOG_Weihnachtstag1) & LOG_Weihnachtstag1Mask))
// 29. Zweiter Weihnachtstag
#define ParamLOG_Weihnachtstag2                      ((bool)(knx.paramByte(LOG_Weihnachtstag2) & LOG_Weihnachtstag2Mask))
// 30. Silvester
#define ParamLOG_Silvester                           ((bool)(knx.paramByte(LOG_Silvester) & LOG_SilvesterMask))
// 31. Nationalfeiertag (AT)
#define ParamLOG_Nationalfeiertag                    ((bool)(knx.paramByte(LOG_Nationalfeiertag) & LOG_NationalfeiertagMask))
// 32. Maria Empfängnis (AT)
#define ParamLOG_MariaEmpfaengnis                    ((bool)(knx.paramByte(LOG_MariaEmpfaengnis) & LOG_MariaEmpfaengnisMask))
// 33. Nationalfeiertag (CH)
#define ParamLOG_NationalfeiertagSchweiz             ((bool)(knx.paramByte(LOG_NationalfeiertagSchweiz) & LOG_NationalfeiertagSchweizMask))
// 34. Totensonntag
#define ParamLOG_Totensonntag                        ((bool)(knx.paramByte(LOG_Totensonntag) & LOG_TotensonntagMask))
// 35. Weltkindertag
#define ParamLOG_Weltkindertag                       ((bool)(knx.paramByte(LOG_Weltkindertag) & LOG_WeltkindertagMask))
// Frequenz für Buzzer (leise)
#define ParamLOG_BuzzerSilent                        (knx.paramWord(LOG_BuzzerSilent))
// Frequenz für Buzzer (normal)
#define ParamLOG_BuzzerNormal                        (knx.paramWord(LOG_BuzzerNormal))
// Frequenz für Buzzer (laut)
#define ParamLOG_BuzzerLoud                          (knx.paramWord(LOG_BuzzerLoud))
// Verfügbare Kanäle
#define ParamLOG_VisibleChannels                     (knx.paramByte(LOG_VisibleChannels))
// Lötpad A / B / C entspricht
#define ParamLOG_LedMapping                          ((knx.paramByte(LOG_LedMapping) & LOG_LedMappingMask) >> LOG_LedMappingShift)
// Formeldefinition
#define ParamLOG_UserFormula1                        (knx.paramData(LOG_UserFormula1))
// Benutzerformel 1 aktiv
#define ParamLOG_UserFormula1Active                  ((bool)(knx.paramByte(LOG_UserFormula1Active) & LOG_UserFormula1ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula2                        (knx.paramData(LOG_UserFormula2))
// Benutzerformel 2 aktiv
#define ParamLOG_UserFormula2Active                  ((bool)(knx.paramByte(LOG_UserFormula2Active) & LOG_UserFormula2ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula3                        (knx.paramData(LOG_UserFormula3))
// Benutzerformel 3 aktiv
#define ParamLOG_UserFormula3Active                  ((bool)(knx.paramByte(LOG_UserFormula3Active) & LOG_UserFormula3ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula4                        (knx.paramData(LOG_UserFormula4))
// Benutzerformel 4 aktiv
#define ParamLOG_UserFormula4Active                  ((bool)(knx.paramByte(LOG_UserFormula4Active) & LOG_UserFormula4ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula5                        (knx.paramData(LOG_UserFormula5))
// Benutzerformel 5 aktiv
#define ParamLOG_UserFormula5Active                  ((bool)(knx.paramByte(LOG_UserFormula5Active) & LOG_UserFormula5ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula6                        (knx.paramData(LOG_UserFormula6))
// Benutzerformel 6 aktiv
#define ParamLOG_UserFormula6Active                  ((bool)(knx.paramByte(LOG_UserFormula6Active) & LOG_UserFormula6ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula7                        (knx.paramData(LOG_UserFormula7))
// Benutzerformel 7 aktiv
#define ParamLOG_UserFormula7Active                  ((bool)(knx.paramByte(LOG_UserFormula7Active) & LOG_UserFormula7ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula8                        (knx.paramData(LOG_UserFormula8))
// Benutzerformel 8 aktiv
#define ParamLOG_UserFormula8Active                  ((bool)(knx.paramByte(LOG_UserFormula8Active) & LOG_UserFormula8ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula9                        (knx.paramData(LOG_UserFormula9))
// Benutzerformel 9 aktiv
#define ParamLOG_UserFormula9Active                  ((bool)(knx.paramByte(LOG_UserFormula9Active) & LOG_UserFormula9ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula10                       (knx.paramData(LOG_UserFormula10))
// Benutzerformel 10 aktiv
#define ParamLOG_UserFormula10Active                 ((bool)(knx.paramByte(LOG_UserFormula10Active) & LOG_UserFormula10ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula11                       (knx.paramData(LOG_UserFormula11))
// Benutzerformel 11 aktiv
#define ParamLOG_UserFormula11Active                 ((bool)(knx.paramByte(LOG_UserFormula11Active) & LOG_UserFormula11ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula12                       (knx.paramData(LOG_UserFormula12))
// Benutzerformel 12 aktiv
#define ParamLOG_UserFormula12Active                 ((bool)(knx.paramByte(LOG_UserFormula12Active) & LOG_UserFormula12ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula13                       (knx.paramData(LOG_UserFormula13))
// Benutzerformel 13 aktiv
#define ParamLOG_UserFormula13Active                 ((bool)(knx.paramByte(LOG_UserFormula13Active) & LOG_UserFormula13ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula14                       (knx.paramData(LOG_UserFormula14))
// Benutzerformel 14 aktiv
#define ParamLOG_UserFormula14Active                 ((bool)(knx.paramByte(LOG_UserFormula14Active) & LOG_UserFormula14ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula15                       (knx.paramData(LOG_UserFormula15))
// Benutzerformel 15 aktiv
#define ParamLOG_UserFormula15Active                 ((bool)(knx.paramByte(LOG_UserFormula15Active) & LOG_UserFormula15ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula16                       (knx.paramData(LOG_UserFormula16))
// Benutzerformel 16 aktiv
#define ParamLOG_UserFormula16Active                 ((bool)(knx.paramByte(LOG_UserFormula16Active) & LOG_UserFormula16ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula17                       (knx.paramData(LOG_UserFormula17))
// Benutzerformel 17 aktiv
#define ParamLOG_UserFormula17Active                 ((bool)(knx.paramByte(LOG_UserFormula17Active) & LOG_UserFormula17ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula18                       (knx.paramData(LOG_UserFormula18))
// Benutzerformel 18 aktiv
#define ParamLOG_UserFormula18Active                 ((bool)(knx.paramByte(LOG_UserFormula18Active) & LOG_UserFormula18ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula19                       (knx.paramData(LOG_UserFormula19))
// Benutzerformel 19 aktiv
#define ParamLOG_UserFormula19Active                 ((bool)(knx.paramByte(LOG_UserFormula19Active) & LOG_UserFormula19ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula20                       (knx.paramData(LOG_UserFormula20))
// Benutzerformel 20 aktiv
#define ParamLOG_UserFormula20Active                 ((bool)(knx.paramByte(LOG_UserFormula20Active) & LOG_UserFormula20ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula21                       (knx.paramData(LOG_UserFormula21))
// Benutzerformel 21 aktiv
#define ParamLOG_UserFormula21Active                 ((bool)(knx.paramByte(LOG_UserFormula21Active) & LOG_UserFormula21ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula22                       (knx.paramData(LOG_UserFormula22))
// Benutzerformel 22 aktiv
#define ParamLOG_UserFormula22Active                 ((bool)(knx.paramByte(LOG_UserFormula22Active) & LOG_UserFormula22ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula23                       (knx.paramData(LOG_UserFormula23))
// Benutzerformel 23 aktiv
#define ParamLOG_UserFormula23Active                 ((bool)(knx.paramByte(LOG_UserFormula23Active) & LOG_UserFormula23ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula24                       (knx.paramData(LOG_UserFormula24))
// Benutzerformel 24 aktiv
#define ParamLOG_UserFormula24Active                 ((bool)(knx.paramByte(LOG_UserFormula24Active) & LOG_UserFormula24ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula25                       (knx.paramData(LOG_UserFormula25))
// Benutzerformel 25 aktiv
#define ParamLOG_UserFormula25Active                 ((bool)(knx.paramByte(LOG_UserFormula25Active) & LOG_UserFormula25ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula26                       (knx.paramData(LOG_UserFormula26))
// Benutzerformel 26 aktiv
#define ParamLOG_UserFormula26Active                 ((bool)(knx.paramByte(LOG_UserFormula26Active) & LOG_UserFormula26ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula27                       (knx.paramData(LOG_UserFormula27))
// Benutzerformel 27 aktiv
#define ParamLOG_UserFormula27Active                 ((bool)(knx.paramByte(LOG_UserFormula27Active) & LOG_UserFormula27ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula28                       (knx.paramData(LOG_UserFormula28))
// Benutzerformel 28 aktiv
#define ParamLOG_UserFormula28Active                 ((bool)(knx.paramByte(LOG_UserFormula28Active) & LOG_UserFormula28ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula29                       (knx.paramData(LOG_UserFormula29))
// Benutzerformel 29 aktiv
#define ParamLOG_UserFormula29Active                 ((bool)(knx.paramByte(LOG_UserFormula29Active) & LOG_UserFormula29ActiveMask))
// Formeldefinition
#define ParamLOG_UserFormula30                       (knx.paramData(LOG_UserFormula30))
// Benutzerformel 30 aktiv
#define ParamLOG_UserFormula30Active                 ((bool)(knx.paramByte(LOG_UserFormula30Active) & LOG_UserFormula30ActiveMask))

#define LOG_KoVacation 15
#define LOG_KoHoliday1 16
#define LOG_KoHoliday2 17
#define LOG_KoLedLock 18
#define LOG_KoBuzzerLock 19

// Urlaub
#define KoLOG_Vacation                            (knx.getGroupObject(LOG_KoVacation))
// Welcher Feiertag ist heute?
#define KoLOG_Holiday1                            (knx.getGroupObject(LOG_KoHoliday1))
// Welcher Feiertag ist morgen?
#define KoLOG_Holiday2                            (knx.getGroupObject(LOG_KoHoliday2))
// LED sperren
#define KoLOG_LedLock                             (knx.getGroupObject(LOG_KoLedLock))
// Buzzer sperren
#define KoLOG_BuzzerLock                          (knx.getGroupObject(LOG_KoBuzzerLock))

#define LOG_ChannelCount 3

// Parameter per channel
#define LOG_ParamBlockOffset 5967
#define LOG_ParamBlockSize 85
#define LOG_ParamCalcIndex(index) (index + LOG_ParamBlockOffset + _channelIndex * LOG_ParamBlockSize)

#define LOG_fChannelDelayBase                    0      // 2 Bits, Bit 7-6
#define     LOG_fChannelDelayBaseMask 0xC0
#define     LOG_fChannelDelayBaseShift 6
#define LOG_fChannelDelayTime                    0      // 14 Bits, Bit 13-0
#define     LOG_fChannelDelayTimeMask 0x3FFF
#define     LOG_fChannelDelayTimeShift 0
#define LOG_fLogic                               2      // 8 Bits, Bit 7-0
#define LOG_fCalculate                           3      // 2 Bits, Bit 1-0
#define     LOG_fCalculateMask 0x03
#define     LOG_fCalculateShift 0
#define LOG_fDisable                             3      // 1 Bit, Bit 2
#define     LOG_fDisableMask 0x04
#define     LOG_fDisableShift 2
#define LOG_fAlarm                               3      // 1 Bit, Bit 3
#define     LOG_fAlarmMask 0x08
#define     LOG_fAlarmShift 3
#define LOG_fTGate                               3      // 1 Bit, Bit 4
#define     LOG_fTGateMask 0x10
#define     LOG_fTGateShift 4
#define LOG_fOInternalOn                         3      // 1 Bit, Bit 5
#define     LOG_fOInternalOnMask 0x20
#define     LOG_fOInternalOnShift 5
#define LOG_fOInternalOff                        3      // 1 Bit, Bit 6
#define     LOG_fOInternalOffMask 0x40
#define     LOG_fOInternalOffShift 6
#define LOG_fTrigger                             4      // 8 Bits, Bit 7-0
#define LOG_fTriggerE1                           4      // 1 Bit, Bit 0
#define     LOG_fTriggerE1Mask 0x01
#define     LOG_fTriggerE1Shift 0
#define LOG_fTriggerE2                           4      // 1 Bit, Bit 1
#define     LOG_fTriggerE2Mask 0x02
#define     LOG_fTriggerE2Shift 1
#define LOG_fTriggerI1                           4      // 1 Bit, Bit 2
#define     LOG_fTriggerI1Mask 0x04
#define     LOG_fTriggerI1Shift 2
#define LOG_fTriggerI2                           4      // 1 Bit, Bit 3
#define     LOG_fTriggerI2Mask 0x08
#define     LOG_fTriggerI2Shift 3
#define LOG_fTriggerTime                         4      // 8 Bits, Bit 7-0
#define LOG_fTriggerGateClose                    5      // 2 Bits, Bit 7-6
#define     LOG_fTriggerGateCloseMask 0xC0
#define     LOG_fTriggerGateCloseShift 6
#define LOG_fTriggerGateOpen                     5      // 2 Bits, Bit 5-4
#define     LOG_fTriggerGateOpenMask 0x30
#define     LOG_fTriggerGateOpenShift 4
#define LOG_fE1ConvertInt                        6      // 4 Bits, Bit 7-4
#define     LOG_fE1ConvertIntMask 0xF0
#define     LOG_fE1ConvertIntShift 4
#define LOG_fE1Convert                           6      // 4 Bits, Bit 7-4
#define     LOG_fE1ConvertMask 0xF0
#define     LOG_fE1ConvertShift 4
#define LOG_fE1ConvertFloat                      6      // 4 Bits, Bit 7-4
#define     LOG_fE1ConvertFloatMask 0xF0
#define     LOG_fE1ConvertFloatShift 4
#define LOG_fE1ConvertSpecial                    6      // 4 Bits, Bit 7-4
#define     LOG_fE1ConvertSpecialMask 0xF0
#define     LOG_fE1ConvertSpecialShift 4
#define LOG_fE1ConvertBool                       6      // 4 Bits, Bit 7-4
#define     LOG_fE1ConvertBoolMask 0xF0
#define     LOG_fE1ConvertBoolShift 4
#define LOG_fE1                                  6      // 2 Bits, Bit 1-0
#define     LOG_fE1Mask 0x03
#define     LOG_fE1Shift 0
#define LOG_fE1Dpt                               7      // 8 Bits, Bit 7-0
#define LOG_fE1RepeatBase                        8      // 2 Bits, Bit 7-6
#define     LOG_fE1RepeatBaseMask 0xC0
#define     LOG_fE1RepeatBaseShift 6
#define LOG_fE1RepeatTime                        8      // 14 Bits, Bit 13-0
#define     LOG_fE1RepeatTimeMask 0x3FFF
#define     LOG_fE1RepeatTimeShift 0
#define LOG_fE1OtherKO                          10      // uint16_t
#define LOG_fE1OtherKORel                       10      // int16_t
#define LOG_fE1Default                          12      // 2 Bits, Bit 1-0
#define     LOG_fE1DefaultMask 0x03
#define     LOG_fE1DefaultShift 0
#define LOG_fE1DefaultExt                       12      // 2 Bits, Bit 1-0
#define     LOG_fE1DefaultExtMask 0x03
#define     LOG_fE1DefaultExtShift 0
#define LOG_fE1DefaultEEPROM                    12      // 1 Bit, Bit 2
#define     LOG_fE1DefaultEEPROMMask 0x04
#define     LOG_fE1DefaultEEPROMShift 2
#define LOG_fE1DefaultRepeat                    12      // 1 Bit, Bit 3
#define     LOG_fE1DefaultRepeatMask 0x08
#define     LOG_fE1DefaultRepeatShift 3
#define LOG_fE1UseOtherKO                       12      // 2 Bits, Bit 5-4
#define     LOG_fE1UseOtherKOMask 0x30
#define     LOG_fE1UseOtherKOShift 4
#define LOG_fE1LowDelta                         13      // int32_t
#define LOG_fE1HighDelta                        17      // int32_t
#define LOG_fE1LowDeltaFloat                    13      // float
#define LOG_fE1HighDeltaFloat                   17      // float
#define LOG_fE1LowDeltaDouble                   13      // float
#define LOG_fE1HighDeltaDouble                  17      // float
#define LOG_fE1Low0Valid                        20      // 1 Bit, Bit 7
#define     LOG_fE1Low0ValidMask 0x80
#define     LOG_fE1Low0ValidShift 7
#define LOG_fE1Low1Valid                        20      // 1 Bit, Bit 6
#define     LOG_fE1Low1ValidMask 0x40
#define     LOG_fE1Low1ValidShift 6
#define LOG_fE1Low2Valid                        20      // 1 Bit, Bit 5
#define     LOG_fE1Low2ValidMask 0x20
#define     LOG_fE1Low2ValidShift 5
#define LOG_fE1Low3Valid                        20      // 1 Bit, Bit 4
#define     LOG_fE1Low3ValidMask 0x10
#define     LOG_fE1Low3ValidShift 4
#define LOG_fE1Low4Valid                        20      // 1 Bit, Bit 3
#define     LOG_fE1Low4ValidMask 0x08
#define     LOG_fE1Low4ValidShift 3
#define LOG_fE1Low5Valid                        20      // 1 Bit, Bit 2
#define     LOG_fE1Low5ValidMask 0x04
#define     LOG_fE1Low5ValidShift 2
#define LOG_fE1Low6Valid                        20      // 1 Bit, Bit 1
#define     LOG_fE1Low6ValidMask 0x02
#define     LOG_fE1Low6ValidShift 1
#define LOG_fE1Low0Dpt2                         13      // 8 Bits, Bit 7-0
#define LOG_fE1Low1Dpt2                         14      // 8 Bits, Bit 7-0
#define LOG_fE1Low2Dpt2                         15      // 8 Bits, Bit 7-0
#define LOG_fE1Low3Dpt2                         16      // 8 Bits, Bit 7-0
#define LOG_fE1LowDpt2Fix                       13      // 8 Bits, Bit 7-0
#define LOG_fE1Low0Dpt3Dir                      13      // 5 Bits, Bit 7-3
#define     LOG_fE1Low0Dpt3DirMask 0xF8
#define     LOG_fE1Low0Dpt3DirShift 3
#define LOG_fE1Low0Dpt3Dim                      13      // 3 Bits, Bit 2-0
#define     LOG_fE1Low0Dpt3DimMask 0x07
#define     LOG_fE1Low0Dpt3DimShift 0
#define LOG_fE1Low1Dpt3Dir                      14      // 5 Bits, Bit 7-3
#define     LOG_fE1Low1Dpt3DirMask 0xF8
#define     LOG_fE1Low1Dpt3DirShift 3
#define LOG_fE1Low1Dpt3Dim                      14      // 3 Bits, Bit 2-0
#define     LOG_fE1Low1Dpt3DimMask 0x07
#define     LOG_fE1Low1Dpt3DimShift 0
#define LOG_fE1Low2Dpt3Dir                      15      // 5 Bits, Bit 7-3
#define     LOG_fE1Low2Dpt3DirMask 0xF8
#define     LOG_fE1Low2Dpt3DirShift 3
#define LOG_fE1Low2Dpt3Dim                      15      // 3 Bits, Bit 2-0
#define     LOG_fE1Low2Dpt3DimMask 0x07
#define     LOG_fE1Low2Dpt3DimShift 0
#define LOG_fE1Low3Dpt3Dir                      16      // 5 Bits, Bit 7-3
#define     LOG_fE1Low3Dpt3DirMask 0xF8
#define     LOG_fE1Low3Dpt3DirShift 3
#define LOG_fE1Low3Dpt3Dim                      16      // 3 Bits, Bit 2-0
#define     LOG_fE1Low3Dpt3DimMask 0x07
#define     LOG_fE1Low3Dpt3DimShift 0
#define LOG_fE1LowDpt3FixDir                    13      // 5 Bits, Bit 7-3
#define     LOG_fE1LowDpt3FixDirMask 0xF8
#define     LOG_fE1LowDpt3FixDirShift 3
#define LOG_fE1LowDpt3FixDim                    13      // 3 Bits, Bit 2-0
#define     LOG_fE1LowDpt3FixDimMask 0x07
#define     LOG_fE1LowDpt3FixDimShift 0
#define LOG_fE1LowDpt5                          13      // uint8_t
#define LOG_fE1HighDpt5                         17      // uint8_t
#define LOG_fE1Low0Dpt5In                       13      // uint8_t
#define LOG_fE1Low1Dpt5In                       14      // uint8_t
#define LOG_fE1Low2Dpt5In                       15      // uint8_t
#define LOG_fE1Low3Dpt5In                       16      // uint8_t
#define LOG_fE1Low4Dpt5In                       17      // uint8_t
#define LOG_fE1Low5Dpt5In                       18      // uint8_t
#define LOG_fE1Low6Dpt5In                       19      // uint8_t
#define LOG_fE1LowDpt5Fix                       13      // uint8_t
#define LOG_fE1LowDpt5001                       13      // uint8_t
#define LOG_fE1HighDpt5001                      17      // uint8_t
#define LOG_fE1Low0Dpt5xIn                      13      // uint8_t
#define LOG_fE1Low1Dpt5xIn                      14      // uint8_t
#define LOG_fE1Low2Dpt5xIn                      15      // uint8_t
#define LOG_fE1Low3Dpt5xIn                      16      // uint8_t
#define LOG_fE1Low4Dpt5xIn                      17      // uint8_t
#define LOG_fE1Low5Dpt5xIn                      18      // uint8_t
#define LOG_fE1Low6Dpt5xIn                      19      // uint8_t
#define LOG_fE1LowDpt5xFix                      13      // uint8_t
#define LOG_fE1LowDpt6                          13      // int8_t
#define LOG_fE1HighDpt6                         17      // int8_t
#define LOG_fE1Low0Dpt6In                       13      // int8_t
#define LOG_fE1Low1Dpt6In                       14      // int8_t
#define LOG_fE1Low2Dpt6In                       15      // int8_t
#define LOG_fE1Low3Dpt6In                       16      // int8_t
#define LOG_fE1Low4Dpt6In                       17      // int8_t
#define LOG_fE1Low5Dpt6In                       18      // int8_t
#define LOG_fE1Low6Dpt6In                       19      // int8_t
#define LOG_fE1LowDpt6Fix                       13      // int8_t
#define LOG_fE1LowDpt7                          13      // uint16_t
#define LOG_fE1HighDpt7                         17      // uint16_t
#define LOG_fE1Low0Dpt7In                       13      // uint16_t
#define LOG_fE1Low1Dpt7In                       15      // uint16_t
#define LOG_fE1Low2Dpt7In                       17      // uint16_t
#define LOG_fE1LowDpt7Fix                       13      // uint16_t
#define LOG_fE1LowDpt8                          13      // int16_t
#define LOG_fE1HighDpt8                         17      // int16_t
#define LOG_fE1Low0Dpt8In                       13      // int16_t
#define LOG_fE1Low1Dpt8In                       15      // int16_t
#define LOG_fE1Low2Dpt8In                       17      // int16_t
#define LOG_fE1LowDpt8Fix                       13      // int16_t
#define LOG_fE1LowDpt9                          13      // float
#define LOG_fE1HighDpt9                         17      // float
#define LOG_fE1LowDpt9Fix                       13      // float
#define LOG_fE1LowDpt12                         13      // uint32_t
#define LOG_fE1HighDpt12                        17      // uint32_t
#define LOG_fE1LowDpt12Fix                      13      // uint32_t
#define LOG_fE1LowDpt13                         13      // int32_t
#define LOG_fE1HighDpt13                        17      // int32_t
#define LOG_fE1LowDpt13Fix                      13      // int32_t
#define LOG_fE1LowDpt14                         13      // float
#define LOG_fE1HighDpt14                        17      // float
#define LOG_fE1LowDpt14Fix                      13      // float
#define LOG_fE1Low0Dpt17                        13      // 8 Bits, Bit 7-0
#define LOG_fE1Low1Dpt17                        14      // 8 Bits, Bit 7-0
#define LOG_fE1Low2Dpt17                        15      // 8 Bits, Bit 7-0
#define LOG_fE1Low3Dpt17                        16      // 8 Bits, Bit 7-0
#define LOG_fE1Low4Dpt17                        17      // 8 Bits, Bit 7-0
#define LOG_fE1Low5Dpt17                        18      // 8 Bits, Bit 7-0
#define LOG_fE1Low6Dpt17                        19      // 8 Bits, Bit 7-0
#define LOG_fE1Low7Dpt17                        20      // 8 Bits, Bit 7-0
#define LOG_fE1LowDpt17Fix                      13      // 8 Bits, Bit 7-0
#define LOG_fE1LowDptRGB                        13      // int32_t
#define LOG_fE1HighDptRGB                       17      // int32_t
#define LOG_fE1LowDptRGBFix                     13      // int32_t
#define LOG_fE2ConvertInt                       21      // 4 Bits, Bit 7-4
#define     LOG_fE2ConvertIntMask 0xF0
#define     LOG_fE2ConvertIntShift 4
#define LOG_fE2Convert                          21      // 4 Bits, Bit 7-4
#define     LOG_fE2ConvertMask 0xF0
#define     LOG_fE2ConvertShift 4
#define LOG_fE2ConvertFloat                     21      // 4 Bits, Bit 7-4
#define     LOG_fE2ConvertFloatMask 0xF0
#define     LOG_fE2ConvertFloatShift 4
#define LOG_fE2ConvertSpecial                   21      // 4 Bits, Bit 7-4
#define     LOG_fE2ConvertSpecialMask 0xF0
#define     LOG_fE2ConvertSpecialShift 4
#define LOG_fE2ConvertBool                      21      // 4 Bits, Bit 7-4
#define     LOG_fE2ConvertBoolMask 0xF0
#define     LOG_fE2ConvertBoolShift 4
#define LOG_fE2                                 21      // 2 Bits, Bit 1-0
#define     LOG_fE2Mask 0x03
#define     LOG_fE2Shift 0
#define LOG_fE2Dpt                              22      // 8 Bits, Bit 7-0
#define LOG_fE2RepeatBase                       23      // 2 Bits, Bit 7-6
#define     LOG_fE2RepeatBaseMask 0xC0
#define     LOG_fE2RepeatBaseShift 6
#define LOG_fE2RepeatTime                       23      // 14 Bits, Bit 13-0
#define     LOG_fE2RepeatTimeMask 0x3FFF
#define     LOG_fE2RepeatTimeShift 0
#define LOG_fE2OtherKO                          25      // uint16_t
#define LOG_fE2OtherKORel                       25      // int16_t
#define LOG_fE2Default                          27      // 2 Bits, Bit 1-0
#define     LOG_fE2DefaultMask 0x03
#define     LOG_fE2DefaultShift 0
#define LOG_fE2DefaultExt                       27      // 2 Bits, Bit 1-0
#define     LOG_fE2DefaultExtMask 0x03
#define     LOG_fE2DefaultExtShift 0
#define LOG_fE2DefaultEEPROM                    27      // 1 Bit, Bit 2
#define     LOG_fE2DefaultEEPROMMask 0x04
#define     LOG_fE2DefaultEEPROMShift 2
#define LOG_fE2DefaultRepeat                    27      // 1 Bit, Bit 3
#define     LOG_fE2DefaultRepeatMask 0x08
#define     LOG_fE2DefaultRepeatShift 3
#define LOG_fE2UseOtherKO                       27      // 2 Bits, Bit 5-4
#define     LOG_fE2UseOtherKOMask 0x30
#define     LOG_fE2UseOtherKOShift 4
#define LOG_fE2LowDelta                         28      // int32_t
#define LOG_fE2HighDelta                        32      // int32_t
#define LOG_fE2LowDeltaFloat                    28      // float
#define LOG_fE2HighDeltaFloat                   32      // float
#define LOG_fE2LowDeltaDouble                   28      // float
#define LOG_fE2HighDeltaDouble                  32      // float
#define LOG_fE2Low0Valid                        35      // 1 Bit, Bit 7
#define     LOG_fE2Low0ValidMask 0x80
#define     LOG_fE2Low0ValidShift 7
#define LOG_fE2Low1Valid                        35      // 1 Bit, Bit 6
#define     LOG_fE2Low1ValidMask 0x40
#define     LOG_fE2Low1ValidShift 6
#define LOG_fE2Low2Valid                        35      // 1 Bit, Bit 5
#define     LOG_fE2Low2ValidMask 0x20
#define     LOG_fE2Low2ValidShift 5
#define LOG_fE2Low3Valid                        35      // 1 Bit, Bit 4
#define     LOG_fE2Low3ValidMask 0x10
#define     LOG_fE2Low3ValidShift 4
#define LOG_fE2Low4Valid                        35      // 1 Bit, Bit 3
#define     LOG_fE2Low4ValidMask 0x08
#define     LOG_fE2Low4ValidShift 3
#define LOG_fE2Low5Valid                        35      // 1 Bit, Bit 2
#define     LOG_fE2Low5ValidMask 0x04
#define     LOG_fE2Low5ValidShift 2
#define LOG_fE2Low6Valid                        35      // 1 Bit, Bit 1
#define     LOG_fE2Low6ValidMask 0x02
#define     LOG_fE2Low6ValidShift 1
#define LOG_fE2Low0Dpt2                         28      // 8 Bits, Bit 7-0
#define LOG_fE2Low1Dpt2                         29      // 8 Bits, Bit 7-0
#define LOG_fE2Low2Dpt2                         30      // 8 Bits, Bit 7-0
#define LOG_fE2Low3Dpt2                         31      // 8 Bits, Bit 7-0
#define LOG_fE2LowDpt2Fix                       28      // 8 Bits, Bit 7-0
#define LOG_fE2Low0Dpt3Dir                      28      // 5 Bits, Bit 7-3
#define     LOG_fE2Low0Dpt3DirMask 0xF8
#define     LOG_fE2Low0Dpt3DirShift 3
#define LOG_fE2Low0Dpt3Dim                      28      // 3 Bits, Bit 2-0
#define     LOG_fE2Low0Dpt3DimMask 0x07
#define     LOG_fE2Low0Dpt3DimShift 0
#define LOG_fE2Low1Dpt3Dir                      29      // 5 Bits, Bit 7-3
#define     LOG_fE2Low1Dpt3DirMask 0xF8
#define     LOG_fE2Low1Dpt3DirShift 3
#define LOG_fE2Low1Dpt3Dim                      29      // 3 Bits, Bit 2-0
#define     LOG_fE2Low1Dpt3DimMask 0x07
#define     LOG_fE2Low1Dpt3DimShift 0
#define LOG_fE2Low2Dpt3Dir                      30      // 5 Bits, Bit 7-3
#define     LOG_fE2Low2Dpt3DirMask 0xF8
#define     LOG_fE2Low2Dpt3DirShift 3
#define LOG_fE2Low2Dpt3Dim                      30      // 3 Bits, Bit 2-0
#define     LOG_fE2Low2Dpt3DimMask 0x07
#define     LOG_fE2Low2Dpt3DimShift 0
#define LOG_fE2Low3Dpt3Dir                      31      // 5 Bits, Bit 7-3
#define     LOG_fE2Low3Dpt3DirMask 0xF8
#define     LOG_fE2Low3Dpt3DirShift 3
#define LOG_fE2Low3Dpt3Dim                      31      // 3 Bits, Bit 2-0
#define     LOG_fE2Low3Dpt3DimMask 0x07
#define     LOG_fE2Low3Dpt3DimShift 0
#define LOG_fE2LowDpt3FixDir                    28      // 5 Bits, Bit 7-3
#define     LOG_fE2LowDpt3FixDirMask 0xF8
#define     LOG_fE2LowDpt3FixDirShift 3
#define LOG_fE2LowDpt3FixDim                    28      // 3 Bits, Bit 2-0
#define     LOG_fE2LowDpt3FixDimMask 0x07
#define     LOG_fE2LowDpt3FixDimShift 0
#define LOG_fE2LowDpt5                          28      // uint8_t
#define LOG_fE2HighDpt5                         32      // uint8_t
#define LOG_fE2Low0Dpt5In                       28      // uint8_t
#define LOG_fE2Low1Dpt5In                       29      // uint8_t
#define LOG_fE2Low2Dpt5In                       30      // uint8_t
#define LOG_fE2Low3Dpt5In                       31      // uint8_t
#define LOG_fE2Low4Dpt5In                       32      // uint8_t
#define LOG_fE2Low5Dpt5In                       33      // uint8_t
#define LOG_fE2Low6Dpt5In                       34      // uint8_t
#define LOG_fE2LowDpt5Fix                       28      // uint8_t
#define LOG_fE2LowDpt5001                       28      // uint8_t
#define LOG_fE2HighDpt5001                      32      // uint8_t
#define LOG_fE2Low0Dpt5xIn                      28      // uint8_t
#define LOG_fE2Low1Dpt5xIn                      29      // uint8_t
#define LOG_fE2Low2Dpt5xIn                      30      // uint8_t
#define LOG_fE2Low3Dpt5xIn                      31      // uint8_t
#define LOG_fE2Low4Dpt5xIn                      32      // uint8_t
#define LOG_fE2Low5Dpt5xIn                      33      // uint8_t
#define LOG_fE2Low6Dpt5xIn                      34      // uint8_t
#define LOG_fE2LowDpt5xFix                      28      // uint8_t
#define LOG_fE2LowDpt6                          28      // int8_t
#define LOG_fE2HighDpt6                         32      // int8_t
#define LOG_fE2Low0Dpt6In                       28      // int8_t
#define LOG_fE2Low1Dpt6In                       29      // int8_t
#define LOG_fE2Low2Dpt6In                       30      // int8_t
#define LOG_fE2Low3Dpt6In                       31      // int8_t
#define LOG_fE2Low4Dpt6In                       32      // int8_t
#define LOG_fE2Low5Dpt6In                       33      // int8_t
#define LOG_fE2Low6Dpt6In                       34      // int8_t
#define LOG_fE2LowDpt6Fix                       28      // int8_t
#define LOG_fE2LowDpt7                          28      // uint16_t
#define LOG_fE2HighDpt7                         32      // uint16_t
#define LOG_fE2Low0Dpt7In                       28      // uint16_t
#define LOG_fE2Low1Dpt7In                       30      // uint16_t
#define LOG_fE2Low2Dpt7In                       32      // uint16_t
#define LOG_fE2LowDpt7Fix                       28      // uint16_t
#define LOG_fE2LowDpt8                          28      // int16_t
#define LOG_fE2HighDpt8                         32      // int16_t
#define LOG_fE2Low0Dpt8In                       28      // int16_t
#define LOG_fE2Low1Dpt8In                       30      // int16_t
#define LOG_fE2Low2Dpt8In                       32      // int16_t
#define LOG_fE2LowDpt8Fix                       28      // int16_t
#define LOG_fE2LowDpt9                          28      // float
#define LOG_fE2HighDpt9                         32      // float
#define LOG_fE2LowDpt9Fix                       28      // float
#define LOG_fE2LowDpt12                         28      // uint32_t
#define LOG_fE2HighDpt12                        32      // uint32_t
#define LOG_fE2LowDpt12Fix                      28      // uint32_t
#define LOG_fE2LowDpt13                         28      // int32_t
#define LOG_fE2HighDpt13                        32      // int32_t
#define LOG_fE2LowDpt13Fix                      28      // int32_t
#define LOG_fE2LowDpt14                         28      // float
#define LOG_fE2HighDpt14                        32      // float
#define LOG_fE2LowDpt14Fix                      28      // float
#define LOG_fE2Low0Dpt17                        28      // 8 Bits, Bit 7-0
#define LOG_fE2Low1Dpt17                        29      // 8 Bits, Bit 7-0
#define LOG_fE2Low2Dpt17                        30      // 8 Bits, Bit 7-0
#define LOG_fE2Low3Dpt17                        31      // 8 Bits, Bit 7-0
#define LOG_fE2Low4Dpt17                        32      // 8 Bits, Bit 7-0
#define LOG_fE2Low5Dpt17                        33      // 8 Bits, Bit 7-0
#define LOG_fE2Low6Dpt17                        34      // 8 Bits, Bit 7-0
#define LOG_fE2Low7Dpt17                        35      // 8 Bits, Bit 7-0
#define LOG_fE2LowDpt17Fix                      28      // 8 Bits, Bit 7-0
#define LOG_fE2LowDptRGB                        28      // int32_t
#define LOG_fE2HighDptRGB                       32      // int32_t
#define LOG_fE2LowDptRGBFix                     28      // int32_t
#define LOG_fTd1DuskDawn                         6      // 4 Bits, Bit 7-4
#define     LOG_fTd1DuskDawnMask 0xF0
#define     LOG_fTd1DuskDawnShift 4
#define LOG_fTd2DuskDawn                         6      // 4 Bits, Bit 3-0
#define     LOG_fTd2DuskDawnMask 0x0F
#define     LOG_fTd2DuskDawnShift 0
#define LOG_fTd3DuskDawn                         7      // 4 Bits, Bit 7-4
#define     LOG_fTd3DuskDawnMask 0xF0
#define     LOG_fTd3DuskDawnShift 4
#define LOG_fTd4DuskDawn                         7      // 4 Bits, Bit 3-0
#define     LOG_fTd4DuskDawnMask 0x0F
#define     LOG_fTd4DuskDawnShift 0
#define LOG_fTd5DuskDawn                         8      // 4 Bits, Bit 7-4
#define     LOG_fTd5DuskDawnMask 0xF0
#define     LOG_fTd5DuskDawnShift 4
#define LOG_fTd6DuskDawn                         8      // 4 Bits, Bit 3-0
#define     LOG_fTd6DuskDawnMask 0x0F
#define     LOG_fTd6DuskDawnShift 0
#define LOG_fTd7DuskDawn                         9      // 4 Bits, Bit 7-4
#define     LOG_fTd7DuskDawnMask 0xF0
#define     LOG_fTd7DuskDawnShift 4
#define LOG_fTd8DuskDawn                         9      // 4 Bits, Bit 3-0
#define     LOG_fTd8DuskDawnMask 0x0F
#define     LOG_fTd8DuskDawnShift 0
#define LOG_fTYearDay                           10      // 2 Bits, Bit 7-6
#define     LOG_fTYearDayMask 0xC0
#define     LOG_fTYearDayShift 6
#define LOG_fTHoliday                           10      // 2 Bits, Bit 5-4
#define     LOG_fTHolidayMask 0x30
#define     LOG_fTHolidayShift 4
#define LOG_fTRestoreState                      10      // 2 Bits, Bit 3-2
#define     LOG_fTRestoreStateMask 0x0C
#define     LOG_fTRestoreStateShift 2
#define LOG_fTVacation                          10      // 2 Bits, Bit 1-0
#define     LOG_fTVacationMask 0x03
#define     LOG_fTVacationShift 0
#define LOG_fTd1ValueNum                        11      // uint8_t
#define LOG_fTd2ValueNum                        12      // uint8_t
#define LOG_fTd3ValueNum                        13      // uint8_t
#define LOG_fTd4ValueNum                        14      // uint8_t
#define LOG_fTd5ValueNum                        15      // uint8_t
#define LOG_fTd6ValueNum                        16      // uint8_t
#define LOG_fTd7ValueNum                        17      // uint8_t
#define LOG_fTd8ValueNum                        18      // uint8_t
#define LOG_fTd1Value                           20      // 1 Bit, Bit 7
#define     LOG_fTd1ValueMask 0x80
#define     LOG_fTd1ValueShift 7
#define LOG_fTd1Degree                          20      // 6 Bits, Bit 6-1
#define     LOG_fTd1DegreeMask 0x7E
#define     LOG_fTd1DegreeShift 1
#define LOG_fTd1HourAbs                         20      // 5 Bits, Bit 5-1
#define     LOG_fTd1HourAbsMask 0x3E
#define     LOG_fTd1HourAbsShift 1
#define LOG_fTd1HourRel                         20      // 5 Bits, Bit 5-1
#define     LOG_fTd1HourRelMask 0x3E
#define     LOG_fTd1HourRelShift 1
#define LOG_fTd1HourRelShort                    20      // 5 Bits, Bit 5-1
#define     LOG_fTd1HourRelShortMask 0x3E
#define     LOG_fTd1HourRelShortShift 1
#define LOG_fTd1MinuteAbs                       20      // 6 Bits, Bit 0--5
#define LOG_fTd1MinuteRel                       20      // 6 Bits, Bit 0--5
#define LOG_fTd1Weekday                         21      // 3 Bits, Bit 2-0
#define     LOG_fTd1WeekdayMask 0x07
#define     LOG_fTd1WeekdayShift 0
#define LOG_fTd2Value                           22      // 1 Bit, Bit 7
#define     LOG_fTd2ValueMask 0x80
#define     LOG_fTd2ValueShift 7
#define LOG_fTd2Degree                          22      // 6 Bits, Bit 6-1
#define     LOG_fTd2DegreeMask 0x7E
#define     LOG_fTd2DegreeShift 1
#define LOG_fTd2HourAbs                         22      // 5 Bits, Bit 5-1
#define     LOG_fTd2HourAbsMask 0x3E
#define     LOG_fTd2HourAbsShift 1
#define LOG_fTd2HourRel                         22      // 5 Bits, Bit 5-1
#define     LOG_fTd2HourRelMask 0x3E
#define     LOG_fTd2HourRelShift 1
#define LOG_fTd2HourRelShort                    22      // 5 Bits, Bit 5-1
#define     LOG_fTd2HourRelShortMask 0x3E
#define     LOG_fTd2HourRelShortShift 1
#define LOG_fTd2MinuteAbs                       22      // 6 Bits, Bit 0--5
#define LOG_fTd2MinuteRel                       22      // 6 Bits, Bit 0--5
#define LOG_fTd2Weekday                         23      // 3 Bits, Bit 2-0
#define     LOG_fTd2WeekdayMask 0x07
#define     LOG_fTd2WeekdayShift 0
#define LOG_fTd3Value                           24      // 1 Bit, Bit 7
#define     LOG_fTd3ValueMask 0x80
#define     LOG_fTd3ValueShift 7
#define LOG_fTd3Degree                          24      // 6 Bits, Bit 6-1
#define     LOG_fTd3DegreeMask 0x7E
#define     LOG_fTd3DegreeShift 1
#define LOG_fTd3HourAbs                         24      // 5 Bits, Bit 5-1
#define     LOG_fTd3HourAbsMask 0x3E
#define     LOG_fTd3HourAbsShift 1
#define LOG_fTd3HourRel                         24      // 5 Bits, Bit 5-1
#define     LOG_fTd3HourRelMask 0x3E
#define     LOG_fTd3HourRelShift 1
#define LOG_fTd3HourRelShort                    24      // 5 Bits, Bit 5-1
#define     LOG_fTd3HourRelShortMask 0x3E
#define     LOG_fTd3HourRelShortShift 1
#define LOG_fTd3MinuteAbs                       24      // 6 Bits, Bit 0--5
#define LOG_fTd3MinuteRel                       24      // 6 Bits, Bit 0--5
#define LOG_fTd3Weekday                         25      // 3 Bits, Bit 2-0
#define     LOG_fTd3WeekdayMask 0x07
#define     LOG_fTd3WeekdayShift 0
#define LOG_fTd4Value                           26      // 1 Bit, Bit 7
#define     LOG_fTd4ValueMask 0x80
#define     LOG_fTd4ValueShift 7
#define LOG_fTd4Degree                          26      // 6 Bits, Bit 6-1
#define     LOG_fTd4DegreeMask 0x7E
#define     LOG_fTd4DegreeShift 1
#define LOG_fTd4HourAbs                         26      // 5 Bits, Bit 5-1
#define     LOG_fTd4HourAbsMask 0x3E
#define     LOG_fTd4HourAbsShift 1
#define LOG_fTd4HourRel                         26      // 5 Bits, Bit 5-1
#define     LOG_fTd4HourRelMask 0x3E
#define     LOG_fTd4HourRelShift 1
#define LOG_fTd4HourRelShort                    26      // 5 Bits, Bit 5-1
#define     LOG_fTd4HourRelShortMask 0x3E
#define     LOG_fTd4HourRelShortShift 1
#define LOG_fTd4MinuteAbs                       26      // 6 Bits, Bit 0--5
#define LOG_fTd4MinuteRel                       26      // 6 Bits, Bit 0--5
#define LOG_fTd4Weekday                         27      // 3 Bits, Bit 2-0
#define     LOG_fTd4WeekdayMask 0x07
#define     LOG_fTd4WeekdayShift 0
#define LOG_fTd5Value                           28      // 1 Bit, Bit 7
#define     LOG_fTd5ValueMask 0x80
#define     LOG_fTd5ValueShift 7
#define LOG_fTd5Degree                          28      // 6 Bits, Bit 6-1
#define     LOG_fTd5DegreeMask 0x7E
#define     LOG_fTd5DegreeShift 1
#define LOG_fTd5HourAbs                         28      // 5 Bits, Bit 5-1
#define     LOG_fTd5HourAbsMask 0x3E
#define     LOG_fTd5HourAbsShift 1
#define LOG_fTd5HourRel                         28      // 5 Bits, Bit 5-1
#define     LOG_fTd5HourRelMask 0x3E
#define     LOG_fTd5HourRelShift 1
#define LOG_fTd5HourRelShort                    28      // 5 Bits, Bit 5-1
#define     LOG_fTd5HourRelShortMask 0x3E
#define     LOG_fTd5HourRelShortShift 1
#define LOG_fTd5MinuteAbs                       28      // 6 Bits, Bit 0--5
#define LOG_fTd5MinuteRel                       28      // 6 Bits, Bit 0--5
#define LOG_fTd5Weekday                         29      // 3 Bits, Bit 2-0
#define     LOG_fTd5WeekdayMask 0x07
#define     LOG_fTd5WeekdayShift 0
#define LOG_fTd6Value                           30      // 1 Bit, Bit 7
#define     LOG_fTd6ValueMask 0x80
#define     LOG_fTd6ValueShift 7
#define LOG_fTd6Degree                          30      // 6 Bits, Bit 6-1
#define     LOG_fTd6DegreeMask 0x7E
#define     LOG_fTd6DegreeShift 1
#define LOG_fTd6HourAbs                         30      // 5 Bits, Bit 5-1
#define     LOG_fTd6HourAbsMask 0x3E
#define     LOG_fTd6HourAbsShift 1
#define LOG_fTd6HourRel                         30      // 5 Bits, Bit 5-1
#define     LOG_fTd6HourRelMask 0x3E
#define     LOG_fTd6HourRelShift 1
#define LOG_fTd6HourRelShort                    30      // 5 Bits, Bit 5-1
#define     LOG_fTd6HourRelShortMask 0x3E
#define     LOG_fTd6HourRelShortShift 1
#define LOG_fTd6MinuteAbs                       30      // 6 Bits, Bit 0--5
#define LOG_fTd6MinuteRel                       30      // 6 Bits, Bit 0--5
#define LOG_fTd6Weekday                         31      // 3 Bits, Bit 2-0
#define     LOG_fTd6WeekdayMask 0x07
#define     LOG_fTd6WeekdayShift 0
#define LOG_fTd7Value                           32      // 1 Bit, Bit 7
#define     LOG_fTd7ValueMask 0x80
#define     LOG_fTd7ValueShift 7
#define LOG_fTd7Degree                          32      // 6 Bits, Bit 6-1
#define     LOG_fTd7DegreeMask 0x7E
#define     LOG_fTd7DegreeShift 1
#define LOG_fTd7HourAbs                         32      // 5 Bits, Bit 5-1
#define     LOG_fTd7HourAbsMask 0x3E
#define     LOG_fTd7HourAbsShift 1
#define LOG_fTd7HourRel                         32      // 5 Bits, Bit 5-1
#define     LOG_fTd7HourRelMask 0x3E
#define     LOG_fTd7HourRelShift 1
#define LOG_fTd7HourRelShort                    32      // 5 Bits, Bit 5-1
#define     LOG_fTd7HourRelShortMask 0x3E
#define     LOG_fTd7HourRelShortShift 1
#define LOG_fTd7MinuteAbs                       32      // 6 Bits, Bit 0--5
#define LOG_fTd7MinuteRel                       32      // 6 Bits, Bit 0--5
#define LOG_fTd7Weekday                         33      // 3 Bits, Bit 2-0
#define     LOG_fTd7WeekdayMask 0x07
#define     LOG_fTd7WeekdayShift 0
#define LOG_fTd8Value                           34      // 1 Bit, Bit 7
#define     LOG_fTd8ValueMask 0x80
#define     LOG_fTd8ValueShift 7
#define LOG_fTd8Degree                          34      // 6 Bits, Bit 6-1
#define     LOG_fTd8DegreeMask 0x7E
#define     LOG_fTd8DegreeShift 1
#define LOG_fTd8HourAbs                         34      // 5 Bits, Bit 5-1
#define     LOG_fTd8HourAbsMask 0x3E
#define     LOG_fTd8HourAbsShift 1
#define LOG_fTd8HourRel                         34      // 5 Bits, Bit 5-1
#define     LOG_fTd8HourRelMask 0x3E
#define     LOG_fTd8HourRelShift 1
#define LOG_fTd8HourRelShort                    34      // 5 Bits, Bit 5-1
#define     LOG_fTd8HourRelShortMask 0x3E
#define     LOG_fTd8HourRelShortShift 1
#define LOG_fTd8MinuteAbs                       34      // 6 Bits, Bit 0--5
#define LOG_fTd8MinuteRel                       34      // 6 Bits, Bit 0--5
#define LOG_fTd8Weekday                         35      // 3 Bits, Bit 2-0
#define     LOG_fTd8WeekdayMask 0x07
#define     LOG_fTd8WeekdayShift 0
#define LOG_fTy1Weekday1                        28      // 1 Bit, Bit 7
#define     LOG_fTy1Weekday1Mask 0x80
#define     LOG_fTy1Weekday1Shift 7
#define LOG_fTy1Weekday2                        28      // 1 Bit, Bit 6
#define     LOG_fTy1Weekday2Mask 0x40
#define     LOG_fTy1Weekday2Shift 6
#define LOG_fTy1Weekday3                        28      // 1 Bit, Bit 5
#define     LOG_fTy1Weekday3Mask 0x20
#define     LOG_fTy1Weekday3Shift 5
#define LOG_fTy1Weekday4                        28      // 1 Bit, Bit 4
#define     LOG_fTy1Weekday4Mask 0x10
#define     LOG_fTy1Weekday4Shift 4
#define LOG_fTy1Weekday5                        28      // 1 Bit, Bit 3
#define     LOG_fTy1Weekday5Mask 0x08
#define     LOG_fTy1Weekday5Shift 3
#define LOG_fTy1Weekday6                        28      // 1 Bit, Bit 2
#define     LOG_fTy1Weekday6Mask 0x04
#define     LOG_fTy1Weekday6Shift 2
#define LOG_fTy1Weekday7                        28      // 1 Bit, Bit 1
#define     LOG_fTy1Weekday7Mask 0x02
#define     LOG_fTy1Weekday7Shift 1
#define LOG_fTy1Day                             28      // 7 Bits, Bit 7-1
#define     LOG_fTy1DayMask 0xFE
#define     LOG_fTy1DayShift 1
#define LOG_fTy1IsWeekday                       28      // 1 Bit, Bit 0
#define     LOG_fTy1IsWeekdayMask 0x01
#define     LOG_fTy1IsWeekdayShift 0
#define LOG_fTy1Month                           29      // 4 Bits, Bit 7-4
#define     LOG_fTy1MonthMask 0xF0
#define     LOG_fTy1MonthShift 4
#define LOG_fTy2Weekday1                        30      // 1 Bit, Bit 7
#define     LOG_fTy2Weekday1Mask 0x80
#define     LOG_fTy2Weekday1Shift 7
#define LOG_fTy2Weekday2                        30      // 1 Bit, Bit 6
#define     LOG_fTy2Weekday2Mask 0x40
#define     LOG_fTy2Weekday2Shift 6
#define LOG_fTy2Weekday3                        30      // 1 Bit, Bit 5
#define     LOG_fTy2Weekday3Mask 0x20
#define     LOG_fTy2Weekday3Shift 5
#define LOG_fTy2Weekday4                        30      // 1 Bit, Bit 4
#define     LOG_fTy2Weekday4Mask 0x10
#define     LOG_fTy2Weekday4Shift 4
#define LOG_fTy2Weekday5                        30      // 1 Bit, Bit 3
#define     LOG_fTy2Weekday5Mask 0x08
#define     LOG_fTy2Weekday5Shift 3
#define LOG_fTy2Weekday6                        30      // 1 Bit, Bit 2
#define     LOG_fTy2Weekday6Mask 0x04
#define     LOG_fTy2Weekday6Shift 2
#define LOG_fTy2Weekday7                        30      // 1 Bit, Bit 1
#define     LOG_fTy2Weekday7Mask 0x02
#define     LOG_fTy2Weekday7Shift 1
#define LOG_fTy2Day                             30      // 7 Bits, Bit 7-1
#define     LOG_fTy2DayMask 0xFE
#define     LOG_fTy2DayShift 1
#define LOG_fTy2IsWeekday                       30      // 1 Bit, Bit 0
#define     LOG_fTy2IsWeekdayMask 0x01
#define     LOG_fTy2IsWeekdayShift 0
#define LOG_fTy2Month                           31      // 4 Bits, Bit 7-4
#define     LOG_fTy2MonthMask 0xF0
#define     LOG_fTy2MonthShift 4
#define LOG_fTy3Weekday1                        32      // 1 Bit, Bit 7
#define     LOG_fTy3Weekday1Mask 0x80
#define     LOG_fTy3Weekday1Shift 7
#define LOG_fTy3Weekday2                        32      // 1 Bit, Bit 6
#define     LOG_fTy3Weekday2Mask 0x40
#define     LOG_fTy3Weekday2Shift 6
#define LOG_fTy3Weekday3                        32      // 1 Bit, Bit 5
#define     LOG_fTy3Weekday3Mask 0x20
#define     LOG_fTy3Weekday3Shift 5
#define LOG_fTy3Weekday4                        32      // 1 Bit, Bit 4
#define     LOG_fTy3Weekday4Mask 0x10
#define     LOG_fTy3Weekday4Shift 4
#define LOG_fTy3Weekday5                        32      // 1 Bit, Bit 3
#define     LOG_fTy3Weekday5Mask 0x08
#define     LOG_fTy3Weekday5Shift 3
#define LOG_fTy3Weekday6                        32      // 1 Bit, Bit 2
#define     LOG_fTy3Weekday6Mask 0x04
#define     LOG_fTy3Weekday6Shift 2
#define LOG_fTy3Weekday7                        32      // 1 Bit, Bit 1
#define     LOG_fTy3Weekday7Mask 0x02
#define     LOG_fTy3Weekday7Shift 1
#define LOG_fTy3Day                             32      // 7 Bits, Bit 7-1
#define     LOG_fTy3DayMask 0xFE
#define     LOG_fTy3DayShift 1
#define LOG_fTy3IsWeekday                       32      // 1 Bit, Bit 0
#define     LOG_fTy3IsWeekdayMask 0x01
#define     LOG_fTy3IsWeekdayShift 0
#define LOG_fTy3Month                           33      // 4 Bits, Bit 7-4
#define     LOG_fTy3MonthMask 0xF0
#define     LOG_fTy3MonthShift 4
#define LOG_fTy4Weekday1                        34      // 1 Bit, Bit 7
#define     LOG_fTy4Weekday1Mask 0x80
#define     LOG_fTy4Weekday1Shift 7
#define LOG_fTy4Weekday2                        34      // 1 Bit, Bit 6
#define     LOG_fTy4Weekday2Mask 0x40
#define     LOG_fTy4Weekday2Shift 6
#define LOG_fTy4Weekday3                        34      // 1 Bit, Bit 5
#define     LOG_fTy4Weekday3Mask 0x20
#define     LOG_fTy4Weekday3Shift 5
#define LOG_fTy4Weekday4                        34      // 1 Bit, Bit 4
#define     LOG_fTy4Weekday4Mask 0x10
#define     LOG_fTy4Weekday4Shift 4
#define LOG_fTy4Weekday5                        34      // 1 Bit, Bit 3
#define     LOG_fTy4Weekday5Mask 0x08
#define     LOG_fTy4Weekday5Shift 3
#define LOG_fTy4Weekday6                        34      // 1 Bit, Bit 2
#define     LOG_fTy4Weekday6Mask 0x04
#define     LOG_fTy4Weekday6Shift 2
#define LOG_fTy4Weekday7                        34      // 1 Bit, Bit 1
#define     LOG_fTy4Weekday7Mask 0x02
#define     LOG_fTy4Weekday7Shift 1
#define LOG_fTy4Day                             34      // 7 Bits, Bit 7-1
#define     LOG_fTy4DayMask 0xFE
#define     LOG_fTy4DayShift 1
#define LOG_fTy4IsWeekday                       34      // 1 Bit, Bit 0
#define     LOG_fTy4IsWeekdayMask 0x01
#define     LOG_fTy4IsWeekdayShift 0
#define LOG_fTy4Month                           35      // 4 Bits, Bit 7-4
#define     LOG_fTy4MonthMask 0xF0
#define     LOG_fTy4MonthShift 4
#define LOG_fI1                                 36      // 2 Bits, Bit 7-6
#define     LOG_fI1Mask 0xC0
#define     LOG_fI1Shift 6
#define LOG_fI1Kind                             36      // 2 Bits, Bit 5-4
#define     LOG_fI1KindMask 0x30
#define     LOG_fI1KindShift 4
#define LOG_fI1AsTrigger                        36      // 1 Bit, Bit 3
#define     LOG_fI1AsTriggerMask 0x08
#define     LOG_fI1AsTriggerShift 3
#define LOG_fI1Function                         37      // uint8_t
#define LOG_fI1FunctionRel                      37      // int8_t
#define LOG_fI2                                 38      // 2 Bits, Bit 7-6
#define     LOG_fI2Mask 0xC0
#define     LOG_fI2Shift 6
#define LOG_fI2Kind                             38      // 2 Bits, Bit 5-4
#define     LOG_fI2KindMask 0x30
#define     LOG_fI2KindShift 4
#define LOG_fI2AsTrigger                        38      // 1 Bit, Bit 3
#define     LOG_fI2AsTriggerMask 0x08
#define     LOG_fI2AsTriggerShift 3
#define LOG_fI2Function                         39      // uint8_t
#define LOG_fI2FunctionRel                      39      // int8_t
#define LOG_fOStairtimeBase                     40      // 2 Bits, Bit 7-6
#define     LOG_fOStairtimeBaseMask 0xC0
#define     LOG_fOStairtimeBaseShift 6
#define LOG_fOStairtimeTime                     40      // 14 Bits, Bit 13-0
#define     LOG_fOStairtimeTimeMask 0x3FFF
#define     LOG_fOStairtimeTimeShift 0
#define LOG_fOBlinkBase                         42      // 2 Bits, Bit 7-6
#define     LOG_fOBlinkBaseMask 0xC0
#define     LOG_fOBlinkBaseShift 6
#define LOG_fOBlinkTime                         42      // 14 Bits, Bit 13-0
#define     LOG_fOBlinkTimeMask 0x3FFF
#define     LOG_fOBlinkTimeShift 0
#define LOG_fODelayOnBase                       44      // 2 Bits, Bit 7-6
#define     LOG_fODelayOnBaseMask 0xC0
#define     LOG_fODelayOnBaseShift 6
#define LOG_fODelayOnTime                       44      // 14 Bits, Bit 13-0
#define     LOG_fODelayOnTimeMask 0x3FFF
#define     LOG_fODelayOnTimeShift 0
#define LOG_fODelayOffBase                      46      // 2 Bits, Bit 7-6
#define     LOG_fODelayOffBaseMask 0xC0
#define     LOG_fODelayOffBaseShift 6
#define LOG_fODelayOffTime                      46      // 14 Bits, Bit 13-0
#define     LOG_fODelayOffTimeMask 0x3FFF
#define     LOG_fODelayOffTimeShift 0
#define LOG_fORepeatOnBase                      48      // 2 Bits, Bit 7-6
#define     LOG_fORepeatOnBaseMask 0xC0
#define     LOG_fORepeatOnBaseShift 6
#define LOG_fORepeatOnTime                      48      // 14 Bits, Bit 13-0
#define     LOG_fORepeatOnTimeMask 0x3FFF
#define     LOG_fORepeatOnTimeShift 0
#define LOG_fORepeatOffBase                     50      // 2 Bits, Bit 7-6
#define     LOG_fORepeatOffBaseMask 0xC0
#define     LOG_fORepeatOffBaseShift 6
#define LOG_fORepeatOffTime                     50      // 14 Bits, Bit 13-0
#define     LOG_fORepeatOffTimeMask 0x3FFF
#define     LOG_fORepeatOffTimeShift 0
#define LOG_fODelay                             52      // 1 Bit, Bit 7
#define     LOG_fODelayMask 0x80
#define     LOG_fODelayShift 7
#define LOG_fODelayOnRepeat                     52      // 2 Bits, Bit 6-5
#define     LOG_fODelayOnRepeatMask 0x60
#define     LOG_fODelayOnRepeatShift 5
#define LOG_fODelayOnReset                      52      // 1 Bit, Bit 4
#define     LOG_fODelayOnResetMask 0x10
#define     LOG_fODelayOnResetShift 4
#define LOG_fODelayOffRepeat                    52      // 2 Bits, Bit 3-2
#define     LOG_fODelayOffRepeatMask 0x0C
#define     LOG_fODelayOffRepeatShift 2
#define LOG_fODelayOffReset                     52      // 1 Bit, Bit 1
#define     LOG_fODelayOffResetMask 0x02
#define     LOG_fODelayOffResetShift 1
#define LOG_fOStair                             52      // 1 Bit, Bit 0
#define     LOG_fOStairMask 0x01
#define     LOG_fOStairShift 0
#define LOG_fORetrigger                         53      // 1 Bit, Bit 7
#define     LOG_fORetriggerMask 0x80
#define     LOG_fORetriggerShift 7
#define LOG_fOStairOff                          53      // 1 Bit, Bit 6
#define     LOG_fOStairOffMask 0x40
#define     LOG_fOStairOffShift 6
#define LOG_fORepeat                            53      // 1 Bit, Bit 5
#define     LOG_fORepeatMask 0x20
#define     LOG_fORepeatShift 5
#define LOG_fOOutputFilter                      53      // 2 Bits, Bit 4-3
#define     LOG_fOOutputFilterMask 0x18
#define     LOG_fOOutputFilterShift 3
#define LOG_fOSendOnChange                      53      // 1 Bit, Bit 2
#define     LOG_fOSendOnChangeMask 0x04
#define     LOG_fOSendOnChangeShift 2
#define LOG_fODpt                               54      // 8 Bits, Bit 7-0
#define LOG_fOOn                                55      // 8 Bits, Bit 7-0
#define LOG_fOOnBuzzer                          55      // 8 Bits, Bit 7-0
#define LOG_fOOnLed                             55      // 8 Bits, Bit 7-0
#define LOG_fOOnAll                             55      // 8 Bits, Bit 7-0
#define LOG_fOOnTone                            56      // 8 Bits, Bit 7-0
#define LOG_fOOnDpt1                            56      // 8 Bits, Bit 7-0
#define LOG_fOOnDpt2                            56      // 8 Bits, Bit 7-0
#define LOG_fOOnDpt3Dir                         56      // 5 Bits, Bit 7-3
#define     LOG_fOOnDpt3DirMask 0xF8
#define     LOG_fOOnDpt3DirShift 3
#define LOG_fOOnDpt3Dim                         56      // 3 Bits, Bit 2-0
#define     LOG_fOOnDpt3DimMask 0x07
#define     LOG_fOOnDpt3DimShift 0
#define LOG_fOOnDpt5                            56      // uint8_t
#define LOG_fOOnDpt5001                         56      // uint8_t
#define LOG_fOOnDpt6                            56      // int8_t
#define LOG_fOOnDpt7                            56      // uint16_t
#define LOG_fOOnDpt8                            56      // int16_t
#define LOG_fOOnDpt9                            56      // float
#define LOG_fOOnDpt12                           56      // uint32_t
#define LOG_fOOnDpt13                           56      // int32_t
#define LOG_fOOnDpt14                           56      // float
#define LOG_fOOnDpt16                           56      // char*, 14 Byte
#define LOG_fOOnDpt17                           56      // 8 Bits, Bit 7-0
#define LOG_fOOnRGB                             56      // 24 Bits, Bit 31-8
#define     LOG_fOOnRGBMask 0xFFFFFF00
#define     LOG_fOOnRGBShift 8
#define LOG_fOOnPAArea                          56      // 4 Bits, Bit 7-4
#define     LOG_fOOnPAAreaMask 0xF0
#define     LOG_fOOnPAAreaShift 4
#define LOG_fOOnPALine                          56      // 4 Bits, Bit 3-0
#define     LOG_fOOnPALineMask 0x0F
#define     LOG_fOOnPALineShift 0
#define LOG_fOOnPADevice                        57      // uint8_t
#define LOG_fOOnFunction                        56      // 8 Bits, Bit 7-0
#define LOG_fOOnKOKind                          61      // 2 Bits, Bit 7-6
#define     LOG_fOOnKOKindMask 0xC0
#define     LOG_fOOnKOKindShift 6
#define LOG_fOOnKONumber                        56      // uint16_t
#define LOG_fOOnKONumberRel                     56      // int16_t
#define LOG_fOOnKODpt                           58      // 8 Bits, Bit 7-0
#define LOG_fOOnKOSend                          61      // 2 Bits, Bit 5-4
#define     LOG_fOOnKOSendMask 0x30
#define     LOG_fOOnKOSendShift 4
#define LOG_fOOnKOSendNumber                    62      // uint16_t
#define LOG_fOOnKOSendNumberRel                 62      // int16_t
#define LOG_fOOff                               70      // 8 Bits, Bit 7-0
#define LOG_fOOffBuzzer                         70      // 8 Bits, Bit 7-0
#define LOG_fOOffLed                            70      // 8 Bits, Bit 7-0
#define LOG_fOOffAll                            70      // 8 Bits, Bit 7-0
#define LOG_fOOffTone                           71      // 8 Bits, Bit 7-0
#define LOG_fOOffDpt1                           71      // 8 Bits, Bit 7-0
#define LOG_fOOffDpt2                           71      // 8 Bits, Bit 7-0
#define LOG_fOOffDpt3Dir                        71      // 5 Bits, Bit 7-3
#define     LOG_fOOffDpt3DirMask 0xF8
#define     LOG_fOOffDpt3DirShift 3
#define LOG_fOOffDpt3Dim                        71      // 3 Bits, Bit 2-0
#define     LOG_fOOffDpt3DimMask 0x07
#define     LOG_fOOffDpt3DimShift 0
#define LOG_fOOffDpt5                           71      // uint8_t
#define LOG_fOOffDpt5001                        71      // uint8_t
#define LOG_fOOffDpt6                           71      // int8_t
#define LOG_fOOffDpt7                           71      // uint16_t
#define LOG_fOOffDpt8                           71      // int16_t
#define LOG_fOOffDpt9                           71      // float
#define LOG_fOOffDpt12                          71      // uint32_t
#define LOG_fOOffDpt13                          71      // int32_t
#define LOG_fOOffDpt14                          71      // float
#define LOG_fOOffDpt16                          71      // char*, 14 Byte
#define LOG_fOOffDpt17                          71      // 8 Bits, Bit 7-0
#define LOG_fOOffRGB                            71      // 24 Bits, Bit 31-8
#define     LOG_fOOffRGBMask 0xFFFFFF00
#define     LOG_fOOffRGBShift 8
#define LOG_fOOffPAArea                         71      // 4 Bits, Bit 7-4
#define     LOG_fOOffPAAreaMask 0xF0
#define     LOG_fOOffPAAreaShift 4
#define LOG_fOOffPALine                         71      // 4 Bits, Bit 3-0
#define     LOG_fOOffPALineMask 0x0F
#define     LOG_fOOffPALineShift 0
#define LOG_fOOffPADevice                       72      // uint8_t
#define LOG_fOOffFunction                       71      // 8 Bits, Bit 7-0
#define LOG_fOOffKOKind                         76      // 2 Bits, Bit 7-6
#define     LOG_fOOffKOKindMask 0xC0
#define     LOG_fOOffKOKindShift 6
#define LOG_fOOffKONumber                       71      // uint16_t
#define LOG_fOOffKONumberRel                    71      // int16_t
#define LOG_fOOffKODpt                          73      // 8 Bits, Bit 7-0
#define LOG_fOOffKOSend                         76      // 2 Bits, Bit 5-4
#define     LOG_fOOffKOSendMask 0x30
#define     LOG_fOOffKOSendShift 4
#define LOG_fOOffKOSendNumber                   77      // uint16_t
#define LOG_fOOffKOSendNumberRel                77      // int16_t

// Zeit bis der Kanal nach einem Neustart aktiv wird
#define ParamLOG_fChannelDelayBase                   ((knx.paramByte(LOG_ParamCalcIndex(LOG_fChannelDelayBase)) & LOG_fChannelDelayBaseMask) >> LOG_fChannelDelayBaseShift)
// Zeit bis der Kanal nach einem Neustart aktiv wird
#define ParamLOG_fChannelDelayTime                   (knx.paramWord(LOG_ParamCalcIndex(LOG_fChannelDelayTime)) & LOG_fChannelDelayTimeMask)
// Zeit bis der Kanal nach einem Neustart aktiv wird (in Millisekunden)
#define ParamLOG_fChannelDelayTimeMS                 (paramDelay(knx.paramWord(LOG_ParamCalcIndex(LOG_fChannelDelayTime))))
// Logik-Operation
#define ParamLOG_fLogic                              (knx.paramByte(LOG_ParamCalcIndex(LOG_fLogic)))
// Logik auswerten
#define ParamLOG_fCalculate                          (knx.paramByte(LOG_ParamCalcIndex(LOG_fCalculate)) & LOG_fCalculateMask)
// Kanal deaktivieren (zu Testzwecken)
#define ParamLOG_fDisable                            ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fDisable)) & LOG_fDisableMask))
// Alarmausgabe (Buzzer oder LED trotz Sperre schalten)?
#define ParamLOG_fAlarm                              ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fAlarm)) & LOG_fAlarmMask))
// Tor geht sofort wieder zu
#define ParamLOG_fTGate                              ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTGate)) & LOG_fTGateMask))
// Wert EIN intern weiterleiten
#define ParamLOG_fOInternalOn                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOInternalOn)) & LOG_fOInternalOnMask))
// Wert AUS intern weiterleiten
#define ParamLOG_fOInternalOff                       ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOInternalOff)) & LOG_fOInternalOffMask))
// Logik sendet ihren Wert weiter
#define ParamLOG_fTrigger                            (knx.paramByte(LOG_ParamCalcIndex(LOG_fTrigger)))
//           Eingang 1
#define ParamLOG_fTriggerE1                          ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTriggerE1)) & LOG_fTriggerE1Mask))
//           Eingang 2
#define ParamLOG_fTriggerE2                          ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTriggerE2)) & LOG_fTriggerE2Mask))
//           Interner Eingang 3
#define ParamLOG_fTriggerI1                          ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTriggerI1)) & LOG_fTriggerI1Mask))
//           Interner Eingang 4
#define ParamLOG_fTriggerI2                          ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTriggerI2)) & LOG_fTriggerI2Mask))
// Logik sendet ihren Wert weiter
#define ParamLOG_fTriggerTime                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTriggerTime)))
// Beim schließen vom Tor wird
#define ParamLOG_fTriggerGateClose                   ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTriggerGateClose)) & LOG_fTriggerGateCloseMask) >> LOG_fTriggerGateCloseShift)
// Beim öffnen vom Tor wird
#define ParamLOG_fTriggerGateOpen                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTriggerGateOpen)) & LOG_fTriggerGateOpenMask) >> LOG_fTriggerGateOpenShift)
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE1ConvertInt                       ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1ConvertInt)) & LOG_fE1ConvertIntMask) >> LOG_fE1ConvertIntShift)
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE1Convert                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Convert)) & LOG_fE1ConvertMask) >> LOG_fE1ConvertShift)
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE1ConvertFloat                     ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1ConvertFloat)) & LOG_fE1ConvertFloatMask) >> LOG_fE1ConvertFloatShift)
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE1ConvertSpecial                   ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1ConvertSpecial)) & LOG_fE1ConvertSpecialMask) >> LOG_fE1ConvertSpecialShift)
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE1ConvertBool                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1ConvertBool)) & LOG_fE1ConvertBoolMask) >> LOG_fE1ConvertBoolShift)
// Eingang 1
#define ParamLOG_fE1                                 (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1)) & LOG_fE1Mask)
// DPT für Eingang
#define ParamLOG_fE1Dpt                              (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Dpt)))
// Eingang wird gelesen alle
#define ParamLOG_fE1RepeatBase                       ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1RepeatBase)) & LOG_fE1RepeatBaseMask) >> LOG_fE1RepeatBaseShift)
// Eingang wird gelesen alle
#define ParamLOG_fE1RepeatTime                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE1RepeatTime)) & LOG_fE1RepeatTimeMask)
// Eingang wird gelesen alle (in Millisekunden)
#define ParamLOG_fE1RepeatTimeMS                     (paramDelay(knx.paramWord(LOG_ParamCalcIndex(LOG_fE1RepeatTime))))
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fE1OtherKO                          (knx.paramWord(LOG_ParamCalcIndex(LOG_fE1OtherKO)))
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fE1OtherKORel                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE1OtherKORel)))
// Falls Vorbelegung aus dem Speicher nicht möglich oder nicht gewünscht, dann vorbelegen mit
#define ParamLOG_fE1Default                          (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Default)) & LOG_fE1DefaultMask)
// Eingang vorbelegen mit
#define ParamLOG_fE1DefaultExt                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1DefaultExt)) & LOG_fE1DefaultExtMask)
// Eingangswert speichern und beim nächsten Neustart als Vorbelegung nutzen?
#define ParamLOG_fE1DefaultEEPROM                    ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1DefaultEEPROM)) & LOG_fE1DefaultEEPROMMask))
// Nur so lange zyklisch lesen, bis erstes Telegramm eingeht
#define ParamLOG_fE1DefaultRepeat                    ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1DefaultRepeat)) & LOG_fE1DefaultRepeatMask))
// Kommunikationsobjekt für Eingang
#define ParamLOG_fE1UseOtherKO                       ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1UseOtherKO)) & LOG_fE1UseOtherKOMask) >> LOG_fE1UseOtherKOShift)
// Von-Wert
#define ParamLOG_fE1LowDelta                         ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE1LowDelta)))
// Bis-Wert
#define ParamLOG_fE1HighDelta                        ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE1HighDelta)))
// Von-Wert
#define ParamLOG_fE1LowDeltaFloat                    (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1LowDeltaFloat), Float_Enc_IEEE754Single))
// Bis-Wert
#define ParamLOG_fE1HighDeltaFloat                   (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1HighDeltaFloat), Float_Enc_IEEE754Single))
// Von-Wert
#define ParamLOG_fE1LowDeltaDouble                   (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1LowDeltaDouble), Float_Enc_IEEE754Single))
// Bis-Wert
#define ParamLOG_fE1HighDeltaDouble                  (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1HighDeltaDouble), Float_Enc_IEEE754Single))
// Nächste Zeile auswerten?
#define ParamLOG_fE1Low0Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low0Valid)) & LOG_fE1Low0ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE1Low1Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low1Valid)) & LOG_fE1Low1ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE1Low2Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low2Valid)) & LOG_fE1Low2ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE1Low3Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low3Valid)) & LOG_fE1Low3ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE1Low4Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low4Valid)) & LOG_fE1Low4ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE1Low5Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low5Valid)) & LOG_fE1Low5ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE1Low6Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low6Valid)) & LOG_fE1Low6ValidMask))
// Eingang ist EIN, wenn Wert gleich
#define ParamLOG_fE1Low0Dpt2                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low0Dpt2)))
// ... oder wenn Wert gleich 
#define ParamLOG_fE1Low1Dpt2                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low1Dpt2)))
// ... oder wenn Wert gleich 
#define ParamLOG_fE1Low2Dpt2                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low2Dpt2)))
// ... oder wenn Wert gleich 
#define ParamLOG_fE1Low3Dpt2                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low3Dpt2)))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt2Fix                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt2Fix)))
// Eingang ist EIN, wenn Wert gleich
#define ParamLOG_fE1Low0Dpt3Dir                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low0Dpt3Dir)) & LOG_fE1Low0Dpt3DirMask) >> LOG_fE1Low0Dpt3DirShift)
// 
#define ParamLOG_fE1Low0Dpt3Dim                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low0Dpt3Dim)) & LOG_fE1Low0Dpt3DimMask)
// ... oder wenn Wert gleich 
#define ParamLOG_fE1Low1Dpt3Dir                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low1Dpt3Dir)) & LOG_fE1Low1Dpt3DirMask) >> LOG_fE1Low1Dpt3DirShift)
// 
#define ParamLOG_fE1Low1Dpt3Dim                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low1Dpt3Dim)) & LOG_fE1Low1Dpt3DimMask)
// ... oder wenn Wert gleich 
#define ParamLOG_fE1Low2Dpt3Dir                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low2Dpt3Dir)) & LOG_fE1Low2Dpt3DirMask) >> LOG_fE1Low2Dpt3DirShift)
// 
#define ParamLOG_fE1Low2Dpt3Dim                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low2Dpt3Dim)) & LOG_fE1Low2Dpt3DimMask)
// ... oder wenn Wert gleich 
#define ParamLOG_fE1Low3Dpt3Dir                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low3Dpt3Dir)) & LOG_fE1Low3Dpt3DirMask) >> LOG_fE1Low3Dpt3DirShift)
// 
#define ParamLOG_fE1Low3Dpt3Dim                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low3Dpt3Dim)) & LOG_fE1Low3Dpt3DimMask)
// Eingang ist konstant
#define ParamLOG_fE1LowDpt3FixDir                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt3FixDir)) & LOG_fE1LowDpt3FixDirMask) >> LOG_fE1LowDpt3FixDirShift)
// 
#define ParamLOG_fE1LowDpt3FixDim                    (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt3FixDim)) & LOG_fE1LowDpt3FixDimMask)
// Von-Wert
#define ParamLOG_fE1LowDpt5                          (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt5)))
// Bis-Wert
#define ParamLOG_fE1HighDpt5                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1HighDpt5)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE1Low0Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low0Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE1Low1Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low1Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE1Low2Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low2Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE1Low3Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low3Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE1Low4Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low4Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE1Low5Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low5Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE1Low6Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low6Dpt5In)))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt5Fix                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt5Fix)))
// Von-Wert
#define ParamLOG_fE1LowDpt5001                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt5001)))
// Bis-Wert
#define ParamLOG_fE1HighDpt5001                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1HighDpt5001)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE1Low0Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low0Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE1Low1Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low1Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE1Low2Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low2Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE1Low3Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low3Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE1Low4Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low4Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE1Low5Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low5Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE1Low6Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low6Dpt5xIn)))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt5xFix                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt5xFix)))
// Von-Wert
#define ParamLOG_fE1LowDpt6                          ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt6)))
// Bis-Wert
#define ParamLOG_fE1HighDpt6                         ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1HighDpt6)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE1Low0Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low0Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE1Low1Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low1Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE1Low2Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low2Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE1Low3Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low3Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE1Low4Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low4Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE1Low5Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low5Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE1Low6Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low6Dpt6In)))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt6Fix                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt6Fix)))
// Von-Wert
#define ParamLOG_fE1LowDpt7                          (knx.paramWord(LOG_ParamCalcIndex(LOG_fE1LowDpt7)))
// Bis-Wert
#define ParamLOG_fE1HighDpt7                         (knx.paramWord(LOG_ParamCalcIndex(LOG_fE1HighDpt7)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE1Low0Dpt7In                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE1Low0Dpt7In)))
// ... oder bei Wert
#define ParamLOG_fE1Low1Dpt7In                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE1Low1Dpt7In)))
// ... oder bei Wert
#define ParamLOG_fE1Low2Dpt7In                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE1Low2Dpt7In)))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt7Fix                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE1LowDpt7Fix)))
// Von-Wert
#define ParamLOG_fE1LowDpt8                          ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE1LowDpt8)))
// Bis-Wert
#define ParamLOG_fE1HighDpt8                         ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE1HighDpt8)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE1Low0Dpt8In                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE1Low0Dpt8In)))
// ... oder bei Wert
#define ParamLOG_fE1Low1Dpt8In                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE1Low1Dpt8In)))
// ... oder bei Wert
#define ParamLOG_fE1Low2Dpt8In                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE1Low2Dpt8In)))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt8Fix                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE1LowDpt8Fix)))
// Von-Wert
#define ParamLOG_fE1LowDpt9                          (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1LowDpt9), Float_Enc_IEEE754Single))
// Bis-Wert
#define ParamLOG_fE1HighDpt9                         (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1HighDpt9), Float_Enc_IEEE754Single))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt9Fix                       (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1LowDpt9Fix), Float_Enc_IEEE754Single))
// Von-Wert
#define ParamLOG_fE1LowDpt12                         (knx.paramInt(LOG_ParamCalcIndex(LOG_fE1LowDpt12)))
// Bis-Wert
#define ParamLOG_fE1HighDpt12                        (knx.paramInt(LOG_ParamCalcIndex(LOG_fE1HighDpt12)))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt12Fix                      (knx.paramInt(LOG_ParamCalcIndex(LOG_fE1LowDpt12Fix)))
// Von-Wert
#define ParamLOG_fE1LowDpt13                         ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE1LowDpt13)))
// Bis-Wert
#define ParamLOG_fE1HighDpt13                        ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE1HighDpt13)))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt13Fix                      ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE1LowDpt13Fix)))
// Von-Wert
#define ParamLOG_fE1LowDpt14                         (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1LowDpt14), Float_Enc_IEEE754Single))
// Bis-Wert
#define ParamLOG_fE1HighDpt14                        (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1HighDpt14), Float_Enc_IEEE754Single))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt14Fix                      (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE1LowDpt14Fix), Float_Enc_IEEE754Single))
// Eingang ist EIN bei Szene
#define ParamLOG_fE1Low0Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low0Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE1Low1Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low1Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE1Low2Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low2Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE1Low3Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low3Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE1Low4Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low4Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE1Low5Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low5Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE1Low6Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low6Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE1Low7Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1Low7Dpt17)))
// Eingang ist konstant
#define ParamLOG_fE1LowDpt17Fix                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE1LowDpt17Fix)))
// Von-Wert
#define ParamLOG_fE1LowDptRGB                        ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE1LowDptRGB)))
// Bis-Wert
#define ParamLOG_fE1HighDptRGB                       ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE1HighDptRGB)))
// Eingang ist konstant
#define ParamLOG_fE1LowDptRGBFix                     ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE1LowDptRGBFix)))
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE2ConvertInt                       ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2ConvertInt)) & LOG_fE2ConvertIntMask) >> LOG_fE2ConvertIntShift)
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE2Convert                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Convert)) & LOG_fE2ConvertMask) >> LOG_fE2ConvertShift)
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE2ConvertFloat                     ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2ConvertFloat)) & LOG_fE2ConvertFloatMask) >> LOG_fE2ConvertFloatShift)
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE2ConvertSpecial                   ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2ConvertSpecial)) & LOG_fE2ConvertSpecialMask) >> LOG_fE2ConvertSpecialShift)
// Wert für Eingang wird ermittelt durch
#define ParamLOG_fE2ConvertBool                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2ConvertBool)) & LOG_fE2ConvertBoolMask) >> LOG_fE2ConvertBoolShift)
// Eingang 2
#define ParamLOG_fE2                                 (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2)) & LOG_fE2Mask)
// DPT für Eingang
#define ParamLOG_fE2Dpt                              (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Dpt)))
// Eingang wird gelesen alle
#define ParamLOG_fE2RepeatBase                       ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2RepeatBase)) & LOG_fE2RepeatBaseMask) >> LOG_fE2RepeatBaseShift)
// Eingang wird gelesen alle
#define ParamLOG_fE2RepeatTime                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE2RepeatTime)) & LOG_fE2RepeatTimeMask)
// Eingang wird gelesen alle (in Millisekunden)
#define ParamLOG_fE2RepeatTimeMS                     (paramDelay(knx.paramWord(LOG_ParamCalcIndex(LOG_fE2RepeatTime))))
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fE2OtherKO                          (knx.paramWord(LOG_ParamCalcIndex(LOG_fE2OtherKO)))
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fE2OtherKORel                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE2OtherKORel)))
// Falls Vorbelegung aus dem Speicher nicht möglich oder nicht gewünscht, dann vorbelegen mit
#define ParamLOG_fE2Default                          (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Default)) & LOG_fE2DefaultMask)
// Eingang vorbelegen mit
#define ParamLOG_fE2DefaultExt                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2DefaultExt)) & LOG_fE2DefaultExtMask)
// Eingangswert speichern und beim nächsten Neustart als Vorbelegung nutzen?
#define ParamLOG_fE2DefaultEEPROM                    ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2DefaultEEPROM)) & LOG_fE2DefaultEEPROMMask))
// Nur so lange zyklisch lesen, bis erstes Telegramm eingeht
#define ParamLOG_fE2DefaultRepeat                    ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2DefaultRepeat)) & LOG_fE2DefaultRepeatMask))
// Kommunikationsobjekt für Eingang
#define ParamLOG_fE2UseOtherKO                       ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2UseOtherKO)) & LOG_fE2UseOtherKOMask) >> LOG_fE2UseOtherKOShift)
// Von-Wert
#define ParamLOG_fE2LowDelta                         ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE2LowDelta)))
// Bis-Wert
#define ParamLOG_fE2HighDelta                        ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE2HighDelta)))
// Von-Wert
#define ParamLOG_fE2LowDeltaFloat                    (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2LowDeltaFloat), Float_Enc_IEEE754Single))
// Bis-Wert
#define ParamLOG_fE2HighDeltaFloat                   (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2HighDeltaFloat), Float_Enc_IEEE754Single))
// Von-Wert
#define ParamLOG_fE2LowDeltaDouble                   (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2LowDeltaDouble), Float_Enc_IEEE754Single))
// Bis-Wert
#define ParamLOG_fE2HighDeltaDouble                  (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2HighDeltaDouble), Float_Enc_IEEE754Single))
// Nächste Zeile auswerten?
#define ParamLOG_fE2Low0Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low0Valid)) & LOG_fE2Low0ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE2Low1Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low1Valid)) & LOG_fE2Low1ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE2Low2Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low2Valid)) & LOG_fE2Low2ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE2Low3Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low3Valid)) & LOG_fE2Low3ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE2Low4Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low4Valid)) & LOG_fE2Low4ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE2Low5Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low5Valid)) & LOG_fE2Low5ValidMask))
// Nächste Zeile auswerten?
#define ParamLOG_fE2Low6Valid                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low6Valid)) & LOG_fE2Low6ValidMask))
// Eingang ist EIN, wenn Wert gleich
#define ParamLOG_fE2Low0Dpt2                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low0Dpt2)))
// ... oder wenn Wert gleich 
#define ParamLOG_fE2Low1Dpt2                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low1Dpt2)))
// ... oder wenn Wert gleich 
#define ParamLOG_fE2Low2Dpt2                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low2Dpt2)))
// ... oder wenn Wert gleich 
#define ParamLOG_fE2Low3Dpt2                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low3Dpt2)))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt2Fix                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt2Fix)))
// Eingang ist EIN, wenn Wert gleich
#define ParamLOG_fE2Low0Dpt3Dir                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low0Dpt3Dir)) & LOG_fE2Low0Dpt3DirMask) >> LOG_fE2Low0Dpt3DirShift)
// 
#define ParamLOG_fE2Low0Dpt3Dim                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low0Dpt3Dim)) & LOG_fE2Low0Dpt3DimMask)
// ... oder wenn Wert gleich 
#define ParamLOG_fE2Low1Dpt3Dir                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low1Dpt3Dir)) & LOG_fE2Low1Dpt3DirMask) >> LOG_fE2Low1Dpt3DirShift)
// 
#define ParamLOG_fE2Low1Dpt3Dim                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low1Dpt3Dim)) & LOG_fE2Low1Dpt3DimMask)
// ... oder wenn Wert gleich 
#define ParamLOG_fE2Low2Dpt3Dir                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low2Dpt3Dir)) & LOG_fE2Low2Dpt3DirMask) >> LOG_fE2Low2Dpt3DirShift)
// 
#define ParamLOG_fE2Low2Dpt3Dim                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low2Dpt3Dim)) & LOG_fE2Low2Dpt3DimMask)
// ... oder wenn Wert gleich 
#define ParamLOG_fE2Low3Dpt3Dir                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low3Dpt3Dir)) & LOG_fE2Low3Dpt3DirMask) >> LOG_fE2Low3Dpt3DirShift)
// 
#define ParamLOG_fE2Low3Dpt3Dim                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low3Dpt3Dim)) & LOG_fE2Low3Dpt3DimMask)
// Eingang ist konstant
#define ParamLOG_fE2LowDpt3FixDir                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt3FixDir)) & LOG_fE2LowDpt3FixDirMask) >> LOG_fE2LowDpt3FixDirShift)
// 
#define ParamLOG_fE2LowDpt3FixDim                    (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt3FixDim)) & LOG_fE2LowDpt3FixDimMask)
// Von-Wert
#define ParamLOG_fE2LowDpt5                          (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt5)))
// Bis-Wert
#define ParamLOG_fE2HighDpt5                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2HighDpt5)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE2Low0Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low0Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE2Low1Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low1Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE2Low2Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low2Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE2Low3Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low3Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE2Low4Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low4Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE2Low5Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low5Dpt5In)))
// ... oder bei Wert
#define ParamLOG_fE2Low6Dpt5In                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low6Dpt5In)))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt5Fix                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt5Fix)))
// Von-Wert
#define ParamLOG_fE2LowDpt5001                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt5001)))
// Bis-Wert
#define ParamLOG_fE2HighDpt5001                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2HighDpt5001)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE2Low0Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low0Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE2Low1Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low1Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE2Low2Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low2Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE2Low3Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low3Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE2Low4Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low4Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE2Low5Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low5Dpt5xIn)))
// ... oder bei Wert
#define ParamLOG_fE2Low6Dpt5xIn                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low6Dpt5xIn)))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt5xFix                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt5xFix)))
// Von-Wert
#define ParamLOG_fE2LowDpt6                          ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt6)))
// Bis-Wert
#define ParamLOG_fE2HighDpt6                         ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2HighDpt6)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE2Low0Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low0Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE2Low1Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low1Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE2Low2Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low2Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE2Low3Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low3Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE2Low4Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low4Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE2Low5Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low5Dpt6In)))
// ... oder bei Wert
#define ParamLOG_fE2Low6Dpt6In                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low6Dpt6In)))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt6Fix                       ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt6Fix)))
// Von-Wert
#define ParamLOG_fE2LowDpt7                          (knx.paramWord(LOG_ParamCalcIndex(LOG_fE2LowDpt7)))
// Bis-Wert
#define ParamLOG_fE2HighDpt7                         (knx.paramWord(LOG_ParamCalcIndex(LOG_fE2HighDpt7)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE2Low0Dpt7In                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE2Low0Dpt7In)))
// ... oder bei Wert
#define ParamLOG_fE2Low1Dpt7In                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE2Low1Dpt7In)))
// ... oder bei Wert
#define ParamLOG_fE2Low2Dpt7In                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE2Low2Dpt7In)))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt7Fix                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fE2LowDpt7Fix)))
// Von-Wert
#define ParamLOG_fE2LowDpt8                          ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE2LowDpt8)))
// Bis-Wert
#define ParamLOG_fE2HighDpt8                         ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE2HighDpt8)))
// Eingang ist EIN bei Wert
#define ParamLOG_fE2Low0Dpt8In                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE2Low0Dpt8In)))
// ... oder bei Wert
#define ParamLOG_fE2Low1Dpt8In                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE2Low1Dpt8In)))
// ... oder bei Wert
#define ParamLOG_fE2Low2Dpt8In                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE2Low2Dpt8In)))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt8Fix                       ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fE2LowDpt8Fix)))
// Von-Wert
#define ParamLOG_fE2LowDpt9                          (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2LowDpt9), Float_Enc_IEEE754Single))
// Bis-Wert
#define ParamLOG_fE2HighDpt9                         (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2HighDpt9), Float_Enc_IEEE754Single))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt9Fix                       (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2LowDpt9Fix), Float_Enc_IEEE754Single))
// Von-Wert
#define ParamLOG_fE2LowDpt12                         (knx.paramInt(LOG_ParamCalcIndex(LOG_fE2LowDpt12)))
// Bis-Wert
#define ParamLOG_fE2HighDpt12                        (knx.paramInt(LOG_ParamCalcIndex(LOG_fE2HighDpt12)))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt12Fix                      (knx.paramInt(LOG_ParamCalcIndex(LOG_fE2LowDpt12Fix)))
// Von-Wert
#define ParamLOG_fE2LowDpt13                         ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE2LowDpt13)))
// Bis-Wert
#define ParamLOG_fE2HighDpt13                        ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE2HighDpt13)))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt13Fix                      ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE2LowDpt13Fix)))
// Von-Wert
#define ParamLOG_fE2LowDpt14                         (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2LowDpt14), Float_Enc_IEEE754Single))
// Bis-Wert
#define ParamLOG_fE2HighDpt14                        (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2HighDpt14), Float_Enc_IEEE754Single))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt14Fix                      (knx.paramFloat(LOG_ParamCalcIndex(LOG_fE2LowDpt14Fix), Float_Enc_IEEE754Single))
// Eingang ist EIN bei Szene
#define ParamLOG_fE2Low0Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low0Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE2Low1Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low1Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE2Low2Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low2Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE2Low3Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low3Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE2Low4Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low4Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE2Low5Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low5Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE2Low6Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low6Dpt17)))
// ... oder bei Szene
#define ParamLOG_fE2Low7Dpt17                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2Low7Dpt17)))
// Eingang ist konstant
#define ParamLOG_fE2LowDpt17Fix                      (knx.paramByte(LOG_ParamCalcIndex(LOG_fE2LowDpt17Fix)))
// Von-Wert
#define ParamLOG_fE2LowDptRGB                        ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE2LowDptRGB)))
// Bis-Wert
#define ParamLOG_fE2HighDptRGB                       ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE2HighDptRGB)))
// Eingang ist konstant
#define ParamLOG_fE2LowDptRGBFix                     ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fE2LowDptRGBFix)))
// Zeitbezug
#define ParamLOG_fTd1DuskDawn                        ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1DuskDawn)) & LOG_fTd1DuskDawnMask) >> LOG_fTd1DuskDawnShift)
// Zeitbezug
#define ParamLOG_fTd2DuskDawn                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2DuskDawn)) & LOG_fTd2DuskDawnMask)
// Zeitbezug
#define ParamLOG_fTd3DuskDawn                        ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3DuskDawn)) & LOG_fTd3DuskDawnMask) >> LOG_fTd3DuskDawnShift)
// Zeitbezug
#define ParamLOG_fTd4DuskDawn                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4DuskDawn)) & LOG_fTd4DuskDawnMask)
// Zeitbezug
#define ParamLOG_fTd5DuskDawn                        ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5DuskDawn)) & LOG_fTd5DuskDawnMask) >> LOG_fTd5DuskDawnShift)
// Zeitbezug
#define ParamLOG_fTd6DuskDawn                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6DuskDawn)) & LOG_fTd6DuskDawnMask)
// Zeitbezug
#define ParamLOG_fTd7DuskDawn                        ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7DuskDawn)) & LOG_fTd7DuskDawnMask) >> LOG_fTd7DuskDawnShift)
// Zeitbezug
#define ParamLOG_fTd8DuskDawn                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8DuskDawn)) & LOG_fTd8DuskDawnMask)
// Typ der Zeitschaltuhr
#define ParamLOG_fTYearDay                           ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTYearDay)) & LOG_fTYearDayMask) >> LOG_fTYearDayShift)
// Feiertagsbehandlung
#define ParamLOG_fTHoliday                           ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTHoliday)) & LOG_fTHolidayMask) >> LOG_fTHolidayShift)
// Bei Neustart letzte Schaltzeit nachholen
#define ParamLOG_fTRestoreState                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTRestoreState)) & LOG_fTRestoreStateMask) >> LOG_fTRestoreStateShift)
// Urlaubsbehandlung
#define ParamLOG_fTVacation                          (knx.paramByte(LOG_ParamCalcIndex(LOG_fTVacation)) & LOG_fTVacationMask)
// Zahlenwert
#define ParamLOG_fTd1ValueNum                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1ValueNum)))
// Zahlenwert
#define ParamLOG_fTd2ValueNum                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2ValueNum)))
// Zahlenwert
#define ParamLOG_fTd3ValueNum                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3ValueNum)))
// Zahlenwert
#define ParamLOG_fTd4ValueNum                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4ValueNum)))
// Zahlenwert
#define ParamLOG_fTd5ValueNum                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5ValueNum)))
// Zahlenwert
#define ParamLOG_fTd6ValueNum                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6ValueNum)))
// Zahlenwert
#define ParamLOG_fTd7ValueNum                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7ValueNum)))
// Zahlenwert
#define ParamLOG_fTd8ValueNum                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8ValueNum)))
// Schaltwert
#define ParamLOG_fTd1Value                           ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1Value)) & LOG_fTd1ValueMask))
// Grad
#define ParamLOG_fTd1Degree                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1Degree)) & LOG_fTd1DegreeMask) >> LOG_fTd1DegreeShift)
// Stunde
#define ParamLOG_fTd1HourAbs                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1HourAbs)) & LOG_fTd1HourAbsMask) >> LOG_fTd1HourAbsShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd1HourRel                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1HourRel)) & LOG_fTd1HourRelMask) >> LOG_fTd1HourRelShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd1HourRelShort                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1HourRelShort)) & LOG_fTd1HourRelShortMask) >> LOG_fTd1HourRelShortShift)
// Minute
#define ParamLOG_fTd1MinuteAbs                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1MinuteAbs)))
// Minute
#define ParamLOG_fTd1MinuteRel                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1MinuteRel)))
// Wochentag
#define ParamLOG_fTd1Weekday                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd1Weekday)) & LOG_fTd1WeekdayMask)
// Schaltwert
#define ParamLOG_fTd2Value                           ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2Value)) & LOG_fTd2ValueMask))
// Grad
#define ParamLOG_fTd2Degree                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2Degree)) & LOG_fTd2DegreeMask) >> LOG_fTd2DegreeShift)
// Stunde
#define ParamLOG_fTd2HourAbs                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2HourAbs)) & LOG_fTd2HourAbsMask) >> LOG_fTd2HourAbsShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd2HourRel                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2HourRel)) & LOG_fTd2HourRelMask) >> LOG_fTd2HourRelShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd2HourRelShort                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2HourRelShort)) & LOG_fTd2HourRelShortMask) >> LOG_fTd2HourRelShortShift)
// Minute
#define ParamLOG_fTd2MinuteAbs                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2MinuteAbs)))
// Minute
#define ParamLOG_fTd2MinuteRel                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2MinuteRel)))
// Wochentag
#define ParamLOG_fTd2Weekday                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd2Weekday)) & LOG_fTd2WeekdayMask)
// Schaltwert
#define ParamLOG_fTd3Value                           ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3Value)) & LOG_fTd3ValueMask))
// Grad
#define ParamLOG_fTd3Degree                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3Degree)) & LOG_fTd3DegreeMask) >> LOG_fTd3DegreeShift)
// Stunde
#define ParamLOG_fTd3HourAbs                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3HourAbs)) & LOG_fTd3HourAbsMask) >> LOG_fTd3HourAbsShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd3HourRel                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3HourRel)) & LOG_fTd3HourRelMask) >> LOG_fTd3HourRelShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd3HourRelShort                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3HourRelShort)) & LOG_fTd3HourRelShortMask) >> LOG_fTd3HourRelShortShift)
// Minute
#define ParamLOG_fTd3MinuteAbs                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3MinuteAbs)))
// Minute
#define ParamLOG_fTd3MinuteRel                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3MinuteRel)))
// Wochentag
#define ParamLOG_fTd3Weekday                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd3Weekday)) & LOG_fTd3WeekdayMask)
// Schaltwert
#define ParamLOG_fTd4Value                           ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4Value)) & LOG_fTd4ValueMask))
// Grad
#define ParamLOG_fTd4Degree                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4Degree)) & LOG_fTd4DegreeMask) >> LOG_fTd4DegreeShift)
// Stunde
#define ParamLOG_fTd4HourAbs                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4HourAbs)) & LOG_fTd4HourAbsMask) >> LOG_fTd4HourAbsShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd4HourRel                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4HourRel)) & LOG_fTd4HourRelMask) >> LOG_fTd4HourRelShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd4HourRelShort                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4HourRelShort)) & LOG_fTd4HourRelShortMask) >> LOG_fTd4HourRelShortShift)
// Minute
#define ParamLOG_fTd4MinuteAbs                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4MinuteAbs)))
// Minute
#define ParamLOG_fTd4MinuteRel                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4MinuteRel)))
// Wochentag
#define ParamLOG_fTd4Weekday                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd4Weekday)) & LOG_fTd4WeekdayMask)
// Schaltwert
#define ParamLOG_fTd5Value                           ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5Value)) & LOG_fTd5ValueMask))
// Grad
#define ParamLOG_fTd5Degree                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5Degree)) & LOG_fTd5DegreeMask) >> LOG_fTd5DegreeShift)
// Stunde
#define ParamLOG_fTd5HourAbs                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5HourAbs)) & LOG_fTd5HourAbsMask) >> LOG_fTd5HourAbsShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd5HourRel                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5HourRel)) & LOG_fTd5HourRelMask) >> LOG_fTd5HourRelShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd5HourRelShort                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5HourRelShort)) & LOG_fTd5HourRelShortMask) >> LOG_fTd5HourRelShortShift)
// Minute
#define ParamLOG_fTd5MinuteAbs                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5MinuteAbs)))
// Minute
#define ParamLOG_fTd5MinuteRel                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5MinuteRel)))
// Wochentag
#define ParamLOG_fTd5Weekday                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd5Weekday)) & LOG_fTd5WeekdayMask)
// Schaltwert
#define ParamLOG_fTd6Value                           ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6Value)) & LOG_fTd6ValueMask))
// Grad
#define ParamLOG_fTd6Degree                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6Degree)) & LOG_fTd6DegreeMask) >> LOG_fTd6DegreeShift)
// Stunde
#define ParamLOG_fTd6HourAbs                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6HourAbs)) & LOG_fTd6HourAbsMask) >> LOG_fTd6HourAbsShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd6HourRel                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6HourRel)) & LOG_fTd6HourRelMask) >> LOG_fTd6HourRelShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd6HourRelShort                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6HourRelShort)) & LOG_fTd6HourRelShortMask) >> LOG_fTd6HourRelShortShift)
// Minute
#define ParamLOG_fTd6MinuteAbs                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6MinuteAbs)))
// Minute
#define ParamLOG_fTd6MinuteRel                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6MinuteRel)))
// Wochentag
#define ParamLOG_fTd6Weekday                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd6Weekday)) & LOG_fTd6WeekdayMask)
// Schaltwert
#define ParamLOG_fTd7Value                           ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7Value)) & LOG_fTd7ValueMask))
// Grad
#define ParamLOG_fTd7Degree                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7Degree)) & LOG_fTd7DegreeMask) >> LOG_fTd7DegreeShift)
// Stunde
#define ParamLOG_fTd7HourAbs                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7HourAbs)) & LOG_fTd7HourAbsMask) >> LOG_fTd7HourAbsShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd7HourRel                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7HourRel)) & LOG_fTd7HourRelMask) >> LOG_fTd7HourRelShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd7HourRelShort                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7HourRelShort)) & LOG_fTd7HourRelShortMask) >> LOG_fTd7HourRelShortShift)
// Minute
#define ParamLOG_fTd7MinuteAbs                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7MinuteAbs)))
// Minute
#define ParamLOG_fTd7MinuteRel                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7MinuteRel)))
// Wochentag
#define ParamLOG_fTd7Weekday                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd7Weekday)) & LOG_fTd7WeekdayMask)
// Schaltwert
#define ParamLOG_fTd8Value                           ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8Value)) & LOG_fTd8ValueMask))
// Grad
#define ParamLOG_fTd8Degree                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8Degree)) & LOG_fTd8DegreeMask) >> LOG_fTd8DegreeShift)
// Stunde
#define ParamLOG_fTd8HourAbs                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8HourAbs)) & LOG_fTd8HourAbsMask) >> LOG_fTd8HourAbsShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd8HourRel                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8HourRel)) & LOG_fTd8HourRelMask) >> LOG_fTd8HourRelShift)
// Sonnen auf-/untergang
#define ParamLOG_fTd8HourRelShort                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8HourRelShort)) & LOG_fTd8HourRelShortMask) >> LOG_fTd8HourRelShortShift)
// Minute
#define ParamLOG_fTd8MinuteAbs                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8MinuteAbs)))
// Minute
#define ParamLOG_fTd8MinuteRel                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8MinuteRel)))
// Wochentag
#define ParamLOG_fTd8Weekday                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fTd8Weekday)) & LOG_fTd8WeekdayMask)
// Mo
#define ParamLOG_fTy1Weekday1                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1Weekday1)) & LOG_fTy1Weekday1Mask))
// Di
#define ParamLOG_fTy1Weekday2                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1Weekday2)) & LOG_fTy1Weekday2Mask))
// Mi
#define ParamLOG_fTy1Weekday3                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1Weekday3)) & LOG_fTy1Weekday3Mask))
// Do
#define ParamLOG_fTy1Weekday4                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1Weekday4)) & LOG_fTy1Weekday4Mask))
// Fr
#define ParamLOG_fTy1Weekday5                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1Weekday5)) & LOG_fTy1Weekday5Mask))
// Sa
#define ParamLOG_fTy1Weekday6                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1Weekday6)) & LOG_fTy1Weekday6Mask))
// So
#define ParamLOG_fTy1Weekday7                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1Weekday7)) & LOG_fTy1Weekday7Mask))
// Tag
#define ParamLOG_fTy1Day                             ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1Day)) & LOG_fTy1DayMask) >> LOG_fTy1DayShift)
// Wochentag
#define ParamLOG_fTy1IsWeekday                       ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1IsWeekday)) & LOG_fTy1IsWeekdayMask))
// Monat
#define ParamLOG_fTy1Month                           ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTy1Month)) & LOG_fTy1MonthMask) >> LOG_fTy1MonthShift)
// Mo
#define ParamLOG_fTy2Weekday1                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2Weekday1)) & LOG_fTy2Weekday1Mask))
// Di
#define ParamLOG_fTy2Weekday2                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2Weekday2)) & LOG_fTy2Weekday2Mask))
// Mi
#define ParamLOG_fTy2Weekday3                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2Weekday3)) & LOG_fTy2Weekday3Mask))
// Do
#define ParamLOG_fTy2Weekday4                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2Weekday4)) & LOG_fTy2Weekday4Mask))
// Fr
#define ParamLOG_fTy2Weekday5                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2Weekday5)) & LOG_fTy2Weekday5Mask))
// Sa
#define ParamLOG_fTy2Weekday6                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2Weekday6)) & LOG_fTy2Weekday6Mask))
// So
#define ParamLOG_fTy2Weekday7                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2Weekday7)) & LOG_fTy2Weekday7Mask))
// Tag
#define ParamLOG_fTy2Day                             ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2Day)) & LOG_fTy2DayMask) >> LOG_fTy2DayShift)
// Wochentag
#define ParamLOG_fTy2IsWeekday                       ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2IsWeekday)) & LOG_fTy2IsWeekdayMask))
// Monat
#define ParamLOG_fTy2Month                           ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTy2Month)) & LOG_fTy2MonthMask) >> LOG_fTy2MonthShift)
// Mo
#define ParamLOG_fTy3Weekday1                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3Weekday1)) & LOG_fTy3Weekday1Mask))
// Di
#define ParamLOG_fTy3Weekday2                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3Weekday2)) & LOG_fTy3Weekday2Mask))
// Mi
#define ParamLOG_fTy3Weekday3                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3Weekday3)) & LOG_fTy3Weekday3Mask))
// Do
#define ParamLOG_fTy3Weekday4                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3Weekday4)) & LOG_fTy3Weekday4Mask))
// Fr
#define ParamLOG_fTy3Weekday5                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3Weekday5)) & LOG_fTy3Weekday5Mask))
// Sa
#define ParamLOG_fTy3Weekday6                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3Weekday6)) & LOG_fTy3Weekday6Mask))
// So
#define ParamLOG_fTy3Weekday7                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3Weekday7)) & LOG_fTy3Weekday7Mask))
// Tag
#define ParamLOG_fTy3Day                             ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3Day)) & LOG_fTy3DayMask) >> LOG_fTy3DayShift)
// Wochentag
#define ParamLOG_fTy3IsWeekday                       ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3IsWeekday)) & LOG_fTy3IsWeekdayMask))
// Monat
#define ParamLOG_fTy3Month                           ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTy3Month)) & LOG_fTy3MonthMask) >> LOG_fTy3MonthShift)
// Mo
#define ParamLOG_fTy4Weekday1                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4Weekday1)) & LOG_fTy4Weekday1Mask))
// Di
#define ParamLOG_fTy4Weekday2                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4Weekday2)) & LOG_fTy4Weekday2Mask))
// Mi
#define ParamLOG_fTy4Weekday3                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4Weekday3)) & LOG_fTy4Weekday3Mask))
// Do
#define ParamLOG_fTy4Weekday4                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4Weekday4)) & LOG_fTy4Weekday4Mask))
// Fr
#define ParamLOG_fTy4Weekday5                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4Weekday5)) & LOG_fTy4Weekday5Mask))
// Sa
#define ParamLOG_fTy4Weekday6                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4Weekday6)) & LOG_fTy4Weekday6Mask))
// So
#define ParamLOG_fTy4Weekday7                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4Weekday7)) & LOG_fTy4Weekday7Mask))
// Tag
#define ParamLOG_fTy4Day                             ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4Day)) & LOG_fTy4DayMask) >> LOG_fTy4DayShift)
// Wochentag
#define ParamLOG_fTy4IsWeekday                       ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4IsWeekday)) & LOG_fTy4IsWeekdayMask))
// Monat
#define ParamLOG_fTy4Month                           ((knx.paramByte(LOG_ParamCalcIndex(LOG_fTy4Month)) & LOG_fTy4MonthMask) >> LOG_fTy4MonthShift)
// Interner Eingang 3
#define ParamLOG_fI1                                 ((knx.paramByte(LOG_ParamCalcIndex(LOG_fI1)) & LOG_fI1Mask) >> LOG_fI1Shift)
// Art der Verknüpfung
#define ParamLOG_fI1Kind                             ((knx.paramByte(LOG_ParamCalcIndex(LOG_fI1Kind)) & LOG_fI1KindMask) >> LOG_fI1KindShift)
// Internen Eingang als Trigger nutzen(ist immer logisch EIN)
#define ParamLOG_fI1AsTrigger                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fI1AsTrigger)) & LOG_fI1AsTriggerMask))
// Internen Eingang verbinden mit Kanal Nr.
#define ParamLOG_fI1Function                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fI1Function)))
// Internen Eingang verbinden mit Kanal Nr.
#define ParamLOG_fI1FunctionRel                      ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fI1FunctionRel)))
// Interner Eingang 4
#define ParamLOG_fI2                                 ((knx.paramByte(LOG_ParamCalcIndex(LOG_fI2)) & LOG_fI2Mask) >> LOG_fI2Shift)
// Art der Verknüpfung
#define ParamLOG_fI2Kind                             ((knx.paramByte(LOG_ParamCalcIndex(LOG_fI2Kind)) & LOG_fI2KindMask) >> LOG_fI2KindShift)
// Internen Eingang als Trigger nutzen(ist immer logisch EIN)
#define ParamLOG_fI2AsTrigger                        ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fI2AsTrigger)) & LOG_fI2AsTriggerMask))
// Internen Eingang verbinden mit Kanal Nr.
#define ParamLOG_fI2Function                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fI2Function)))
// Internen Eingang verbinden mit Kanal Nr.
#define ParamLOG_fI2FunctionRel                      ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fI2FunctionRel)))
// Zeit für Treppenlicht
#define ParamLOG_fOStairtimeBase                     ((knx.paramByte(LOG_ParamCalcIndex(LOG_fOStairtimeBase)) & LOG_fOStairtimeBaseMask) >> LOG_fOStairtimeBaseShift)
// Zeit für Treppenlicht
#define ParamLOG_fOStairtimeTime                     (knx.paramWord(LOG_ParamCalcIndex(LOG_fOStairtimeTime)) & LOG_fOStairtimeTimeMask)
// Zeit für Treppenlicht (in Millisekunden)
#define ParamLOG_fOStairtimeTimeMS                   (paramDelay(knx.paramWord(LOG_ParamCalcIndex(LOG_fOStairtimeTime))))
// Treppenlicht blinkt im Rhythmus
#define ParamLOG_fOBlinkBase                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fOBlinkBase)) & LOG_fOBlinkBaseMask) >> LOG_fOBlinkBaseShift)
// Treppenlicht blinkt im Rhythmus
#define ParamLOG_fOBlinkTime                         (knx.paramWord(LOG_ParamCalcIndex(LOG_fOBlinkTime)) & LOG_fOBlinkTimeMask)
// Treppenlicht blinkt im Rhythmus (in Millisekunden)
#define ParamLOG_fOBlinkTimeMS                       (paramDelay(knx.paramWord(LOG_ParamCalcIndex(LOG_fOBlinkTime))))
// EINschalten wird verzögert um
#define ParamLOG_fODelayOnBase                       ((knx.paramByte(LOG_ParamCalcIndex(LOG_fODelayOnBase)) & LOG_fODelayOnBaseMask) >> LOG_fODelayOnBaseShift)
// EINschalten wird verzögert um
#define ParamLOG_fODelayOnTime                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fODelayOnTime)) & LOG_fODelayOnTimeMask)
// EINschalten wird verzögert um (in Millisekunden)
#define ParamLOG_fODelayOnTimeMS                     (paramDelay(knx.paramWord(LOG_ParamCalcIndex(LOG_fODelayOnTime))))
// AUSschalten wird verzögert um
#define ParamLOG_fODelayOffBase                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fODelayOffBase)) & LOG_fODelayOffBaseMask) >> LOG_fODelayOffBaseShift)
// AUSschalten wird verzögert um
#define ParamLOG_fODelayOffTime                      (knx.paramWord(LOG_ParamCalcIndex(LOG_fODelayOffTime)) & LOG_fODelayOffTimeMask)
// AUSschalten wird verzögert um (in Millisekunden)
#define ParamLOG_fODelayOffTimeMS                    (paramDelay(knx.paramWord(LOG_ParamCalcIndex(LOG_fODelayOffTime))))
// EIN-Telegramm wird wiederholt alle
#define ParamLOG_fORepeatOnBase                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fORepeatOnBase)) & LOG_fORepeatOnBaseMask) >> LOG_fORepeatOnBaseShift)
// EIN-Telegramm wird wiederholt alle
#define ParamLOG_fORepeatOnTime                      (knx.paramWord(LOG_ParamCalcIndex(LOG_fORepeatOnTime)) & LOG_fORepeatOnTimeMask)
// EIN-Telegramm wird wiederholt alle (in Millisekunden)
#define ParamLOG_fORepeatOnTimeMS                    (paramDelay(knx.paramWord(LOG_ParamCalcIndex(LOG_fORepeatOnTime))))
// AUS-Telegramm wird wiederholt alle
#define ParamLOG_fORepeatOffBase                     ((knx.paramByte(LOG_ParamCalcIndex(LOG_fORepeatOffBase)) & LOG_fORepeatOffBaseMask) >> LOG_fORepeatOffBaseShift)
// AUS-Telegramm wird wiederholt alle
#define ParamLOG_fORepeatOffTime                     (knx.paramWord(LOG_ParamCalcIndex(LOG_fORepeatOffTime)) & LOG_fORepeatOffTimeMask)
// AUS-Telegramm wird wiederholt alle (in Millisekunden)
#define ParamLOG_fORepeatOffTimeMS                   (paramDelay(knx.paramWord(LOG_ParamCalcIndex(LOG_fORepeatOffTime))))
// Ausgang schaltet zeitverzögert
#define ParamLOG_fODelay                             ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fODelay)) & LOG_fODelayMask))
// Erneutes EIN führt zu
#define ParamLOG_fODelayOnRepeat                     ((knx.paramByte(LOG_ParamCalcIndex(LOG_fODelayOnRepeat)) & LOG_fODelayOnRepeatMask) >> LOG_fODelayOnRepeatShift)
// Darauffolgendes AUS führt zu
#define ParamLOG_fODelayOnReset                      ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fODelayOnReset)) & LOG_fODelayOnResetMask))
// Erneutes AUS führt zu
#define ParamLOG_fODelayOffRepeat                    ((knx.paramByte(LOG_ParamCalcIndex(LOG_fODelayOffRepeat)) & LOG_fODelayOffRepeatMask) >> LOG_fODelayOffRepeatShift)
// Darauffolgendes EIN führt zu
#define ParamLOG_fODelayOffReset                     ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fODelayOffReset)) & LOG_fODelayOffResetMask))
// Ausgang hat eine Treppenlichtfunktion
#define ParamLOG_fOStair                             ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOStair)) & LOG_fOStairMask))
// Treppenlicht kann verlängert werden
#define ParamLOG_fORetrigger                         ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fORetrigger)) & LOG_fORetriggerMask))
// Treppenlicht kann ausgeschaltet werden
#define ParamLOG_fOStairOff                          ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOStairOff)) & LOG_fOStairOffMask))
// Ausgang wiederholt zyklisch
#define ParamLOG_fORepeat                            ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fORepeat)) & LOG_fORepeatMask))
// Wiederholungsfilter
#define ParamLOG_fOOutputFilter                      ((knx.paramByte(LOG_ParamCalcIndex(LOG_fOOutputFilter)) & LOG_fOOutputFilterMask) >> LOG_fOOutputFilterShift)
// Sendeverhalten für Ausgang
#define ParamLOG_fOSendOnChange                      ((bool)(knx.paramByte(LOG_ParamCalcIndex(LOG_fOSendOnChange)) & LOG_fOSendOnChangeMask))
// DPT für Ausgang
#define ParamLOG_fODpt                               (knx.paramByte(LOG_ParamCalcIndex(LOG_fODpt)))
// Wert für EIN senden?
#define ParamLOG_fOOn                                (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOn)))
// Wert für EIN senden?
#define ParamLOG_fOOnBuzzer                          (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnBuzzer)))
// Wert für EIN senden?
#define ParamLOG_fOOnLed                             (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnLed)))
// Wert für EIN senden?
#define ParamLOG_fOOnAll                             (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnAll)))
//     Wert für EIN senden als
#define ParamLOG_fOOnTone                            (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnTone)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt1                            (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnDpt1)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt2                            (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnDpt2)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt3Dir                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnDpt3Dir)) & LOG_fOOnDpt3DirMask) >> LOG_fOOnDpt3DirShift)
// 
#define ParamLOG_fOOnDpt3Dim                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnDpt3Dim)) & LOG_fOOnDpt3DimMask)
//     Wert für EIN senden als 
#define ParamLOG_fOOnDpt5                            (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnDpt5)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt5001                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnDpt5001)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt6                            ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnDpt6)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt7                            (knx.paramWord(LOG_ParamCalcIndex(LOG_fOOnDpt7)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt8                            ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fOOnDpt8)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt9                            (knx.paramFloat(LOG_ParamCalcIndex(LOG_fOOnDpt9), Float_Enc_IEEE754Single))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt12                           (knx.paramInt(LOG_ParamCalcIndex(LOG_fOOnDpt12)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt13                           ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fOOnDpt13)))
//     Wert für EIN senden als
#define ParamLOG_fOOnDpt14                           (knx.paramFloat(LOG_ParamCalcIndex(LOG_fOOnDpt14), Float_Enc_IEEE754Single))
//     Wert für EIN senden als 
#define ParamLOG_fOOnDpt16                           (knx.paramData(LOG_ParamCalcIndex(LOG_fOOnDpt16)))
//     Wert für EIN senden als 
#define ParamLOG_fOOnDpt17                           (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnDpt17)))
//     Wert für EIN senden als (3-Byte-RGB)
#define ParamLOG_fOOnRGB                             ((knx.paramInt(LOG_ParamCalcIndex(LOG_fOOnRGB)) & LOG_fOOnRGBMask) >> LOG_fOOnRGBShift)
// 
#define ParamLOG_fOOnPAArea                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnPAArea)) & LOG_fOOnPAAreaMask) >> LOG_fOOnPAAreaShift)
// 
#define ParamLOG_fOOnPALine                          (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnPALine)) & LOG_fOOnPALineMask)
// 
#define ParamLOG_fOOnPADevice                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnPADevice)))
//     Wert für EIN ermitteln als
#define ParamLOG_fOOnFunction                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnFunction)))
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fOOnKOKind                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnKOKind)) & LOG_fOOnKOKindMask) >> LOG_fOOnKOKindShift)
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fOOnKONumber                        (knx.paramWord(LOG_ParamCalcIndex(LOG_fOOnKONumber)))
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fOOnKONumberRel                     ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fOOnKONumberRel)))
//     DPT des Kommunikationsobjekts
#define ParamLOG_fOOnKODpt                           (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnKODpt)))
//     Wert für EIN an ein zusätzliches    KO senden?
#define ParamLOG_fOOnKOSend                          ((knx.paramByte(LOG_ParamCalcIndex(LOG_fOOnKOSend)) & LOG_fOOnKOSendMask) >> LOG_fOOnKOSendShift)
//         Nummer des zusätzlichen KO
#define ParamLOG_fOOnKOSendNumber                    (knx.paramWord(LOG_ParamCalcIndex(LOG_fOOnKOSendNumber)))
//         Nummer des zusätzlichen KO
#define ParamLOG_fOOnKOSendNumberRel                 ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fOOnKOSendNumberRel)))
// Wert für AUS senden?
#define ParamLOG_fOOff                               (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOff)))
// Wert für AUS senden?
#define ParamLOG_fOOffBuzzer                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffBuzzer)))
// Wert für AUS senden?
#define ParamLOG_fOOffLed                            (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffLed)))
// Wert für AUS senden?
#define ParamLOG_fOOffAll                            (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffAll)))
//     Wert für AUS senden als
#define ParamLOG_fOOffTone                           (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffTone)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt1                           (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffDpt1)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt2                           (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffDpt2)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt3Dir                        ((knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffDpt3Dir)) & LOG_fOOffDpt3DirMask) >> LOG_fOOffDpt3DirShift)
// 
#define ParamLOG_fOOffDpt3Dim                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffDpt3Dim)) & LOG_fOOffDpt3DimMask)
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt5                           (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffDpt5)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt5001                        (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffDpt5001)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt6                           ((int8_t)knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffDpt6)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt7                           (knx.paramWord(LOG_ParamCalcIndex(LOG_fOOffDpt7)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt8                           ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fOOffDpt8)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt9                           (knx.paramFloat(LOG_ParamCalcIndex(LOG_fOOffDpt9), Float_Enc_IEEE754Single))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt12                          (knx.paramInt(LOG_ParamCalcIndex(LOG_fOOffDpt12)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt13                          ((int32_t)knx.paramInt(LOG_ParamCalcIndex(LOG_fOOffDpt13)))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt14                          (knx.paramFloat(LOG_ParamCalcIndex(LOG_fOOffDpt14), Float_Enc_IEEE754Single))
//     Wert für AUS senden als
#define ParamLOG_fOOffDpt16                          (knx.paramData(LOG_ParamCalcIndex(LOG_fOOffDpt16)))
//     Wert für AUS senden als 
#define ParamLOG_fOOffDpt17                          (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffDpt17)))
//     Wert für AUS senden als (3-Byte-RGB)
#define ParamLOG_fOOffRGB                            ((knx.paramInt(LOG_ParamCalcIndex(LOG_fOOffRGB)) & LOG_fOOffRGBMask) >> LOG_fOOffRGBShift)
// 
#define ParamLOG_fOOffPAArea                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffPAArea)) & LOG_fOOffPAAreaMask) >> LOG_fOOffPAAreaShift)
// 
#define ParamLOG_fOOffPALine                         (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffPALine)) & LOG_fOOffPALineMask)
// 
#define ParamLOG_fOOffPADevice                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffPADevice)))
//     Wert für AUS ermitteln als
#define ParamLOG_fOOffFunction                       (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffFunction)))
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fOOffKOKind                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffKOKind)) & LOG_fOOffKOKindMask) >> LOG_fOOffKOKindShift)
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fOOffKONumber                       (knx.paramWord(LOG_ParamCalcIndex(LOG_fOOffKONumber)))
//     Nummer des Kommunikationsobjekts
#define ParamLOG_fOOffKONumberRel                    ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fOOffKONumberRel)))
//     DPT des Kommunikationsobjekts
#define ParamLOG_fOOffKODpt                          (knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffKODpt)))
//     Wert für AUS an ein zusätzliches    KO senden?
#define ParamLOG_fOOffKOSend                         ((knx.paramByte(LOG_ParamCalcIndex(LOG_fOOffKOSend)) & LOG_fOOffKOSendMask) >> LOG_fOOffKOSendShift)
//         Nummer des zusätzlichen KO
#define ParamLOG_fOOffKOSendNumber                   (knx.paramWord(LOG_ParamCalcIndex(LOG_fOOffKOSendNumber)))
//         Nummer des zusätzlichen KO
#define ParamLOG_fOOffKOSendNumberRel                ((int16_t)knx.paramWord(LOG_ParamCalcIndex(LOG_fOOffKOSendNumberRel)))

// deprecated
#define LOG_KoOffset 550

// Communication objects per channel (multiple occurrence)
#define LOG_KoBlockOffset 550
#define LOG_KoBlockSize 3

#define LOG_KoCalcNumber(index) (index + LOG_KoBlockOffset + _channelIndex * LOG_KoBlockSize)
#define LOG_KoCalcIndex(number) ((number >= LOG_KoCalcNumber(0) && number < LOG_KoCalcNumber(LOG_KoBlockSize)) ? (number - LOG_KoBlockOffset) % LOG_KoBlockSize : -1)
#define LOG_KoCalcChannel(number) ((number >= LOG_KoBlockOffset && number < LOG_KoBlockOffset + LOG_ChannelCount * LOG_KoBlockSize) ? (number - LOG_KoBlockOffset) / LOG_KoBlockSize : -1)

#define LOG_KoKOfE1 0
#define LOG_KoKOfE2 1
#define LOG_KoKOfO 2

// Eingang 1
#define KoLOG_KOfE1                               (knx.getGroupObject(LOG_KoCalcNumber(LOG_KoKOfE1)))
// Eingang 2
#define KoLOG_KOfE2                               (knx.getGroupObject(LOG_KoCalcNumber(LOG_KoKOfE2)))
// Ausgang
#define KoLOG_KOfO                                (knx.getGroupObject(LOG_KoCalcNumber(LOG_KoKOfO)))

#define FCB_VisibleChannels                     6222      // uint8_t

// Verfügbare Kanäle
#define ParamFCB_VisibleChannels                     (knx.paramByte(FCB_VisibleChannels))

#define FCB_ChannelCount 1

// Parameter per channel
#define FCB_ParamBlockOffset 6223
#define FCB_ParamBlockSize 71
#define FCB_ParamCalcIndex(index) (index + FCB_ParamBlockOffset + _channelIndex * FCB_ParamBlockSize)

#define FCB_CHChannelType                        0      // 8 Bits, Bit 7-0
#define FCB_CHChannelDisabled                    1      // 1 Bit, Bit 7
#define     FCB_CHChannelDisabledMask 0x80
#define     FCB_CHChannelDisabledShift 7
#define FCB_CHLogicKo0D                          2      // 2 Bits, Bit 7-6
#define     FCB_CHLogicKo0DMask 0xC0
#define     FCB_CHLogicKo0DShift 6
#define FCB_CHLogicKo1D                          2      // 2 Bits, Bit 5-4
#define     FCB_CHLogicKo1DMask 0x30
#define     FCB_CHLogicKo1DShift 4
#define FCB_CHLogicKo2D                          2      // 2 Bits, Bit 3-2
#define     FCB_CHLogicKo2DMask 0x0C
#define     FCB_CHLogicKo2DShift 2
#define FCB_CHLogicKo3D                          2      // 2 Bits, Bit 1-0
#define     FCB_CHLogicKo3DMask 0x03
#define     FCB_CHLogicKo3DShift 0
#define FCB_CHLogicKo4D                          3      // 2 Bits, Bit 7-6
#define     FCB_CHLogicKo4DMask 0xC0
#define     FCB_CHLogicKo4DShift 6
#define FCB_CHLogicKo5D                          3      // 2 Bits, Bit 5-4
#define     FCB_CHLogicKo5DMask 0x30
#define     FCB_CHLogicKo5DShift 4
#define FCB_CHLogicKo6D                          3      // 2 Bits, Bit 3-2
#define     FCB_CHLogicKo6DMask 0x0C
#define     FCB_CHLogicKo6DShift 2
#define FCB_CHLogicKo7D                          3      // 2 Bits, Bit 1-0
#define     FCB_CHLogicKo7DMask 0x03
#define     FCB_CHLogicKo7DShift 0
#define FCB_CHLogicKo8D                          4      // 2 Bits, Bit 7-6
#define     FCB_CHLogicKo8DMask 0xC0
#define     FCB_CHLogicKo8DShift 6
#define FCB_CHLogicOutInv                        4      // 1 Bit, Bit 4
#define     FCB_CHLogicOutInvMask 0x10
#define     FCB_CHLogicOutInvShift 4
#define FCB_CHLogicBehavKo0                      5      // 4 Bits, Bit 7-4
#define     FCB_CHLogicBehavKo0Mask 0xF0
#define     FCB_CHLogicBehavKo0Shift 4
#define FCB_CHLogicBehavKo1                      5      // 4 Bits, Bit 3-0
#define     FCB_CHLogicBehavKo1Mask 0x0F
#define     FCB_CHLogicBehavKo1Shift 0
#define FCB_CHLogicBehavKo2                      6      // 4 Bits, Bit 7-4
#define     FCB_CHLogicBehavKo2Mask 0xF0
#define     FCB_CHLogicBehavKo2Shift 4
#define FCB_CHLogicBehavKo3                      6      // 4 Bits, Bit 3-0
#define     FCB_CHLogicBehavKo3Mask 0x0F
#define     FCB_CHLogicBehavKo3Shift 0
#define FCB_CHLogicBehavKo4                      7      // 4 Bits, Bit 7-4
#define     FCB_CHLogicBehavKo4Mask 0xF0
#define     FCB_CHLogicBehavKo4Shift 4
#define FCB_CHLogicBehavKo5                      7      // 4 Bits, Bit 3-0
#define     FCB_CHLogicBehavKo5Mask 0x0F
#define     FCB_CHLogicBehavKo5Shift 0
#define FCB_CHLogicBehavKo6                      8      // 4 Bits, Bit 7-4
#define     FCB_CHLogicBehavKo6Mask 0xF0
#define     FCB_CHLogicBehavKo6Shift 4
#define FCB_CHLogicBehavKo7                      8      // 4 Bits, Bit 3-0
#define     FCB_CHLogicBehavKo7Mask 0x0F
#define     FCB_CHLogicBehavKo7Shift 0
#define FCB_CHLogicBehavKo8                      9      // 4 Bits, Bit 7-4
#define     FCB_CHLogicBehavKo8Mask 0xF0
#define     FCB_CHLogicBehavKo8Shift 4
#define FCB_CHLogicBehavOut                      9      // 1 Bit, Bit 3
#define     FCB_CHLogicBehavOutMask 0x08
#define     FCB_CHLogicBehavOutShift 3
#define FCB_CHPrioKo0D                           2      // 2 Bits, Bit 7-6
#define     FCB_CHPrioKo0DMask 0xC0
#define     FCB_CHPrioKo0DShift 6
#define FCB_CHPrioKo1D                           2      // 2 Bits, Bit 5-4
#define     FCB_CHPrioKo1DMask 0x30
#define     FCB_CHPrioKo1DShift 4
#define FCB_CHPrioKo2D                           2      // 2 Bits, Bit 3-2
#define     FCB_CHPrioKo2DMask 0x0C
#define     FCB_CHPrioKo2DShift 2
#define FCB_CHPrioKo3D                           2      // 2 Bits, Bit 1-0
#define     FCB_CHPrioKo3DMask 0x03
#define     FCB_CHPrioKo3DShift 0
#define FCB_CHPrioKo4D                           3      // 2 Bits, Bit 7-6
#define     FCB_CHPrioKo4DMask 0xC0
#define     FCB_CHPrioKo4DShift 6
#define FCB_CHPrioKo5D                           3      // 2 Bits, Bit 5-4
#define     FCB_CHPrioKo5DMask 0x30
#define     FCB_CHPrioKo5DShift 4
#define FCB_CHPrioKo6D                           3      // 2 Bits, Bit 3-2
#define     FCB_CHPrioKo6DMask 0x0C
#define     FCB_CHPrioKo6DShift 2
#define FCB_CHPrioKo7D                           3      // 2 Bits, Bit 1-0
#define     FCB_CHPrioKo7DMask 0x03
#define     FCB_CHPrioKo7DShift 0
#define FCB_CHPrioKo8D                           4      // 2 Bits, Bit 7-6
#define     FCB_CHPrioKo8DMask 0xC0
#define     FCB_CHPrioKo8DShift 6
#define FCB_CHPrioOutputType                     4      // 2 Bits, Bit 5-4
#define     FCB_CHPrioOutputTypeMask 0x30
#define     FCB_CHPrioOutputTypeShift 4
#define FCB_CHPrioOutPKo0                        5      // uint8_t
#define FCB_CHPrioOutByteKo0                     5      // uint8_t
#define FCB_CHPrioOutSceneKo0                    5      // uint8_t
#define FCB_CHPrioOutPKo1                        6      // uint8_t
#define FCB_CHPrioOutByteKo1                     6      // uint8_t
#define FCB_CHPrioOutSceneKo1                    6      // uint8_t
#define FCB_CHPrioOutPKo2                        7      // uint8_t
#define FCB_CHPrioOutByteKo2                     7      // uint8_t
#define FCB_CHPrioOutSceneKo2                    7      // uint8_t
#define FCB_CHPrioOutPKo3                        8      // uint8_t
#define FCB_CHPrioOutByteKo3                     8      // uint8_t
#define FCB_CHPrioOutSceneKo3                    8      // uint8_t
#define FCB_CHPrioOutPKo4                        9      // uint8_t
#define FCB_CHPrioOutByteKo4                     9      // uint8_t
#define FCB_CHPrioOutSceneKo4                    9      // uint8_t
#define FCB_CHPrioOutPKo5                       10      // uint8_t
#define FCB_CHPrioOutByteKo5                    10      // uint8_t
#define FCB_CHPrioOutSceneKo5                   10      // uint8_t
#define FCB_CHPrioOutPKo6                       11      // uint8_t
#define FCB_CHPrioOutByteKo6                    11      // uint8_t
#define FCB_CHPrioOutSceneKo6                   11      // uint8_t
#define FCB_CHPrioOutPKo7                       12      // uint8_t
#define FCB_CHPrioOutByteKo7                    12      // uint8_t
#define FCB_CHPrioOutSceneKo7                   12      // uint8_t
#define FCB_CHPrioOutPKo8                       13      // uint8_t
#define FCB_CHPrioOutByteKo8                    13      // uint8_t
#define FCB_CHPrioOutSceneKo8                   13      // uint8_t
#define FCB_CHPrioOutPDefault                   14      // uint8_t
#define FCB_CHPrioOutByteDefault                14      // uint8_t
#define FCB_CHPrioOutSceneDefault               14      // uint8_t
#define FCB_CHPrioBehavKo0                      15      // 4 Bits, Bit 7-4
#define     FCB_CHPrioBehavKo0Mask 0xF0
#define     FCB_CHPrioBehavKo0Shift 4
#define FCB_CHPrioBehavKo1                      15      // 4 Bits, Bit 3-0
#define     FCB_CHPrioBehavKo1Mask 0x0F
#define     FCB_CHPrioBehavKo1Shift 0
#define FCB_CHPrioBehavKo2                      16      // 4 Bits, Bit 7-4
#define     FCB_CHPrioBehavKo2Mask 0xF0
#define     FCB_CHPrioBehavKo2Shift 4
#define FCB_CHPrioBehavKo3                      16      // 4 Bits, Bit 3-0
#define     FCB_CHPrioBehavKo3Mask 0x0F
#define     FCB_CHPrioBehavKo3Shift 0
#define FCB_CHPrioBehavKo4                      17      // 4 Bits, Bit 7-4
#define     FCB_CHPrioBehavKo4Mask 0xF0
#define     FCB_CHPrioBehavKo4Shift 4
#define FCB_CHPrioBehavKo5                      17      // 4 Bits, Bit 3-0
#define     FCB_CHPrioBehavKo5Mask 0x0F
#define     FCB_CHPrioBehavKo5Shift 0
#define FCB_CHPrioBehavKo6                      18      // 4 Bits, Bit 7-4
#define     FCB_CHPrioBehavKo6Mask 0xF0
#define     FCB_CHPrioBehavKo6Shift 4
#define FCB_CHPrioBehavKo7                      18      // 4 Bits, Bit 3-0
#define     FCB_CHPrioBehavKo7Mask 0x0F
#define     FCB_CHPrioBehavKo7Shift 0
#define FCB_CHPrioBehavKo8                      19      // 4 Bits, Bit 7-4
#define     FCB_CHPrioBehavKo8Mask 0xF0
#define     FCB_CHPrioBehavKo8Shift 4
#define FCB_CHPrioBehavOut                      19      // 1 Bit, Bit 3
#define     FCB_CHPrioBehavOutMask 0x08
#define     FCB_CHPrioBehavOutShift 3
#define FCB_CHAggWeight                          2      // 1 Bit, Bit 7
#define     FCB_CHAggWeightMask 0x80
#define     FCB_CHAggWeightShift 7
#define FCB_CHAggType                            2      // 7 Bits, Bit 6-0
#define     FCB_CHAggTypeMask 0x7F
#define     FCB_CHAggTypeShift 0
#define FCB_CHAggKo0D                            3      // 2 Bits, Bit 7-6
#define     FCB_CHAggKo0DMask 0xC0
#define     FCB_CHAggKo0DShift 6
#define FCB_CHAggKo1D                            3      // 2 Bits, Bit 5-4
#define     FCB_CHAggKo1DMask 0x30
#define     FCB_CHAggKo1DShift 4
#define FCB_CHAggKo2D                            3      // 2 Bits, Bit 3-2
#define     FCB_CHAggKo2DMask 0x0C
#define     FCB_CHAggKo2DShift 2
#define FCB_CHAggKo3D                            3      // 2 Bits, Bit 1-0
#define     FCB_CHAggKo3DMask 0x03
#define     FCB_CHAggKo3DShift 0
#define FCB_CHAggKo4D                            4      // 2 Bits, Bit 7-6
#define     FCB_CHAggKo4DMask 0xC0
#define     FCB_CHAggKo4DShift 6
#define FCB_CHAggKo5D                            4      // 2 Bits, Bit 5-4
#define     FCB_CHAggKo5DMask 0x30
#define     FCB_CHAggKo5DShift 4
#define FCB_CHAggKo6D                            4      // 2 Bits, Bit 3-2
#define     FCB_CHAggKo6DMask 0x0C
#define     FCB_CHAggKo6DShift 2
#define FCB_CHAggKo7D                            4      // 2 Bits, Bit 1-0
#define     FCB_CHAggKo7DMask 0x03
#define     FCB_CHAggKo7DShift 0
#define FCB_CHAggKo8D                            5      // 2 Bits, Bit 7-6
#define     FCB_CHAggKo8DMask 0xC0
#define     FCB_CHAggKo8DShift 6
#define FCB_CHAggBehavOut                        5      // 1 Bit, Bit 5
#define     FCB_CHAggBehavOutMask 0x20
#define     FCB_CHAggBehavOutShift 5
#define FCB_CHAggOutputRounding                  5      // 1 Bit, Bit 3
#define     FCB_CHAggOutputRoundingMask 0x08
#define     FCB_CHAggOutputRoundingShift 3
#define FCB_CHAggOutputOverflow                  5      // 2 Bits, Bit 2-1
#define     FCB_CHAggOutputOverflowMask 0x06
#define     FCB_CHAggOutputOverflowShift 1
#define FCB_CHAggInputDpt                        6      // 8 Bits, Bit 7-0
#define FCB_CHAggOutputDptEff                    7      // 8 Bits, Bit 7-0
#define FCB_CHAggKo0W                            8      // int8_t
#define FCB_CHAggKo1W                            9      // int8_t
#define FCB_CHAggKo2W                           10      // int8_t
#define FCB_CHAggKo3W                           11      // int8_t
#define FCB_CHAggKo4W                           12      // int8_t
#define FCB_CHAggKo5W                           13      // int8_t
#define FCB_CHAggKo6W                           14      // int8_t
#define FCB_CHAggKo7W                           15      // int8_t
#define FCB_CHAggKo8W                           16      // int8_t
#define FCB_CHCountDownTimeStartKo               2      // 4 Bits, Bit 7-4
#define     FCB_CHCountDownTimeStartKoMask 0xF0
#define     FCB_CHCountDownTimeStartKoShift 4
#define FCB_CHCountDownDelayBase                 3      // 2 Bits, Bit 7-6
#define     FCB_CHCountDownDelayBaseMask 0xC0
#define     FCB_CHCountDownDelayBaseShift 6
#define FCB_CHCountDownDelayTime                 3      // 14 Bits, Bit 13-0
#define     FCB_CHCountDownDelayTimeMask 0x3FFF
#define     FCB_CHCountDownDelayTimeShift 0
#define FCB_CHCountDownTimeOffset                5      // 4 Bits, Bit 7-4
#define     FCB_CHCountDownTimeOffsetMask 0xF0
#define     FCB_CHCountDownTimeOffsetShift 4
#define FCB_CHCountDownTrigger                   5      // 4 Bits, Bit 3-0
#define     FCB_CHCountDownTriggerMask 0x0F
#define     FCB_CHCountDownTriggerShift 0
#define FCB_CHCountDownTemplate                  6      // char*, 14 Byte
#define FCB_CHCountDownTemplate1h               21      // char*, 14 Byte
#define FCB_CHCountDownTemplate1m               36      // char*, 14 Byte
#define FCB_CHCountDownTemplateEnd              51      // char*, 14 Byte
#define FCB_CHCountDownTextPause                66      // char*, 1 Byte
#define FCB_CHCountDownTextRun                  68      // char*, 1 Byte
#define FCB_CHCountDownCounterKo                70      // 4 Bits, Bit 7-4
#define     FCB_CHCountDownCounterKoMask 0xF0
#define     FCB_CHCountDownCounterKoShift 4
#define FCB_CHCountDownTextKo                   70      // 2 Bits, Bit 3-2
#define     FCB_CHCountDownTextKoMask 0x0C
#define     FCB_CHCountDownTextKoShift 2
#define FCB_CHMonitoringValueType                2      // 8 Bits, Bit 7-0
#define FCB_CHMonitoringWDEnabled                3      // 1 Bit, Bit 7
#define     FCB_CHMonitoringWDEnabledMask 0x80
#define     FCB_CHMonitoringWDEnabledShift 7
#define FCB_CHMonitoringWDTTimeoutDelayBase      4      // 2 Bits, Bit 7-6
#define     FCB_CHMonitoringWDTTimeoutDelayBaseMask 0xC0
#define     FCB_CHMonitoringWDTTimeoutDelayBaseShift 6
#define FCB_CHMonitoringWDTTimeoutDelayTime      4      // 14 Bits, Bit 13-0
#define     FCB_CHMonitoringWDTTimeoutDelayTimeMask 0x3FFF
#define     FCB_CHMonitoringWDTTimeoutDelayTimeShift 0
#define FCB_CHMonitoringWDBehavior               6      // 4 Bits, Bit 7-4
#define     FCB_CHMonitoringWDBehaviorMask 0xF0
#define     FCB_CHMonitoringWDBehaviorShift 4
#define FCB_CHMonitoringWDDpt1                   7      // 8 Bits, Bit 7-0
#define FCB_CHMonitoringWDDpt5                   7      // uint8_t
#define FCB_CHMonitoringWDDpt5001                7      // uint8_t
#define FCB_CHMonitoringWDDpt6                   7      // int8_t
#define FCB_CHMonitoringWDDpt7                   7      // uint16_t
#define FCB_CHMonitoringWDDpt8                   7      // int16_t
#define FCB_CHMonitoringWDDpt9                   7      // float
#define FCB_CHMonitoringWDDpt12                  7      // uint32_t
#define FCB_CHMonitoringWDDpt13                  7      // int32_t
#define FCB_CHMonitoringWDDpt14                  7      // float
#define FCB_CHMonitoringWDDpt16                  7      // char*, 14 Byte
#define FCB_CHMonitoringMin                     22      // 4 Bits, Bit 7-4
#define     FCB_CHMonitoringMinMask 0xF0
#define     FCB_CHMonitoringMinShift 4
#define FCB_CHMonitoringMinDpt1                 23      // 1 Bit, Bit 7
#define     FCB_CHMonitoringMinDpt1Mask 0x80
#define     FCB_CHMonitoringMinDpt1Shift 7
#define FCB_CHMonitoringMinDpt5                 23      // uint8_t
#define FCB_CHMonitoringMinDpt5001              23      // uint8_t
#define FCB_CHMonitoringMinDpt6                 23      // int8_t
#define FCB_CHMonitoringMinDpt7                 23      // uint16_t
#define FCB_CHMonitoringMinDpt8                 23      // int16_t
#define FCB_CHMonitoringMinDpt9                 23      // float
#define FCB_CHMonitoringMinDpt12                23      // uint32_t
#define FCB_CHMonitoringMinDpt13                23      // int32_t
#define FCB_CHMonitoringMinDpt14                23      // float
#define FCB_CHMonitoringMax                     27      // 4 Bits, Bit 7-4
#define     FCB_CHMonitoringMaxMask 0xF0
#define     FCB_CHMonitoringMaxShift 4
#define FCB_CHMonitoringMaxDpt1                 28      // 1 Bit, Bit 7
#define     FCB_CHMonitoringMaxDpt1Mask 0x80
#define     FCB_CHMonitoringMaxDpt1Shift 7
#define FCB_CHMonitoringMaxDpt5                 28      // uint8_t
#define FCB_CHMonitoringMaxDpt5001              28      // uint8_t
#define FCB_CHMonitoringMaxDpt6                 28      // int8_t
#define FCB_CHMonitoringMaxDpt7                 28      // uint16_t
#define FCB_CHMonitoringMaxDpt8                 28      // int16_t
#define FCB_CHMonitoringMaxDpt9                 28      // float
#define FCB_CHMonitoringMaxDpt12                28      // uint32_t
#define FCB_CHMonitoringMaxDpt13                28      // int32_t
#define FCB_CHMonitoringMaxDpt14                28      // float
#define FCB_CHMonitoringOutput                  32      // 4 Bits, Bit 7-4
#define     FCB_CHMonitoringOutputMask 0xF0
#define     FCB_CHMonitoringOutputShift 4
#define FCB_CHSelectionValueType                 2      // 8 Bits, Bit 7-0
#define FCB_CHSelectionType                      3      // 8 Bits, Bit 7-0
#define FCB_CHSelectionSwitching                 4      // 4 Bits, Bit 7-4
#define     FCB_CHSelectionSwitchingMask 0xF0
#define     FCB_CHSelectionSwitchingShift 4
#define FCB_CHSelectionStateOutput               4      // 1 Bit, Bit 3
#define     FCB_CHSelectionStateOutputMask 0x08
#define     FCB_CHSelectionStateOutputShift 3
#define FCB_CHBlinkerOnDelayBase                 4      // 2 Bits, Bit 7-6
#define     FCB_CHBlinkerOnDelayBaseMask 0xC0
#define     FCB_CHBlinkerOnDelayBaseShift 6
#define FCB_CHBlinkerOnDelayTime                 4      // 14 Bits, Bit 13-0
#define     FCB_CHBlinkerOnDelayTimeMask 0x3FFF
#define     FCB_CHBlinkerOnDelayTimeShift 0
#define FCB_CHBlinkerOffDelayBase                6      // 2 Bits, Bit 7-6
#define     FCB_CHBlinkerOffDelayBaseMask 0xC0
#define     FCB_CHBlinkerOffDelayBaseShift 6
#define FCB_CHBlinkerOffDelayTime                6      // 14 Bits, Bit 13-0
#define     FCB_CHBlinkerOffDelayTimeMask 0x3FFF
#define     FCB_CHBlinkerOffDelayTimeShift 0
#define FCB_CHBlinkerStart                       8      // 4 Bits, Bit 7-4
#define     FCB_CHBlinkerStartMask 0xF0
#define     FCB_CHBlinkerStartShift 4
#define FCB_CHBlinkerStop                        8      // 4 Bits, Bit 3-0
#define     FCB_CHBlinkerStopMask 0x0F
#define     FCB_CHBlinkerStopShift 0
#define FCB_CHBlinkerBreak                       9      // 4 Bits, Bit 7-4
#define     FCB_CHBlinkerBreakMask 0xF0
#define     FCB_CHBlinkerBreakShift 4
#define FCB_CHBlinkerBreakWithoutBreak           9      // 4 Bits, Bit 7-4
#define     FCB_CHBlinkerBreakWithoutBreakMask 0xF0
#define     FCB_CHBlinkerBreakWithoutBreakShift 4
#define FCB_CHBlinkerOutputDpt                   9      // 8 Bits, Bit 3--4
#define FCB_CHBlinkerOnPercentage               10      // uint8_t
#define FCB_CHBlinkerOffPercentage              11      // uint8_t
#define FCB_CHBlinkerCount                      12      // 8 Bits, Bit 7-0
#define FCB_CHBlinkerStartAnzahl                13      // 1 Bit, Bit 7
#define     FCB_CHBlinkerStartAnzahlMask 0x80
#define     FCB_CHBlinkerStartAnzahlShift 7

// Type
#define ParamFCB_CHChannelType                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHChannelType)))
// Kanal deaktivieren (zu Testzwecken)
#define ParamFCB_CHChannelDisabled                   ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHChannelDisabled)) & FCB_CHChannelDisabledMask))
// Eingang 1
#define ParamFCB_CHLogicKo0D                         ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo0D)) & FCB_CHLogicKo0DMask) >> FCB_CHLogicKo0DShift)
// Eingang 2
#define ParamFCB_CHLogicKo1D                         ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo1D)) & FCB_CHLogicKo1DMask) >> FCB_CHLogicKo1DShift)
// Eingang 3
#define ParamFCB_CHLogicKo2D                         ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo2D)) & FCB_CHLogicKo2DMask) >> FCB_CHLogicKo2DShift)
// Eingang 4
#define ParamFCB_CHLogicKo3D                         (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo3D)) & FCB_CHLogicKo3DMask)
// Eingang 5
#define ParamFCB_CHLogicKo4D                         ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo4D)) & FCB_CHLogicKo4DMask) >> FCB_CHLogicKo4DShift)
// Eingang 6
#define ParamFCB_CHLogicKo5D                         ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo5D)) & FCB_CHLogicKo5DMask) >> FCB_CHLogicKo5DShift)
// Eingang 7
#define ParamFCB_CHLogicKo6D                         ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo6D)) & FCB_CHLogicKo6DMask) >> FCB_CHLogicKo6DShift)
// Eingang 8
#define ParamFCB_CHLogicKo7D                         (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo7D)) & FCB_CHLogicKo7DMask)
// Eingang 9
#define ParamFCB_CHLogicKo8D                         ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicKo8D)) & FCB_CHLogicKo8DMask) >> FCB_CHLogicKo8DShift)
// Invertiert
#define ParamFCB_CHLogicOutInv                       ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicOutInv)) & FCB_CHLogicOutInvMask))
// Initialisierung
#define ParamFCB_CHLogicBehavKo0                     ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavKo0)) & FCB_CHLogicBehavKo0Mask) >> FCB_CHLogicBehavKo0Shift)
// Initialisierung
#define ParamFCB_CHLogicBehavKo1                     (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavKo1)) & FCB_CHLogicBehavKo1Mask)
// Initialisierung
#define ParamFCB_CHLogicBehavKo2                     ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavKo2)) & FCB_CHLogicBehavKo2Mask) >> FCB_CHLogicBehavKo2Shift)
// Initialisierung
#define ParamFCB_CHLogicBehavKo3                     (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavKo3)) & FCB_CHLogicBehavKo3Mask)
// Initialisierung
#define ParamFCB_CHLogicBehavKo4                     ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavKo4)) & FCB_CHLogicBehavKo4Mask) >> FCB_CHLogicBehavKo4Shift)
// Initialisierung
#define ParamFCB_CHLogicBehavKo5                     (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavKo5)) & FCB_CHLogicBehavKo5Mask)
// Initialisierung
#define ParamFCB_CHLogicBehavKo6                     ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavKo6)) & FCB_CHLogicBehavKo6Mask) >> FCB_CHLogicBehavKo6Shift)
// Initialisierung
#define ParamFCB_CHLogicBehavKo7                     (knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavKo7)) & FCB_CHLogicBehavKo7Mask)
// Initialisierung
#define ParamFCB_CHLogicBehavKo8                     ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavKo8)) & FCB_CHLogicBehavKo8Mask) >> FCB_CHLogicBehavKo8Shift)
// Sendeverhalten
#define ParamFCB_CHLogicBehavOut                     ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHLogicBehavOut)) & FCB_CHLogicBehavOutMask))
// Eingang 1
#define ParamFCB_CHPrioKo0D                          ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioKo0D)) & FCB_CHPrioKo0DMask) >> FCB_CHPrioKo0DShift)
// Eingang 2
#define ParamFCB_CHPrioKo1D                          ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioKo1D)) & FCB_CHPrioKo1DMask) >> FCB_CHPrioKo1DShift)
// Eingang 3
#define ParamFCB_CHPrioKo2D                          ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioKo2D)) & FCB_CHPrioKo2DMask) >> FCB_CHPrioKo2DShift)
// Eingang 4
#define ParamFCB_CHPrioKo3D                          (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioKo3D)) & FCB_CHPrioKo3DMask)
// Eingang 5
#define ParamFCB_CHPrioKo4D                          ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioKo4D)) & FCB_CHPrioKo4DMask) >> FCB_CHPrioKo4DShift)
// Eingang 6
#define ParamFCB_CHPrioKo5D                          ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioKo5D)) & FCB_CHPrioKo5DMask) >> FCB_CHPrioKo5DShift)
// Eingang 7
#define ParamFCB_CHPrioKo6D                          ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioKo6D)) & FCB_CHPrioKo6DMask) >> FCB_CHPrioKo6DShift)
// Eingang 8
#define ParamFCB_CHPrioKo7D                          (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioKo7D)) & FCB_CHPrioKo7DMask)
// Eingang 9
#define ParamFCB_CHPrioKo8D                          ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioKo8D)) & FCB_CHPrioKo8DMask) >> FCB_CHPrioKo8DShift)
// Type
#define ParamFCB_CHPrioOutputType                    ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutputType)) & FCB_CHPrioOutputTypeMask) >> FCB_CHPrioOutputTypeShift)
// Ausgangswert
#define ParamFCB_CHPrioOutPKo0                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPKo0)))
// Ausgangswert
#define ParamFCB_CHPrioOutByteKo0                    (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteKo0)))
// Ausgangswert Szenennummer
#define ParamFCB_CHPrioOutSceneKo0                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneKo0)))
// Ausgangswert
#define ParamFCB_CHPrioOutPKo1                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPKo1)))
// Ausgangswert
#define ParamFCB_CHPrioOutByteKo1                    (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteKo1)))
// Ausgangswert Szenennummer
#define ParamFCB_CHPrioOutSceneKo1                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneKo1)))
// Ausgangswert
#define ParamFCB_CHPrioOutPKo2                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPKo2)))
// Ausgangswert
#define ParamFCB_CHPrioOutByteKo2                    (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteKo2)))
// Ausgangswert Szenennummer
#define ParamFCB_CHPrioOutSceneKo2                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneKo2)))
// Ausgangswert
#define ParamFCB_CHPrioOutPKo3                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPKo3)))
// Ausgangswert
#define ParamFCB_CHPrioOutByteKo3                    (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteKo3)))
// Ausgangswert Szenennummer
#define ParamFCB_CHPrioOutSceneKo3                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneKo3)))
// Ausgangswert
#define ParamFCB_CHPrioOutPKo4                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPKo4)))
// Ausgangswert
#define ParamFCB_CHPrioOutByteKo4                    (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteKo4)))
// Ausgangswert Szenennummer
#define ParamFCB_CHPrioOutSceneKo4                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneKo4)))
// Ausgangswert
#define ParamFCB_CHPrioOutPKo5                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPKo5)))
// Ausgangswert
#define ParamFCB_CHPrioOutByteKo5                    (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteKo5)))
// Ausgangswert Szenennummer
#define ParamFCB_CHPrioOutSceneKo5                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneKo5)))
// Ausgangswert
#define ParamFCB_CHPrioOutPKo6                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPKo6)))
// Ausgangswert
#define ParamFCB_CHPrioOutByteKo6                    (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteKo6)))
// Ausgangswert Szenennummer
#define ParamFCB_CHPrioOutSceneKo6                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneKo6)))
// Ausgangswert
#define ParamFCB_CHPrioOutPKo7                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPKo7)))
// Ausgangswert
#define ParamFCB_CHPrioOutByteKo7                    (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteKo7)))
// Ausgangswert Szenennummer
#define ParamFCB_CHPrioOutSceneKo7                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneKo7)))
// Ausgangswert
#define ParamFCB_CHPrioOutPKo8                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPKo8)))
// Ausgangswert
#define ParamFCB_CHPrioOutByteKo8                    (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteKo8)))
// Ausgangswert Szenennummer
#define ParamFCB_CHPrioOutSceneKo8                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneKo8)))
// Ausgangswert wenn alle Eingänge AUS
#define ParamFCB_CHPrioOutPDefault                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutPDefault)))
// Ausgangswert wenn alle Eingänge AUS
#define ParamFCB_CHPrioOutByteDefault                (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutByteDefault)))
// Ausgangswert Szenennummer wenn alle Eingänge AUS
#define ParamFCB_CHPrioOutSceneDefault               (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioOutSceneDefault)))
// Initialisierung
#define ParamFCB_CHPrioBehavKo0                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavKo0)) & FCB_CHPrioBehavKo0Mask) >> FCB_CHPrioBehavKo0Shift)
// Initialisierung
#define ParamFCB_CHPrioBehavKo1                      (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavKo1)) & FCB_CHPrioBehavKo1Mask)
// Initialisierung
#define ParamFCB_CHPrioBehavKo2                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavKo2)) & FCB_CHPrioBehavKo2Mask) >> FCB_CHPrioBehavKo2Shift)
// Initialisierung
#define ParamFCB_CHPrioBehavKo3                      (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavKo3)) & FCB_CHPrioBehavKo3Mask)
// Initialisierung
#define ParamFCB_CHPrioBehavKo4                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavKo4)) & FCB_CHPrioBehavKo4Mask) >> FCB_CHPrioBehavKo4Shift)
// Initialisierung
#define ParamFCB_CHPrioBehavKo5                      (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavKo5)) & FCB_CHPrioBehavKo5Mask)
// Initialisierung
#define ParamFCB_CHPrioBehavKo6                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavKo6)) & FCB_CHPrioBehavKo6Mask) >> FCB_CHPrioBehavKo6Shift)
// Initialisierung
#define ParamFCB_CHPrioBehavKo7                      (knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavKo7)) & FCB_CHPrioBehavKo7Mask)
// Initialisierung
#define ParamFCB_CHPrioBehavKo8                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavKo8)) & FCB_CHPrioBehavKo8Mask) >> FCB_CHPrioBehavKo8Shift)
// Sendeverhalten
#define ParamFCB_CHPrioBehavOut                      ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHPrioBehavOut)) & FCB_CHPrioBehavOutMask))
// Gewichtung der Eingänge
#define ParamFCB_CHAggWeight                         ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggWeight)) & FCB_CHAggWeightMask))
// Funktion
#define ParamFCB_CHAggType                           (knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggType)) & FCB_CHAggTypeMask)
// Eingang 1
#define ParamFCB_CHAggKo0D                           ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo0D)) & FCB_CHAggKo0DMask) >> FCB_CHAggKo0DShift)
// Eingang 2
#define ParamFCB_CHAggKo1D                           ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo1D)) & FCB_CHAggKo1DMask) >> FCB_CHAggKo1DShift)
// Eingang 3
#define ParamFCB_CHAggKo2D                           ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo2D)) & FCB_CHAggKo2DMask) >> FCB_CHAggKo2DShift)
// Eingang 4
#define ParamFCB_CHAggKo3D                           (knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo3D)) & FCB_CHAggKo3DMask)
// Eingang 5
#define ParamFCB_CHAggKo4D                           ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo4D)) & FCB_CHAggKo4DMask) >> FCB_CHAggKo4DShift)
// Eingang 6
#define ParamFCB_CHAggKo5D                           ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo5D)) & FCB_CHAggKo5DMask) >> FCB_CHAggKo5DShift)
// Eingang 7
#define ParamFCB_CHAggKo6D                           ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo6D)) & FCB_CHAggKo6DMask) >> FCB_CHAggKo6DShift)
// Eingang 8
#define ParamFCB_CHAggKo7D                           (knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo7D)) & FCB_CHAggKo7DMask)
// Eingang 9
#define ParamFCB_CHAggKo8D                           ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo8D)) & FCB_CHAggKo8DMask) >> FCB_CHAggKo8DShift)
// Sendeverhalten
#define ParamFCB_CHAggBehavOut                       ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggBehavOut)) & FCB_CHAggBehavOutMask))
// Rundungsmodus
#define ParamFCB_CHAggOutputRounding                 ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggOutputRounding)) & FCB_CHAggOutputRoundingMask))
// Bei Überschreiten des Wertebereichs
#define ParamFCB_CHAggOutputOverflow                 ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggOutputOverflow)) & FCB_CHAggOutputOverflowMask) >> FCB_CHAggOutputOverflowShift)
// Wertetype / DPT
#define ParamFCB_CHAggInputDpt                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggInputDpt)))
// DPT Ausgang
#define ParamFCB_CHAggOutputDptEff                   (knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggOutputDptEff)))
// Gewicht Eingang 1
#define ParamFCB_CHAggKo0W                           ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo0W)))
// Gewicht Eingang 2
#define ParamFCB_CHAggKo1W                           ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo1W)))
// Gewicht Eingang 3
#define ParamFCB_CHAggKo2W                           ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo2W)))
// Gewicht Eingang 4
#define ParamFCB_CHAggKo3W                           ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo3W)))
// Gewicht Eingang 5
#define ParamFCB_CHAggKo4W                           ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo4W)))
// Gewicht Eingang 6
#define ParamFCB_CHAggKo5W                           ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo5W)))
// Gewicht Eingang 7
#define ParamFCB_CHAggKo6W                           ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo6W)))
// Gewicht Eingang 8
#define ParamFCB_CHAggKo7W                           ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo7W)))
// Gewicht Eingang 9
#define ParamFCB_CHAggKo8W                           ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHAggKo8W)))
// Start mit Zeit
#define ParamFCB_CHCountDownTimeStartKo              ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHCountDownTimeStartKo)) & FCB_CHCountDownTimeStartKoMask) >> FCB_CHCountDownTimeStartKoShift)
// Ablaufzeit Einheit
#define ParamFCB_CHCountDownDelayBase                ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHCountDownDelayBase)) & FCB_CHCountDownDelayBaseMask) >> FCB_CHCountDownDelayBaseShift)
// Ablaufzeit
#define ParamFCB_CHCountDownDelayTime                (knx.paramWord(FCB_ParamCalcIndex(FCB_CHCountDownDelayTime)) & FCB_CHCountDownDelayTimeMask)
// Ablaufzeit (in Millisekunden)
#define ParamFCB_CHCountDownDelayTimeMS              (paramDelay(knx.paramWord(FCB_ParamCalcIndex(FCB_CHCountDownDelayTime))))
// Laufzeit Verringern / Erhöhen
#define ParamFCB_CHCountDownTimeOffset               ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHCountDownTimeOffset)) & FCB_CHCountDownTimeOffsetMask) >> FCB_CHCountDownTimeOffsetShift)
// Auslöser / Ende
#define ParamFCB_CHCountDownTrigger                  (knx.paramByte(FCB_ParamCalcIndex(FCB_CHCountDownTrigger)) & FCB_CHCountDownTriggerMask)
// Standard
#define ParamFCB_CHCountDownTemplate                 (knx.paramData(FCB_ParamCalcIndex(FCB_CHCountDownTemplate)))
// kleiner eine Stunde
#define ParamFCB_CHCountDownTemplate1h               (knx.paramData(FCB_ParamCalcIndex(FCB_CHCountDownTemplate1h)))
// kleiner eine Minute
#define ParamFCB_CHCountDownTemplate1m               (knx.paramData(FCB_ParamCalcIndex(FCB_CHCountDownTemplate1m)))
// Ende
#define ParamFCB_CHCountDownTemplateEnd              (knx.paramData(FCB_ParamCalcIndex(FCB_CHCountDownTemplateEnd)))
// Pause
#define ParamFCB_CHCountDownTextPause                (knx.paramData(FCB_ParamCalcIndex(FCB_CHCountDownTextPause)))
// Läuft
#define ParamFCB_CHCountDownTextRun                  (knx.paramData(FCB_ParamCalcIndex(FCB_CHCountDownTextRun)))
// Zähler
#define ParamFCB_CHCountDownCounterKo                ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHCountDownCounterKo)) & FCB_CHCountDownCounterKoMask) >> FCB_CHCountDownCounterKoShift)
// Text
#define ParamFCB_CHCountDownTextKo                   ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHCountDownTextKo)) & FCB_CHCountDownTextKoMask) >> FCB_CHCountDownTextKoShift)
// Werttype
#define ParamFCB_CHMonitoringValueType               (knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringValueType)))
// Zeitüberwachung aktiv
#define ParamFCB_CHMonitoringWDEnabled               ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringWDEnabled)) & FCB_CHMonitoringWDEnabledMask))
// Watchdog Zeitbasis
#define ParamFCB_CHMonitoringWDTTimeoutDelayBase     ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringWDTTimeoutDelayBase)) & FCB_CHMonitoringWDTTimeoutDelayBaseMask) >> FCB_CHMonitoringWDTTimeoutDelayBaseShift)
// Watchdog Zeit
#define ParamFCB_CHMonitoringWDTTimeoutDelayTime     (knx.paramWord(FCB_ParamCalcIndex(FCB_CHMonitoringWDTTimeoutDelayTime)) & FCB_CHMonitoringWDTTimeoutDelayTimeMask)
// Watchdog Zeit (in Millisekunden)
#define ParamFCB_CHMonitoringWDTTimeoutDelayTimeMS   (paramDelay(knx.paramWord(FCB_ParamCalcIndex(FCB_CHMonitoringWDTTimeoutDelayTime))))
// Verhalten bei Zeitüberschreitung
#define ParamFCB_CHMonitoringWDBehavior              ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringWDBehavior)) & FCB_CHMonitoringWDBehaviorMask) >> FCB_CHMonitoringWDBehaviorShift)
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt1                  (knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt1)))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt5                  (knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt5)))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt5001               (knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt5001)))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt6                  ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt6)))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt7                  (knx.paramWord(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt7)))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt8                  ((int16_t)knx.paramWord(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt8)))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt9                  (knx.paramFloat(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt9), Float_Enc_IEEE754Single))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt12                 (knx.paramInt(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt12)))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt13                 ((int32_t)knx.paramInt(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt13)))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt14                 (knx.paramFloat(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt14), Float_Enc_IEEE754Single))
// Ersatzwert
#define ParamFCB_CHMonitoringWDDpt16                 (knx.paramData(FCB_ParamCalcIndex(FCB_CHMonitoringWDDpt16)))
// Verhalten bei Wertunterschreitung
#define ParamFCB_CHMonitoringMin                     ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMin)) & FCB_CHMonitoringMinMask) >> FCB_CHMonitoringMinShift)
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt1                 ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt1)) & FCB_CHMonitoringMinDpt1Mask))
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt5                 (knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt5)))
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt5001              (knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt5001)))
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt6                 ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt6)))
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt7                 (knx.paramWord(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt7)))
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt8                 ((int16_t)knx.paramWord(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt8)))
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt9                 (knx.paramFloat(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt9), Float_Enc_IEEE754Single))
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt12                (knx.paramInt(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt12)))
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt13                ((int32_t)knx.paramInt(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt13)))
// Minimaler zulässiger Wert
#define ParamFCB_CHMonitoringMinDpt14                (knx.paramFloat(FCB_ParamCalcIndex(FCB_CHMonitoringMinDpt14), Float_Enc_IEEE754Single))
// Verhalten bei Wertüberschreitung
#define ParamFCB_CHMonitoringMax                     ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMax)) & FCB_CHMonitoringMaxMask) >> FCB_CHMonitoringMaxShift)
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt1                 ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt1)) & FCB_CHMonitoringMaxDpt1Mask))
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt5                 (knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt5)))
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt5001              (knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt5001)))
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt6                 ((int8_t)knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt6)))
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt7                 (knx.paramWord(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt7)))
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt8                 ((int16_t)knx.paramWord(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt8)))
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt9                 (knx.paramFloat(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt9), Float_Enc_IEEE754Single))
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt12                (knx.paramInt(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt12)))
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt13                ((int32_t)knx.paramInt(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt13)))
// Maximaler zulässiger Wert
#define ParamFCB_CHMonitoringMaxDpt14                (knx.paramFloat(FCB_ParamCalcIndex(FCB_CHMonitoringMaxDpt14), Float_Enc_IEEE754Single))
// Sendeverhalten
#define ParamFCB_CHMonitoringOutput                  ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHMonitoringOutput)) & FCB_CHMonitoringOutputMask) >> FCB_CHMonitoringOutputShift)
// Datentype
#define ParamFCB_CHSelectionValueType                (knx.paramByte(FCB_ParamCalcIndex(FCB_CHSelectionValueType)))
// Anzahl und Typ der Auswahlen (mit gemeinsamen Auswahl-Eingang)
#define ParamFCB_CHSelectionType                     (knx.paramByte(FCB_ParamCalcIndex(FCB_CHSelectionType)))
// Bei Umschaltung
#define ParamFCB_CHSelectionSwitching                ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHSelectionSwitching)) & FCB_CHSelectionSwitchingMask) >> FCB_CHSelectionSwitchingShift)
// Auswahl Status Objekt
#define ParamFCB_CHSelectionStateOutput              ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHSelectionStateOutput)) & FCB_CHSelectionStateOutputMask))
// Blinker EIN Zeitbasis
#define ParamFCB_CHBlinkerOnDelayBase                ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerOnDelayBase)) & FCB_CHBlinkerOnDelayBaseMask) >> FCB_CHBlinkerOnDelayBaseShift)
// Blinker EIN Zeit
#define ParamFCB_CHBlinkerOnDelayTime                (knx.paramWord(FCB_ParamCalcIndex(FCB_CHBlinkerOnDelayTime)) & FCB_CHBlinkerOnDelayTimeMask)
// Blinker EIN Zeit (in Millisekunden)
#define ParamFCB_CHBlinkerOnDelayTimeMS              (paramDelay(knx.paramWord(FCB_ParamCalcIndex(FCB_CHBlinkerOnDelayTime))))
// Blinker AUS Zeitbasis
#define ParamFCB_CHBlinkerOffDelayBase               ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerOffDelayBase)) & FCB_CHBlinkerOffDelayBaseMask) >> FCB_CHBlinkerOffDelayBaseShift)
// Blinker AUS Zeit
#define ParamFCB_CHBlinkerOffDelayTime               (knx.paramWord(FCB_ParamCalcIndex(FCB_CHBlinkerOffDelayTime)) & FCB_CHBlinkerOffDelayTimeMask)
// Blinker AUS Zeit (in Millisekunden)
#define ParamFCB_CHBlinkerOffDelayTimeMS             (paramDelay(knx.paramWord(FCB_ParamCalcIndex(FCB_CHBlinkerOffDelayTime))))
// Start
#define ParamFCB_CHBlinkerStart                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerStart)) & FCB_CHBlinkerStartMask) >> FCB_CHBlinkerStartShift)
// Ende
#define ParamFCB_CHBlinkerStop                       (knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerStop)) & FCB_CHBlinkerStopMask)
// AUS Telegram am 'Start' Eingang
#define ParamFCB_CHBlinkerBreak                      ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerBreak)) & FCB_CHBlinkerBreakMask) >> FCB_CHBlinkerBreakShift)
// AUS Telegram am 'Start' Eingang
#define ParamFCB_CHBlinkerBreakWithoutBreak          ((knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerBreakWithoutBreak)) & FCB_CHBlinkerBreakWithoutBreakMask) >> FCB_CHBlinkerBreakWithoutBreakShift)
// Ausgang
#define ParamFCB_CHBlinkerOutputDpt                  (knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerOutputDpt)))
// Wert für EIN
#define ParamFCB_CHBlinkerOnPercentage               (knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerOnPercentage)))
// Wert für AUS
#define ParamFCB_CHBlinkerOffPercentage              (knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerOffPercentage)))
// Anzahl der Blinkvorgänge
#define ParamFCB_CHBlinkerCount                      (knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerCount)))
// Objekt zum Starten mit Anzahl
#define ParamFCB_CHBlinkerStartAnzahl                ((bool)(knx.paramByte(FCB_ParamCalcIndex(FCB_CHBlinkerStartAnzahl)) & FCB_CHBlinkerStartAnzahlMask))

// deprecated
#define FCB_KoOffset 850

// Communication objects per channel (multiple occurrence)
#define FCB_KoBlockOffset 850
#define FCB_KoBlockSize 10

#define FCB_KoCalcNumber(index) (index + FCB_KoBlockOffset + _channelIndex * FCB_KoBlockSize)
#define FCB_KoCalcIndex(number) ((number >= FCB_KoCalcNumber(0) && number < FCB_KoCalcNumber(FCB_KoBlockSize)) ? (number - FCB_KoBlockOffset) % FCB_KoBlockSize : -1)
#define FCB_KoCalcChannel(number) ((number >= FCB_KoBlockOffset && number < FCB_KoBlockOffset + FCB_ChannelCount * FCB_KoBlockSize) ? (number - FCB_KoBlockOffset) / FCB_KoBlockSize : -1)

#define FCB_KoCHKO0 0
#define FCB_KoCHKO1 1
#define FCB_KoCHKO2 2
#define FCB_KoCHKO3 3
#define FCB_KoCHKO4 4
#define FCB_KoCHKO5 5
#define FCB_KoCHKO6 6
#define FCB_KoCHKO7 7
#define FCB_KoCHKO8 8
#define FCB_KoCHKO9 9

// 
#define KoFCB_CHKO0                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO0)))
// 
#define KoFCB_CHKO1                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO1)))
// 
#define KoFCB_CHKO2                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO2)))
// 
#define KoFCB_CHKO3                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO3)))
// 
#define KoFCB_CHKO4                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO4)))
// 
#define KoFCB_CHKO5                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO5)))
// 
#define KoFCB_CHKO6                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO6)))
// 
#define KoFCB_CHKO7                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO7)))
// 
#define KoFCB_CHKO8                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO8)))
// 
#define KoFCB_CHKO9                               (knx.getGroupObject(FCB_KoCalcNumber(FCB_KoCHKO9)))



// Header generation for Module 'BASE_KommentarModule'

#define BASE_KommentarModuleCount 0
#define BASE_KommentarModuleModuleParamSize 0
#define BASE_KommentarModuleSubmodulesParamSize 0
#define BASE_KommentarModuleParamSize 0
#define BASE_KommentarModuleParamOffset 6294
#define BASE_KommentarModuleCalcIndex(index, m1) (index + BASE_KommentarModuleParamOffset + _channelIndex * BASE_KommentarModuleCount * BASE_KommentarModuleParamSize + m1 * BASE_KommentarModuleParamSize)



