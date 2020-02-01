#ifndef HASP_HTTP_H
#define HASP_HTTP_H

#include <Arduino.h>
#include "ArduinoJson.h"

void httpSetup(const JsonObject & settings);
void httpLoop(bool wifiIsConnected);
void httpReconnect();

bool httpGetConfig(const JsonObject & settings);
bool httpSetConfig(const JsonObject & settings);

#endif