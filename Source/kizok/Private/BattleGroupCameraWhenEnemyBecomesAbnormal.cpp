#include "BattleGroupCameraWhenEnemyBecomesAbnormal.h"

FBattleGroupCameraWhenEnemyBecomesAbnormal::FBattleGroupCameraWhenEnemyBecomesAbnormal() {
    this->DefaultCranePitch = 0.00f;
    this->StartCraneYaw = 0.00f;
    this->EndCraneYaw = 0.00f;
    this->StartArmLength = 0.00f;
    this->EndArmLength = 0.00f;
    this->EaseCurve = NULL;
    this->FoculLength = 0.00f;
    this->aperture = 0.00f;
}

