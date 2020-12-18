# ESP8266 / ESP32 to DMX over MAX485
An example on how to send dmx over a max485 with an ESP8266 or ESP32.

### Important
The library uses multiple Serial protocols which is **very** slow! I am using a new library for the `ESP32`, which does the protocol change directly through chaning the registers. Please take a look at the library here ([LXESP32DMX](https://github.com/bildspur/til/tree/master/src/controller/driver/LXESP32DMX)). Here is an example on how to use it ([DMXLightRenderer.h](https://github.com/bildspur/til/blob/master/src/controller/renderer/DMXLightRenderer.h))

### Library
- [DMX Library for Arduino with ESP8266](https://github.com/Rickgg/ESP-Dmx)

### MAX485 to RS485 MCU
[![Max485](documentation/max485.jpg)](https://www.aliexpress.com/item/FREE-SHIPPING-5PCS-LOT-MAX485-module-RS485-module-TTL-turn-RS-485-module-MCU-development-accessories/1738470391.html?spm=2114.search0104.3.57.4be9268aPDQrqa&ws_ab_test=searchweb0_0,searchweb201602_3_10065_10068_204_318_319_10059_10884_10887_100031_10696_450_320_10084_10083_10103_452_10618_535_534_10307_533_532_448_449_10134,searchweb201603_2,ppcSwitch_0&algo_expid=0ea8df45-c2bc-4a0a-afba-c7e46db1f402-8&algo_pvid=0ea8df45-c2bc-4a0a-afba-c7e46db1f402)

### Circuit for NodeMCU V1.0
*Caution: This is just an example that worked for me. Have a look at [#1](https://github.com/cansik/esp-dmx-max485/issues/1) for more information about safe wiring!*
![Circuit](documentation/ESP8266_DMXController_Prototype_schem.png)
