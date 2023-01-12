#include "FieldOptimizeConfigData.h"

FFieldOptimizeConfigData::FFieldOptimizeConfigData() {
    this->UnloadLevelImmediatelyOnWarp = 0;
    this->LevelStreamingComponentsRegistrationGranularity = 0;
    this->LevelStreamingComponentsUnregistrationGranularity = 0;
    this->UnregisterComponentsTimeLimit = 0.00f;
    this->LevelStreamingActorsUpdateTimeLimit = 0.00f;
    this->WaitLevelRenderAssetsProcessComponentsForVisibleOnPlayable = 0;
}

