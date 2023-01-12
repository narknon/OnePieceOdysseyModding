#include "KizokLogDispData.h"

FKizokLogDispData::FKizokLogDispData() {
    this->bReleased = false;
    this->CurrentCount = 0;
    this->TargtCount = 0;
    this->bChecked = false;
    this->bCompleted = false;
    this->RewardType = EKizokLogRewardType::Text;
    this->RewardNum = 0;
    this->RewardIconCategory = 0;
    this->bReceivedReward = false;
}

