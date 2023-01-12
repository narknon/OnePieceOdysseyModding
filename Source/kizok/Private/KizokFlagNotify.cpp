#include "KizokFlagNotify.h"

UKizokFlagNotify::UKizokFlagNotify() {
    this->NotifyType = eSeqFlag_AttackCancel;
    this->StopTime = 0.00f;
    this->m_IsMotionStop = false;
}

