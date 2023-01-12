#include "KizokNewBattleEnemyBase.h"
#include "KizokBattleCharaBase.h"

AKizokNewBattleEnemyBase::AKizokNewBattleEnemyBase() {
    this->BlowOffLoopEffect = NULL;
    this->BlowOffNormalEffect = NULL;
    this->BlowOffMoveSpeedNormal = NULL;
    this->HitParticleEffectStartWait = 0.00f;
    this->OutBlendTime4Damage2Wait = 0.25f;
    this->OutBlendTime4Getup2Wait = 0.25f;
    this->OutBlendTime4Damage2Sick = 0.30f;
    this->OutBlendTime4Getup2Sick = 0.30f;
    this->DitherFadeInTime = 0.20f;
    this->DitherFadeOutTime = 0.00f;
    this->DitherFadeRange = 15000.00f;
    this->BattleCharaBase = CreateDefaultSubobject<UKizokBattleCharaBase>(TEXT("BtlChBase"));
}

