#include "KizokQuestInfoData.h"

FKizokQuestInfoData::FKizokQuestInfoData() {
    this->ConditionType = EKizokQuestInfoConditionType::Normal;
    this->ItemCategory = 0;
    this->CurrentCount = 0;
    this->ConditionCount = 0;
    this->MoveType = EKizokQuestInfoMoveType::New;
}

