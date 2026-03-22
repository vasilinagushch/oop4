#include "FullSizeDishwasher.h"
#include <iostream>

void FullSizeDishwasher::turnOn() {
    std::cout << "[Полноразмерная посудомойка] Включена\n";
}

void FullSizeDishwasher::turnOff() {
    std::cout << "[Полноразмерная посудомойка] Выключена\n";
}

std::string FullSizeDishwasher::getStatus() {
    return "Полноразмерная посудомойка работает";
}

void FullSizeDishwasher::startProgram() {
    std::cout << "[Полноразмерная посудомойка] Запуск программы\n";
}

void FullSizeDishwasher::intensiveWash() {
    std::cout << "[Полноразмерная посудомойка] Интенсивная мойка\n";
}