#include "KizokRuleTable.h"

FKizokRuleTable::FKizokRuleTable() {
    this->ReactionTimeMIN = 0;
    this->ReactionTimeMAX = 0;
    this->SpecialInfpuence = SPECIAL_INFLUENCE::NONE;
    this->ReleseCondition = RELEASE_CONDITION::NONE;
    this->ParameterType1 = PARAMETER_TYPE::NONE;
    this->Percentage1 = 0;
    this->ChangeValue1 = 0.00f;
    this->ByTurn1 = 0;
    this->ParameterType2 = PARAMETER_TYPE::NONE;
    this->Percentage2 = 0;
    this->ChangeValue2 = 0.00f;
    this->ByTurn2 = 0;
}

