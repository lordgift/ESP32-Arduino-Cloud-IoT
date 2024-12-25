// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char DEVICE_LOGIN_NAME[]  = "aa9e84ec-6175-41cc-bc14-aa7321fa5a71";

const char SSID[]               = SECRET_SSID;    // Network SSID (name)
const char PASS[]               = SECRET_OPTIONAL_PASS;    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = SECRET_DEVICE_KEY;    // Secret device password

CloudContactSensor isRaining;
CloudTemperatureSensor builtInTemp;
CloudTemperatureSensor moduleTemp;
CloudRelativeHumidity moduleHumidity;

void initProperties(){
  
  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(isRaining, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(builtInTemp, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(moduleTemp, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(moduleHumidity, READ, ON_CHANGE, NULL);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
