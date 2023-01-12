#include "KizokTableBattleSkill.h"

FKizokTableBattleSkill::FKizokTableBattleSkill() {
    this->SkillParam = 0;
    this->CriticalRate = 0.00f;
    this->ShootingRange = 0;
    this->AreaType = 0;
    this->TargetType = 0;
    this->AttackMag = 0.00f;
    this->AttackAdd = 0.00f;
    this->AttackAdd2 = 0.00f;
    this->AttackAdd3 = 0.00f;
    this->KizunaMag = 0.00f;
    this->KizunaAdd = 0.00f;
    this->SpCost = 0;
    this->ParameterType = ITEM_PARAMTYPE::NONE;
    this->Percentage = false;
    this->Value = 0.00f;
    this->BlowRate = 0;
    this->BlowForce = 0.00f;
    this->ReactionType = 0;
    this->Rule1Param = 0.00f;
    this->Rule2Param = 0.00f;
    this->Rule3Param = 0.00f;
    this->Rule4Param = 0.00f;
    this->Rule5Param = 0.00f;
}

