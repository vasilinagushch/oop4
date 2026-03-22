#pragma once
#include "SmartHood.h"

class SilentHood : public SmartHood {
public:
    void noiseReductionMode();
    void turnOn() override;
    void turnOff() override;
    std::string getStatus() override;
};