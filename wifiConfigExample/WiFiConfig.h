#ifndef WiFiConfig_h
#define WiFiConfig_h
#include <Arduino.h>
#include <WiFi.h>
#include "esp_wpa2.h"

class WiFiConfig{
  public:
    //config[][0] = ssid, [][1] = password, [][2] = username (normally null), [3] = type (0 = standard, 1 = eduroam) 
    
    const char* configs[5][4];
    void setConfig (int n);

    WiFiConfig();


}

#endif