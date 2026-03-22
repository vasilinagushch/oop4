#include "CentralController.h"

void CentralController::addDevice(SmartDevice* device) {
    devices.push_back(device);
    std::cout << "[Контроллер] Устройство добавлено\n";
}

void CentralController::runAll() {
    for (auto d : devices)
        d->turnOn();
}

void CentralController::handleGasLeak() {
    std::cout << "[Контроллер] АВАРИЯ: утечка газа!\n";
    for (auto d : devices)
        d->turnOff();
}

void CentralController::cookingScenario(SmartCooktop* cooktop, SmartHood* hood) {
    std::cout << "[Сценарий] Начало готовки\n";
    cooktop->turnOnBurner();
    hood->turnOn();
}