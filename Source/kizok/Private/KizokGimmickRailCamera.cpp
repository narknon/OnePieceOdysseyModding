#include "KizokGimmickRailCamera.h"
#include "Components/SplineComponent.h"
#include "KizokRailCameraComponent.h"

void AKizokGimmickRailCamera::Valid() {
}

bool AKizokGimmickRailCamera::IsValid() {
    return false;
}

void AKizokGimmickRailCamera::Invalid() {
}

AKizokGimmickRailCamera::AKizokGimmickRailCamera() {
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Rail Camera Spline"));
    this->InTransitionType = VTBlend_Linear;
    this->OutTransitionType = VTBlend_Linear;
    this->InTransitionTime = 2.00f;
    this->OutTransitionTime = 2.00f;
    this->LookInterpSpeed = 3.00f;
    this->IsWatchJump = true;
    this->MinimumApproachDistance = 200.00f;
    this->MoveSpeed = 2.00f;
    this->PlayLength = 300.00f;
    this->IsInputCamera = true;
    this->InputYawSpeed = 0.50f;
    this->InputPitchSpeed = 0.50f;
    this->InputYawRightMax = 20.00f;
    this->InputYawLeftMax = 20.00f;
    this->InputPitchUpMax = 10.00f;
    this->InputPitchDownMax = 10.00f;
    this->RailCameraComp = CreateDefaultSubobject<UKizokRailCameraComponent>(TEXT("Rail Camera Component"));
}

