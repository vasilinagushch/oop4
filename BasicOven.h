#pragma once
#include "SmartOven.h"

class BasicOven : public SmartOven {
public:
    void turnOn() override;
    void turnOff() override;
    std::string getStatus() override;
    void startCooking();
    void setTemperature(int temp);
};
