/********************************************************
  Version 1.1 (28.08.2019)
  Config must be configured by the user
******************************************************/

#ifndef _userConfig_H
#define _userConfig_H

/********************************************************
   Vorab-Konfig
******************************************************/
#define OFFLINEMODUS 0       // 0=Blynk und WLAN wird benötigt 1=OfflineModus (ACHTUNG EINSTELLUNGEN NUR DIREKT IM CODE MÖGLICH)
#define DISPLAY 2            // 1=U8x8libm, 0=Deaktiviert, 2=Externes 128x64 Display
#define ONLYPID 0            // 1=Nur PID ohne Preinfussion, 0=PID + Preinfussion
#define TEMPSENSOR 2         // 1=DS19B20; 2=TSIC306
#define BREWDETECTION 1      // 0 = off ,1 = Software, 2 = Hardware
#define FALLBACK 1           // 1: fallback auf eeprom Werte, wenn blynk nicht geht 0: deaktiviert
#define TRIGGERTYPE HIGH     // LOW = low trigger, HIGH = high trigger relay
#define OTA true             // true=activate update via OTA
#define PONE 1               // 1 = P_ON_E (normal), 0 = P_ON_M (spezieller PID Modus, ACHTUNG andere Formel zur Berechnung)
#define GRAFANA 0            // 1=Markus grafana Visualisierung. Zugang notwendig, 0=default, aus
#define ENABLERELAYS true    // set to false in case of code debugging
#define POWERFLUSH true      // Use the power button as a flusher
#define NUM_LEDS 10          // Number of leds used for heat up animation and brew light

// Wifi
#define AUTH "blynkauthcode"
#define D_SSID "wlanname"
#define PASS "wlanpass"


// OTA
#define OTAHOST "Rancilio"   // Name to be shown in ARUDINO IDE Port
#define OTAPASS "otapass"    // Password for OTA updtates

#define BLYNKADDRESS "blynk.remoteapp.de"         // IP-Address of used blynk server
// define BLYNKADDRESS "raspberrypi.local"


//PID - Werte für Brüherkennung Offline
#define AGGBKP 50    // Kp
#define AGGBTN 0   // Tn
#define AGGBTV 20    // Tv

//PID - Werte für Regelung Offline
#define SETPOINT 95  // Temperatur Sollwert
#define ESTEMP 120 // Temperatur für Emergency Stop
#define AGGKP 69     // Kp
#define AGGTN 399    // Tn
#define AGGTV 0      // Tv
#define STARTKP 100   // Start Kp während Kaltstart
#define STARTTN 0  // Start Tn während Kaltstart
#define STARTTEMP 80 // Temperaturschwelle für deaktivieren des Start Kp
#define BREWTIME 25000
#define PREINFUSION 2000
#define PREINFUSIONPAUSE 5000


#endif // _userConfig_H
