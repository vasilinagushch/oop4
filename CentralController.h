#pragma once
#include <vector>
#include <iostream>
#include "SmartDevice.h"
#include "SmartCooktop.h"
#include "SmartHood.h"

class CentralController {
private:
    std::vector<SmartDevice*> devices;

public:
    void addDevice(SmartDevice* device);
    void runAll();
    void handleGasLeak();
    void cookingScenario(SmartCooktop* cooktop, SmartHood* hood);
};