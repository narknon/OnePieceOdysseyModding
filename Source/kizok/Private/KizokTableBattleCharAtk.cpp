#include "KizokTableBattleCharAtk.h"

FKizokTableBattleCharAtk::FKizokTableBattleCharAtk() {
    this->ID = 0;
    this->AtkTime = 0.00f;
    this->AtkMotionTime = 0.00f;
    this->AtkDistance = 0.00f;
    this->AtkMoveRate = 0.00f;
    this->AtkTimeBack = 0.00f;
    this->AtkMotionToHitEffect = 0.00f;
    this->HitEffectTiming = 0.00f;
    this->DamageProductTiming = 0.00f;
    this->AtkMoveCurve = NULL;
    this->AtkMoveCurveBack = NULL;
    this->AtkCutMoveCurve = NULL;
    this->AtkEffectTime = 0.00f;
    this->AtkEffectSpeedTime = 0.00f;
    this->AtkRetryTime = 0.00f;
    this->EmissivePower = 0.00f;
    this->EmissiveLoopTime = 0.00f;
    this->EmissiveContrust = 0.00f;
    this->EmissiveSpecial = 0.00f;
    this->HitParticleEffectStartWait = 0.00f;
}

