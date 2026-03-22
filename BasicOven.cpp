#include "BasicOven.h"
#include <iostream>

void BasicOven::turnOn() {
    std::cout << "[Базовая духовка] Включена\n";
}

void BasicOven::turnOff() {
    std::cout << "[Базовая духовка] Выключена\n";
}

std::string BasicOven::getStatus() {
    return "Базовая духовка работает";
}

void BasicOven::setTemperature(int temp) {
    std::cout << "[Базовая духовка] Температура: " << temp << "\n";
}

void BasicOven::startCooking() {
    std::cout << "[Базовая духовка] Готовка началась\n";
}