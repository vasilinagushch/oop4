#include "InductionCooktop.h"
#include <iostream>

void InductionCooktop::detectCookware() {
    std::cout << "[Индукционная плита] Посуда обнаружена\n";
}

void InductionCooktop::turnOn() {
    std::cout << "[Индукционная плита] Включена\n";
}

void InductionCooktop::turnOff() {
    std::cout << "[Индукционная плита] Выключена\n";
}

std::string InductionCooktop::getStatus() {
    return "Индукционная плита работает";
}

void InductionCooktop::turnOnBurner() {
    std::cout << "[Индукционная плита] Конфорка включена\n";
}