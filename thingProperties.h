// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>


const char THING_ID[]           = "1ff00950-7b48-4205-ad1c-da3936fb10b2";
const char DEVICE_LOGIN_NAME[]  = "4ab2d5ef-7268-45f6-84fc-46c389f266f6";

const char SSID[]               = SECRET_SSID;    // Network SSID (name)
const char PASS[]               = SECRET_PASS;    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = SECRET_DEVICE_KEY;    // Secret device password

void onRelay4Change();
void onFanChange();
void onRelay1Change();
void onRelay2Change();
void onRelay3Change();

CloudLight relay4;
CloudDimmedLight fan;
CloudLight relay1;
CloudLight relay2;
CloudLight relay3;

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.setThingId(THING_ID);
  ArduinoCloud.addProperty(relay4, READWRITE, ON_CHANGE, onRelay4Change);
  ArduinoCloud.addProperty(fan, READWRITE, ON_CHANGE, onFanChange);
  ArduinoCloud.addProperty(relay1, READWRITE, ON_CHANGE, onRelay1Change);
  ArduinoCloud.addProperty(relay2, READWRITE, ON_CHANGE, onRelay2Change);
  ArduinoCloud.addProperty(relay3, READWRITE, ON_CHANGE, onRelay3Change);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
