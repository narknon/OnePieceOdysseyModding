#include "BtlMenuArtsSkill.h"

FBtlMenuArtsSkill::FBtlMenuArtsSkill() {
    this->ActionType = ASP_SKILLTYPES::INVALID;
    this->bUsable = false;
    this->TargetRangeType = EBtlMenuTargetRange::BMTR_Self;
    this->CostGaugeLevel = 0;
    this->CurrentGaugeLevel = 0;
    this->AttackValue = 0;
    this->bContainAttackSkill = false;
}

