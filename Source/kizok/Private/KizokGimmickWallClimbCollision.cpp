#include "KizokGimmickWallClimbCollision.h"
#include "Components/SplineComponent.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"
#include "KizokGimmickClimbRailCamera.h"
#include "Components/ArrowComponent.h"

void AKizokGimmickWallClimbCollision::StartGimmick() {
}

void AKizokGimmickWallClimbCollision::SetRegistFPSTargetFlag(bool flag) {
}

bool AKizokGimmickWallClimbCollision::IsTopAccess() const {
    return false;
}

bool AKizokGimmickWallClimbCollision::IsGGPoint() const {
    return false;
}

void AKizokGimmickWallClimbCollision::InteractPreparation() {
}

void AKizokGimmickWallClimbCollision::InteractDisposal() {
}

EWallClimbCollisionType AKizokGimmickWallClimbCollision::GetCollisionType() const {
    return EWallClimbCollisionType::TOP;
}

AKizokGimmickWallClimbCollision::AKizokGimmickWallClimbCollision() {
    this->m_pWallCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Wall Collision"));
    this->GGPoint = CreateDefaultSubobject<USphereComponent>(TEXT("GG Point"));
    this->LandingPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("Landing Point"));
    this->m_IsTop = false;
    this->m_CollisionType = EWallClimbCollisionType::MIDDLE;
    this->m_IsGetOff = true;
    this->m_IsGGPoint = false;
    this->RailCamera = CreateDefaultSubobject<UKizokGimmickClimbRailCamera>(TEXT("Ladder Rail Camera"));
    this->RailCameraSpline = CreateDefaultSubobject<USplineComponent>(TEXT("Ladder Rail Camera Spline"));
    this->IsScaleRock = false;
}

