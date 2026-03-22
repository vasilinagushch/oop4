#pragma once
#include "CentralController.h"
#include <iostream>

class GasSensor {
private:
    CentralController* controller;

public:
    void setController(CentralController* c) {
        controller = c;
    }

    void detectEvent();
};