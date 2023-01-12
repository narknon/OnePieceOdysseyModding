#include "KizokCameraParamChangeTriggerBox.h"

AKizokCameraParamChangeTriggerBox::AKizokCameraParamChangeTriggerBox() {
    this->FieldOfView = 0.00f;
    this->CameraAnglePitchMax = 180.00f;
    this->CameraDistance = 0.00f;
    this->LagSpeed = 0.00f;
    this->NoMovingCameraDistance = 0.00f;
    this->NoMovingLagSpeed = 0.00f;
    this->ChangeTime = 0.00f;
    this->CustomMoveValue = 77.00f;
    this->paramBlendType = EEasingFunc::Linear;
    this->m_bIsInvalidPlayerJump = true;
    this->bIsInvalidPlayerRun = false;
    this->bIsMoveRateUseCustomValue = false;
    this->bIsInvalidPlayerSensor = false;
    this->bActiveCamParamChange = true;
    this->m_bIsDebugDisp = false;
}

