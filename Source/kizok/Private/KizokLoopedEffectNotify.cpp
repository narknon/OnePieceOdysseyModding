#include "KizokLoopedEffectNotify.h"

UKizokLoopedEffectNotify::UKizokLoopedEffectNotify() {
    this->Action = ELoopedEffectNotifyAction::ELEN_APPEAR;
    this->Uid = 0;
    this->PSTemplate = NULL;
    this->AbsoluteRotation = false;
    this->PostPSTemplate = NULL;
    this->PostAbsoluteRotation = false;
}

