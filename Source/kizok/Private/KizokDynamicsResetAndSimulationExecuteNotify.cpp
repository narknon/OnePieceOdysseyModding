#include "KizokDynamicsResetAndSimulationExecuteNotify.h"

UKizokDynamicsResetAndSimulationExecuteNotify::UKizokDynamicsResetAndSimulationExecuteNotify() {
    this->ResetType = ETeleportType::None;
    this->IsSimulationExecute = false;
    this->SimulateionExecuteCount = 0;
}

