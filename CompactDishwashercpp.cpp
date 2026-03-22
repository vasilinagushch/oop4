#include "CompactDishwasher.h"
#include <iostream>

void CompactDishwasher::turnOn() {
    std::cout << "[Компактная посудомойка] Включена\n";
}

void CompactDishwasher::turnOff() {
    std::cout << "[Компактная посудомойка] Выключена\n";
}

std::string CompactDishwasher::getStatus() {
    return "Компактная посудомойка работает";
}

void CompactDishwasher::startProgram() {
    std::cout << "[Компактная посудомойка] Запуск программы\n";
}
