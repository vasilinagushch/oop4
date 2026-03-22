#pragma once
#include "BasicHood.h"

void BasicHood::turnOn() {
    std::cout << "[Базовая вытяжка] Включена\n";
}

void BasicHood::turnOff() {
    std::cout << "[Базовая вытяжка] Выключена\n";
}

std::string BasicHood::getStatus() {
    return "Базовая вытяжка работает";
}