#include "KizokGimmickFixedCamera.h"
#include "Components/BoxComponent.h"
#include "Components/ArrowComponent.h"

class UPrimitiveComponent;
class AActor;

void AKizokGimmickFixedCamera::Valid() {
}

bool AKizokGimmickFixedCamera::IsValid() {
    return false;
}

void AKizokGimmickFixedCamera::Invalid() {
}

void AKizokGimmickFixedCamera::EndAreaOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AKizokGimmickFixedCamera::BeginAreaOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AKizokGimmickFixedCamera::AKizokGimmickFixedCamera() {
    this->Area = CreateDefaultSubobject<UBoxComponent>(TEXT("Fixed Camera Area"));
    this->Camera = CreateDefaultSubobject<UArrowComponent>(TEXT("Fixed Camera Position"));
    this->InTransitionType = VTBlend_Linear;
    this->OutTransitionType = VTBlend_Linear;
    this->InTransitionTime = 2.00f;
    this->OutTransitionTime = 2.00f;
    this->IsLookPlayer = false;
    this->LookInterpSpeed = 3.00f;
    this->IsWatchJump = true;
    this->JumpIgnoreZMax = 20.00f;
    this->IsInputCamera = true;
    this->InputYawSpeed = 0.50f;
    this->InputPitchSpeed = 0.50f;
    this->InputYawRightMax = 20.00f;
    this->InputYawLeftMax = 20.00f;
    this->InputPitchUpMax = 10.00f;
    this->InputPitchDownMax = 10.00f;
    this->m_pCamera = NULL;
}

