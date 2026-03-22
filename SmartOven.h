#pragma once
#include "SmartDevice.h"
#include <string>

class SmartOven : public SmartDevice {
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual std::string getStatus() = 0;

    virtual void setTemperature(int temp) = 0;
    virtual void startCooking() = 0;
};