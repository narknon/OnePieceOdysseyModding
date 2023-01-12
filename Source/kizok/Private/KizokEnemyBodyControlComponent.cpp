#include "KizokEnemyBodyControlComponent.h"

UKizokEnemyBodyControlComponent::UKizokEnemyBodyControlComponent() {
    this->bIsEnableBodyControl = true;
    this->BodyRotationLimitPitchDeg = 45.00f;
    this->BodyRotationLimitRollDeg = 45.00f;
    this->BodyRotationInterpSpeed = 15.00f;
    this->BodyRayStartLocationKind = ERayStartLocationKind::BoneReference;
    this->BodyRayDistance = 32767.00f;
}

