#include "KizokGimmickClimbRailCamera.h"
#include "KizokClimbRailCameraComponent.h"

class UPrimitiveComponent;
class AActor;

void UKizokGimmickClimbRailCamera::EndAreaOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UKizokGimmickClimbRailCamera::BeginAreaOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UKizokGimmickClimbRailCamera::UKizokGimmickClimbRailCamera() {
    this->TopInTransitionType = VTBlend_Linear;
    this->BottomInTransitionType = VTBlend_Linear;
    this->OutTransitionType = VTBlend_Linear;
    this->RailTransitionType = VTBlend_Linear;
    this->GGRailTransitionType = VTBlend_Linear;
    this->TopInTransitionTime = 0.00f;
    this->BottomInTransitionTime = 1.00f;
    this->OutTransitionTime = 1.00f;
    this->RailTransitionTime = 1.00f;
    this->GGRailTransitionTime = 0.50f;
    this->LookInterpSpeed = 3.00f;
    this->IsWatchJump = true;
    this->MoveSpeed = 2.00f;
    this->PlayLength = 300.00f;
    this->IsInputCamera = true;
    this->InputYawSpeed = 0.50f;
    this->InputPitchSpeed = 0.50f;
    this->InputYawRightMax = 20.00f;
    this->InputYawLeftMax = 20.00f;
    this->InputPitchUpMax = 10.00f;
    this->InputPitchDownMax = 10.00f;
    this->RailCameraComp = CreateDefaultSubobject<UKizokClimbRailCameraComponent>(TEXT("Climb Rail Camera"));
}

