#include "KizokEventCameraActor.h"

void AKizokEventCameraActor::PlayEventCamera() {
}

AKizokEventCameraActor::AKizokEventCameraActor() {
    this->PlayTime = 1.00f;
    this->bIsNotStartedFlagOn = false;
    this->StartBlendTime = 0.00f;
    this->StartBlendType = VTBlend_Linear;
    this->StartBlendExp = 0.00f;
    this->EndBlendTime = 0.00f;
    this->EndBlendType = VTBlend_Linear;
    this->EndBlendExp = 0.00f;
    this->bZoomEnable = true;
    this->StartZoomTime = 0.00f;
    this->EndZoomTime = 0.00f;
    this->EndZoomFov = 70.00f;
    this->PlayerMotionLoopNum = false;
    this->bIsShowMessage = false;
    this->bIsAutoMessage = false;
    this->ShowMsgTime = 0.00f;
    this->TextId = 0;
    this->EnemyPartyID = 0;
    this->FindObjectComponent = NULL;
    this->bSearchNextCamera = false;
    this->bShakeEnable = true;
    this->StartShakeTime = 0.00f;
    this->EndShakeTime = 0.00f;
    this->ShakeScale = 2.00f;
    this->ShakeDirectionType = EShakeDirectionType::Pitching;
    this->FocusTargetActor = NULL;
    this->CameraShake = NULL;
}

