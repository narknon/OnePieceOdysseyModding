#include "KizokSkillPresenNotifyState.h"

UKizokSkillPresenNotifyState::UKizokSkillPresenNotifyState() {
    this->OffsetFromCenter = 0.00f;
    this->bDisableSetDirWhenDamaged = false;
    this->SequenceAsset = NULL;
    this->BigSequenceAsset = NULL;
    this->bSwitchSeqByCostume = false;
    this->bTargetApproaches = true;
    this->bHiddenBPActor = false;
    this->SmallDistance = 100.00f;
    this->BigDistance = 100.00f;
}

