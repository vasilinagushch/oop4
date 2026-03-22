#pragma once
#include "SmartDevice.h"
#include <iostream>

class SmartHood : public SmartDevice {
public:
    void turnOn() = 0;
    void turnOff() = 0;
    std::string getStatus() = 0;
};