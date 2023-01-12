#include "KizokGimmickDestruction.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"

class UPrimitiveComponent;
class AActor;

void AKizokGimmickDestruction::SetItemID(FName Num) {
}

void AKizokGimmickDestruction::SetBrokenMeshFade(float Goal, float Time) {
}

void AKizokGimmickDestruction::SetBreakMeshFade(float Goal, float Time) {
}

bool AKizokGimmickDestruction::IsGetItem() const {
    return false;
}

bool AKizokGimmickDestruction::IsFirstBrokenFunc() const {
    return false;
}

bool AKizokGimmickDestruction::IsDestLevel() {
    return false;
}

void AKizokGimmickDestruction::HitVolumeOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

FName AKizokGimmickDestruction::GetItemID() const {
    return NAME_None;
}

void AKizokGimmickDestruction::EndValidVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AKizokGimmickDestruction::DestroyGmkDest() {
}

void AKizokGimmickDestruction::BeginValidVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AKizokGimmickDestruction::AKizokGimmickDestruction() {
    this->BreakMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Break Mesh"));
    this->BrokenMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Broken Mesh"));
    this->HitVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("Destruction HitVolume"));
    this->CollisionVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("Destruction CollisionVolume"));
    this->m_pParticleSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
    this->m_pParticleAsset = NULL;
    this->ExplosionParticle = NULL;
    this->ParticleStartTime = 0.00f;
    this->BreakMeshHideTime = 0.00f;
    this->BrokenMeshVisibleTime = 0.00f;
    this->BrokenMeshHideTime = 4.00f;
    this->BreakFadeEndTime = 0.30f;
    this->BrokenFadeStartTime = 0.30f;
    this->BrokenFadeEndTime = 2.00f;
    this->IsFirstBroken = false;
    this->IsExplosion = false;
    this->ExDist = 100.00f;
    this->ExTime = 1.00f;
    this->ExDamage = 100.00f;
    this->ExPlayerConfinement = 3.00f;
    this->ExEnemyConfinement = 2.00f;
    this->ExLag = 0.10f;
    this->IsDebugShowExDist = false;
    this->m_pValidVolume = CreateDefaultSubobject<USphereComponent>(TEXT("Valid Volume"));
    this->DestLevel = 1;
    this->m_pExplosionVolume = CreateDefaultSubobject<USphereComponent>(TEXT("Exploison Volume"));
    this->DestructType = EKizokDestructType::WOOD;
    this->bFreeAtkRangeCalcXY = false;
}

