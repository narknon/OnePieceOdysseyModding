#include "KizokActorBase.h"
#include "Components/CapsuleComponent.h"
#include "KizokPhysMtrlBaseComponent.h"
#include "KizokSkeletalMeshComponent.h"
#include "KizokSoundComponent.h"

class AActor;
class USkeletalMeshComponent;
class UAnimationAsset;

void AKizokActorBase::SetPlayTime(float Frame, int32 slot) {
}

void AKizokActorBase::SetPlayRate(float Rate, int32 slot) {
}

bool AKizokActorBase::PlayAnimationAsset(UAnimationAsset* Asset, int32 slot, bool IsLoop, float BlendInTime, float BlendOutTime, float InPlayRate) {
    return false;
}

void AKizokActorBase::OnActorHitCallback(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

bool AKizokActorBase::IsAnimationEnd(int32 slot) const {
    return false;
}

USkeletalMeshComponent* AKizokActorBase::GetMeshComponent() {
    return NULL;
}

FString AKizokActorBase::GetBlendSpaceName() {
    return TEXT("");
}

FQuat AKizokActorBase::GetAnimationRotSpeed() const {
    return FQuat{};
}

FVector4 AKizokActorBase::GetAnimationMoveSpeed() const {
    return FVector4{};
}

float AKizokActorBase::GetAnimationCurrentTime(int32 slot) {
    return 0.0f;
}

AKizokActorBase::AKizokActorBase() {
    this->m_pMesh = CreateDefaultSubobject<UKizokSkeletalMeshComponent>(TEXT("Mesh"));
    this->m_pCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCylinder"));
    this->m_pSoundComponent = CreateDefaultSubobject<UKizokSoundComponent>(TEXT("SoundComponent"));
    this->m_pPhysicalMaterialComponent = CreateDefaultSubobject<UKizokPhysMtrlBaseComponent>(TEXT("PhysicalMaterialComponent"));
    this->m_stepHeight = 48.00f;
    this->m_gravity = -98.00f;
    this->FullSpeedDownZ = -99999.00f;
    this->m_Mass = 1.00f;
    this->m_Priority = 0;
    this->m_bPushAdjust = true;
    this->m_WalkableAngle = 45.00f;
    this->m_pStartAnimSequence = NULL;
    this->CollisionCorrectionSpeed = 10.00f;
    this->BlendSpace = NULL;
}

