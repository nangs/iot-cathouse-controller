#ifndef _EE_STATIC_CONFIG_H_
#define _EE_STATIC_CONFIG_H_

#include <Arduino.h>

#define EE_SIZE 4096

#define FIRMWARE_VERSION_STRLENMAX 14
#define WIFI_SSID_STRLENMAX 32
#define WIFI_PWD_STRLENMAX 64
#define DS18B20_ID_STRLENMAX 16

struct EEStaticConfig
{
public:
  // firmware version "cathouse-xx.yy"
  char firmwareVersion[FIRMWARE_VERSION_STRLENMAX + 1];

  // wifi station id
  char wifiSSID[WIFI_SSID_STRLENMAX + 1];

  // wifi password
  char wifiPwd[WIFI_PWD_STRLENMAX + 1];

  char tbottomId[DS18B20_ID_STRLENMAX + 1];
  char twoodId[DS18B20_ID_STRLENMAX + 1];
  char tambientId[DS18B20_ID_STRLENMAX + 1];
  char texternId[DS18B20_ID_STRLENMAX + 1];
};

extern EEStaticConfig eeStaticConfig;

// init eeprom and static config
void initEEStaticConfig();

// load static config from eeprom
void loadEEStaticConfig();

// save static config to eeprom
void saveEEStaticConfig();

// states if static config dirty from webapi config parsing
extern bool eeStaticConfigDirty;

#endif