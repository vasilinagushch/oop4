#include "PremiumOven.h"
#include <iostream>

void PremiumOven::turnOn() {
    std::cout << "[Премиум духовка] Включена\n";
}

void PremiumOven::turnOff() {
    std::cout << "[Премиум духовка] Выключена\n";
}

std::string PremiumOven::getStatus() {
    return "Премиум духовка работает";
}

void PremiumOven::setTemperature(int temp) {
    std::cout << "[Премиум духовка] Умная температура: " << temp << "\n";
}

void PremiumOven::autoCookRecipe() {
    std::cout << "[Премиум духовка] Автоматическое приготовление\n";
}

void PremiumOven::selfCleaning() {
    std::cout << "[Премиум духовка] Включена самоотчистка\n";
}

void PremiumOven::startCooking() {
    std::cout << "[Премиум духовка] Начало готовки\n";
}