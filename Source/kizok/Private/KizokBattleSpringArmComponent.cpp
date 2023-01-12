#include "KizokBattleSpringArmComponent.h"

UKizokBattleSpringArmComponent::UKizokBattleSpringArmComponent() {
    this->WallChannel = ECC_WorldStatic;
    this->BlendInSpeed = 1000.00f;
    this->BlendOutSpeed = 1.00f;
    this->MinPitch = 0.00f;
    this->MaxPitch = 180.00f;
    this->PlayerCollisionProbeSize = 10.00f;
    this->PlayerDitherRange = 100.00f;
    this->PlayerFadeInTime = 0.50f;
    this->PlayerFadeOutTime = 0.50f;
    this->CameraLengthRate = 10.00f;
    this->bIsWallLengthLagEnable = false;
    this->NoMoveDistZInterpSpeed = 2.00f;
    this->NoMoveDistZ = 20.00f;
    this->NoMovingLagSpeed = 24.00f;
    this->bIsNoMovingLagEnable = true;
    this->ArmNoMovingLength = 300.00f;
    this->LengthInterpSpeed = 1.50f;
    this->AutoArmMaxLength = 500.00f;
    this->AutoArmMinLength = 300.00f;
    this->AutoArmZUpInterpSpeed = 3.00f;
    this->AutoArmZDownInterpSpeed = 10.00f;
    this->AutoNoMovingLagSpeed = 5.00f;
    this->AutoCameraWallSpeed = 1000.00f;
    this->SpringArmType = EBattleSpringArmType::NORMAL;
    this->m_pFollowCamera = NULL;
}

