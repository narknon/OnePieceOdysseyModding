#include "KizokGimmickInteractBase.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"

class UPrimitiveComponent;
class AActor;

void AKizokGimmickInteractBase::UpdateInteract() {
}

void AKizokGimmickInteractBase::UnregistToPlayer() {
}

void AKizokGimmickInteractBase::SetInteractOnTheWayTalk(bool bEnable) {
}

void AKizokGimmickInteractBase::RegistToPlayer() {
}

void AKizokGimmickInteractBase::OnIconAreaOutside(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AKizokGimmickInteractBase::OnIconAreaInside(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool AKizokGimmickInteractBase::IsInteractRegistered() const {
    return false;
}

bool AKizokGimmickInteractBase::IsInIconViewArea() const {
    return false;
}

void AKizokGimmickInteractBase::Interact() {
}

void AKizokGimmickInteractBase::EnableInteract() {
}

void AKizokGimmickInteractBase::DisableInteract() {
}

bool AKizokGimmickInteractBase::CanInteract() {
    return false;
}

AKizokGimmickInteractBase::AKizokGimmickInteractBase()
{
    this->RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->IconVisibleArea = CreateDefaultSubobject<USphereComponent>(TEXT("IconVisibleArea"));
}