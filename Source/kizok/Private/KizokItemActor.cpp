#include "KizokItemActor.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"

void AKizokItemActor::SetItemID(FName Num) {
}

void AKizokItemActor::SetHeightOffset(float Height) {
}

bool AKizokItemActor::IsGetItem() const {
    return false;
}

bool AKizokItemActor::IsAvailable() {
    return false;
}

FName AKizokItemActor::GetItemID() const {
    return NAME_None;
}

AKizokItemActor::AKizokItemActor()
{
    this->RegistCollision = CreateDefaultSubobject<USphereComponent>(TEXT("RegistCollision"));
}
