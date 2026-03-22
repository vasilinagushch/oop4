#include "SilentHood.h"
#include <iostream>

void SilentHood::noiseReductionMode() {
    std::cout << "[Вытяжка с пониженным шумом] Снижение шума включено\n";
}

void SilentHood::turnOn() {
    std::cout << "[Вытяжка с пониженным шумом] Включена\n";
}

void SilentHood::turnOff() {
    std::cout << "[Вытяжка с пониженным шумом] Выключена\n";
}

std::string SilentHood::getStatus() {
    return "Вытяжка с пониженным шумом работает";
}
