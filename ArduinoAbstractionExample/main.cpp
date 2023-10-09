#include <Arduino.h>
#include "ThirdParty/SI7021/SI7021.h"


SI7021 sensor;
int led1 = 3;
int led2 = 4;

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode (I2C_SENSOR_ENABLE, PinMode::OUTPUT);
    digitalWrite (I2C_SENSOR_ENABLE, PinStatus::HIGH);
    sensor.begin();
}


void loop() {

    // temperature is an integer in hundredths
    int temperature = sensor.getCelsiusHundredths();
    temperature = temperature / 100;
    Serial.print("Temprature: ");
    Serial.println(temperature);

    delay(5000);

    // humidity is an integer representing percent
    int humidity = sensor.getHumidityPercent();
    Serial.print("Humidity: ");
    Serial.println(humidity);

    delay(5000);

    // this driver should work for SI7020 and SI7021, this returns 20 or 21
    int deviceid = sensor.getDeviceId();
    Serial.print("Device ID: ");
    Serial.println(deviceid, HEX);
    delay(5000);
}

