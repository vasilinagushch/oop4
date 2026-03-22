#include "BasicRefrigerator.h"
#include <iostream>

void BasicRefrigerator::turnOn() {
    std::cout << "[Базовый холодильник] Включен\n";
}

void BasicRefrigerator::turnOff() {
    std::cout << "[Базовый холодильник] Выключен\n";
}

std::string BasicRefrigerator::getStatus() {
    return "Базовый холодильник работает";
}

void BasicRefrigerator::checkProducts() {
    std::cout << "[Базовый холодильник] Проверка продуктов\n";
}