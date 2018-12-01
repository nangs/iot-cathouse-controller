#ifndef _CONFIG_H_
#define _CONFIG_H_

#include <Arduino.h>

#define SERIAL_SPEED 115200
#define WEB_PORT 80
#define ENABLE_CORS 1

#define ONEWIRE_PIN D3
#define BUILTIN_LED D4
#define LED_PIN D5
#define FAN_PIN D0

#define MOSFET_P1 D1
#define MOSFET_P2 D2
#define MOSFET_P3 D8
#define MOSFET_P4 D7

#define TEMPERATURE_HISTORY_FREERAM_THRESHOLD (10*1024)
#define TEMPERATURE_HISTORY_BACKLOG_HOURS 48

#endif