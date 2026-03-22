#include "CentralController.h"
#include "DeviceProxy.h"
#include "SmartOven.h"
#include "BasicOven.h"
#include "PremiumOven.h"
#include "SmartRefrigerator.h"
#include "BasicRefrigerator.h"
#include "PremiumRefrigerator.h"
#include "SmartCooktop.h"
#include "GasCooktop.h"
#include "InductionCooktop.h"
#include "SmartHood.h"
#include "BasicHood.h"
#include "SilentHood.h"
#include "SmartDishwasher.h"
#include "CompactDishwasher.h"
#include "FullSizeDishwasher.h"
#include "GasSensor.h"
#include "RecipeManager.h"

int main() {
    setlocale(LC_ALL, "rus");
    CentralController controller;

    // Создание холодильников
    BasicRefrigerator* basicFridge = new BasicRefrigerator();
    PremiumRefrigerator* premiumFridge = new PremiumRefrigerator();

    // Создание духовок
    BasicOven* basicOven = new BasicOven();
    PremiumOven* premiumOven = new PremiumOven();

    // Proxy для духовок (опасные устройства)
    DeviceProxy* proxyBasicOven = new DeviceProxy(basicOven);
    DeviceProxy* proxyPremiumOven = new DeviceProxy(premiumOven);

    // Создание варочных панелей
    InductionCooktop* inductionCooktop = new InductionCooktop();
    GasCooktop* gasCooktop = new GasCooktop();

    // Proxy для газовой панели
    DeviceProxy* proxyGasCooktop = new DeviceProxy(gasCooktop);

    // Создание вытяжек
    BasicHood* basicHood = new BasicHood();
    SilentHood* silentHood = new SilentHood();

    // Создание посудомоечных машин
    CompactDishwasher* compactDishwasher = new CompactDishwasher();
    FullSizeDishwasher* fullDishwasher = new FullSizeDishwasher();

    // Добавляем устройства в контроллер
    controller.addDevice(basicFridge);
    controller.addDevice(premiumFridge);
    controller.addDevice(proxyBasicOven);
    controller.addDevice(proxyPremiumOven);
    controller.addDevice(inductionCooktop);
    controller.addDevice(proxyGasCooktop);
    controller.addDevice(basicHood);
    controller.addDevice(silentHood);
    controller.addDevice(compactDishwasher);
    controller.addDevice(fullDishwasher);

    // Сценарий готовки
    controller.cookingScenario(inductionCooktop, silentHood);

    // Управление рецептами (делегирование)
    RecipeManager recipeManager;
    recipeManager.cookRecipe(premiumOven); // Premium
    recipeManager.cookRecipe(basicOven);   // Basic

    // Проверка датчика газа
    GasSensor gasSensor;
    gasSensor.setController(&controller);
    gasSensor.detectEvent();

    // Вызовы функций Premium
    premiumFridge->analyzeFreshness();
    premiumFridge->suggestRecipes();

    premiumOven->autoCookRecipe();
    premiumOven->selfCleaning();

    silentHood->noiseReductionMode();
    fullDishwasher->intensiveWash();

    // Освобождение памяти
    delete basicFridge;
    delete premiumFridge;
    delete basicOven;
    delete premiumOven;
    delete proxyBasicOven;
    delete proxyPremiumOven;
    delete inductionCooktop;
    delete gasCooktop;
    delete proxyGasCooktop;
    delete basicHood;
    delete silentHood;
    delete compactDishwasher;
    delete fullDishwasher;

    return 0;
}