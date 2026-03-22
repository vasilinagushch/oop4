#include "PremiumRefrigerator.h"
#include <iostream>


void PremiumRefrigerator::turnOn() {
    std::cout << "[Премиум холодильник] Включен\n";
}

void PremiumRefrigerator::turnOff() {
    std::cout << "[Премиум холодильник] Выключен\n";
}

void PremiumRefrigerator::checkProducts() {
    std::cout << "[Премиум холодильник] Умная проверка\n";
}

void PremiumRefrigerator::analyzeFreshness() {
    std::cout << "[Премиум холодильник] Анализ свежести\n";
}

void PremiumRefrigerator::suggestRecipes() {
    std::cout << "[Премиум холодильник] Предложение рецептов\n";

}

std::string PremiumRefrigerator::getStatus() {
    return "Премиум холодильник работает";
}


