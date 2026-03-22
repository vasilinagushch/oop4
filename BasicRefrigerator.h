#pragma once
#include "SmartRefrigerator.h"

class BasicRefrigerator : public SmartRefrigerator {
public:
    void turnOn() override;
    void turnOff() override;
    std::string getStatus() override;
    void checkProducts() override;
};


