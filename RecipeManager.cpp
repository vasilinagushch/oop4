#include "RecipeManager.h"

void RecipeManager::cookRecipe(SmartOven* oven) {
    std::cout << "[Менеджер рецептов] Запуск приготовления блюда\n";
    oven->setTemperature(180);
    oven->startCooking();
}