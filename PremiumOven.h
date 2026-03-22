#pragma once
#include "SmartOven.h"

class PremiumOven : public SmartOven {
public:
    void turnOn() override;
    void turnOff() override;
    std::string getStatus() override;
    void autoCookRecipe();
    void selfCleaning();
    void setTemperature(int temp) override;
    void startCooking() override;
};