#include "KizokFieldEnemyBase.h"
#include "Components/SphereComponent.h"
#include "KizokPawnMovementComponent.h"

class UPrimitiveComponent;
class AActor;

void AKizokFieldEnemyBase::TurnOffGroundCorrection() {
}

void AKizokFieldEnemyBase::StartEncount() {
}

void AKizokFieldEnemyBase::StartBattle() {
}

void AKizokFieldEnemyBase::SetRunMode(bool IsRun) {
}

void AKizokFieldEnemyBase::SetHitVolumeOffset(FVector Offset) {
}

void AKizokFieldEnemyBase::SetFieldEnemyAttachWeaponsArray(TArray<FKizokAttachWeaponParam> AttachWeaponParamArray) {
}

bool AKizokFieldEnemyBase::RemoveFieldEnemyAttachWeaponByIndex(int32 Index) {
    return false;
}

bool AKizokFieldEnemyBase::RemoveFieldEnemyAttachWeaponByBPName(const FString& BPName) {
    return false;
}

void AKizokFieldEnemyBase::RemoveFieldEnemyAttachWeaponAll() {
}

void AKizokFieldEnemyBase::OnHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool AKizokFieldEnemyBase::IsRunMode() {
    return false;
}

float AKizokFieldEnemyBase::GetWalkSpeed() {
    return 0.0f;
}

float AKizokFieldEnemyBase::GetRunSpeed() {
    return 0.0f;
}

FVector AKizokFieldEnemyBase::GetHitVolumeOffset() {
    return FVector{};
}

FString AKizokFieldEnemyBase::GetFieldEnemyWeaponAnimName() {
    return TEXT("");
}

TArray<FKizokAttachWeaponParam> AKizokFieldEnemyBase::GetFieldEnemyAttachWeaponsArray() {
    return TArray<FKizokAttachWeaponParam>();
}

void AKizokFieldEnemyBase::EndBattle() {
}

void AKizokFieldEnemyBase::AddFieldEnemyAttachWeapon(FKizokAttachWeaponParam AttachWeaponParam) {
}

AKizokFieldEnemyBase::AKizokFieldEnemyBase() {
    this->IsShowContactDebug = false;
    this->ContactRadius = 100.00f;
    this->FindDistance = 1000.00f;
    this->FindViewingAngle = 45.00f;
    this->IsShowChaseRoute = false;
    this->WalkSpeed = 100.00f;
    this->RunSpeed = 200.00f;
    this->bRunMode = true;
    this->BeforeFadeTime = 60.00f;
    this->FadeOutTime = 5.00f;
    this->RebornTime = 2.00f;
    this->FadeInTime = 1.00f;
    this->m_pHitVolume = CreateDefaultSubobject<USphereComponent>(TEXT("Field Enemy Hit Volume"));
    this->m_pTexture = NULL;
    this->InteractTexture = NULL;
    this->Marker = NULL;
    this->TargetMarker = NULL;
    this->Spline = NULL;
    this->MovementComponent = CreateDefaultSubobject<UKizokPawnMovementComponent>(TEXT("Movement"));
}

