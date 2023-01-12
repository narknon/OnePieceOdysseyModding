#include "KizokNewBattlePlayerBase.h"
#include "KizokBattleCharaBase.h"

void AKizokNewBattlePlayerBase::OnCostumeLoadCompleted() {
}

void AKizokNewBattlePlayerBase::HideStrawHat() {
}

void AKizokNewBattlePlayerBase::HideLogPose() {
}

AKizokNewBattlePlayerBase::AKizokNewBattlePlayerBase() {
    this->chID = PLAYER_ID::PLAYER_ID_LUF;
    this->OutBlendTime4Damage2Wait = 0.25f;
    this->OutBlendTime4Getup2Wait = 0.25f;
    this->OutBlendTime4Damage2Sick = 0.30f;
    this->OutBlendTime4Getup2Sick = 0.30f;
    this->DitherFadeInTime = 0.20f;
    this->DitherFadeOutTime = 0.10f;
    this->DitherFadeRange = 12000.00f;
    this->BattleCharaBase = CreateDefaultSubobject<UKizokBattleCharaBase>(TEXT("BtlChBase"));
}

