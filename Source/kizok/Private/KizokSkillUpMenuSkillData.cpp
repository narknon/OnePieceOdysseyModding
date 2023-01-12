#include "KizokSkillUpMenuSkillData.h"

FKizokSkillUpMenuSkillData::FKizokSkillUpMenuSkillData() {
    this->PossessCubeNum = 0;
    this->IsUpdated = false;
    this->IsUsable = false;
    this->SkillType = ASP_SKILLTYPES::INVALID;
    this->TargetRange = 0;
    this->bIsDamageSkill = false;
    this->SpCost = 0;
    this->AttackMag = 0.00f;
}

