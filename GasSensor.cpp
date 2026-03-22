#include "GasSensor.h"

void GasSensor::detectEvent() {
    std::cout << "[Датчик газа] Обнаружена утечка газа!\n";
    controller->handleGasLeak();
}