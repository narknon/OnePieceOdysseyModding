#include "KizokGimmickLadderBase.h"
#include "Components/SplineComponent.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"
#include "KizokGimmickClimbRailCamera.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ArrowComponent.h"

class UPrimitiveComponent;
class AActor;

void AKizokGimmickLadderBase::Valid() {
}

void AKizokGimmickLadderBase::StartGimmick() {
}

bool AKizokGimmickLadderBase::IsValid() const {
    return false;
}

bool AKizokGimmickLadderBase::IsTop() const {
    return false;
}

void AKizokGimmickLadderBase::Invalid() {
}

void AKizokGimmickLadderBase::InteractPreparation() {
}

void AKizokGimmickLadderBase::InteractDisposal() {
}

void AKizokGimmickLadderBase::AreaVolumeTopOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AKizokGimmickLadderBase::AreaVolumeTopOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AKizokGimmickLadderBase::AreaVolumeBottomOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AKizokGimmickLadderBase::AreaVolumeBottomOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AKizokGimmickLadderBase::AKizokGimmickLadderBase() {
    this->MeshTop = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Top"));
    this->MeshBottom = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Bottom"));
    this->MeshMiddle = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Middle"));
    this->AreaVolumeTop = CreateDefaultSubobject<UBoxComponent>(TEXT("Area Volume Top"));
    this->AreaVolumeBottom = CreateDefaultSubobject<UBoxComponent>(TEXT("Area Volume Bottom"));
    this->PointTop = CreateDefaultSubobject<USphereComponent>(TEXT("Turning Point Top"));
    this->PointBottom = CreateDefaultSubobject<USphereComponent>(TEXT("Turning Point Bottom"));
    this->IsValidInteractVolume = true;
    this->m_pArrowTop = CreateDefaultSubobject<UArrowComponent>(TEXT("Forward Arrow Top"));
    this->m_pArrowBottom = CreateDefaultSubobject<UArrowComponent>(TEXT("Forward Arrow Bottom"));
    this->RailCamera = CreateDefaultSubobject<UKizokGimmickClimbRailCamera>(TEXT("Ladder Rail Camera"));
    this->RailCameraSpline = CreateDefaultSubobject<USplineComponent>(TEXT("Ladder Rail Camera Spline"));
}

