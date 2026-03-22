#include "GasCooktop.h"
#include <iostream>

void GasCooktop::gasControl() {
    std::cout << "[Газовая плита] Активирован контроль газа\n";
}

void GasCooktop::turnOn() {
    std::cout << "[Газовая плита] Включена\n";
}

void GasCooktop::turnOff() {
    std::cout << "[Газовая плита] Выключена\n";
}

std::string GasCooktop::getStatus() {
    return "Газовая плита работает";
}

void GasCooktop::turnOnBurner() {
    std::cout << "[Газовая плита] Конфорка включена\n";
}