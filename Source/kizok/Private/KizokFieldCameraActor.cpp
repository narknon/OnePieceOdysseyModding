#include "KizokFieldCameraActor.h"

AKizokFieldCameraActor::AKizokFieldCameraActor() {
    this->startFieldOfView = 0.00f;
    this->endFieldOfView = 0.00f;
    this->startCameraDistance = 0.00f;
    this->endCameraDistance = 0.00f;
    this->ChangeTime = 0.00f;
    this->chnageCount = 0.00f;
    this->startCameraLagSpeed = 0.00f;
    this->endCameraLagSpeed = 0.00f;
    this->startNoMovingDistance = 0.00f;
    this->endNoMovingDistance = 0.00f;
    this->startNoMovingLagSpeed = 0.00f;
    this->endNoMovingLagSpeed = 0.00f;
    this->startAnglePitchMax = 0.00f;
    this->endAnglePitchMax = 0.00f;
    this->paramBlendType = EEasingFunc::Linear;
}

