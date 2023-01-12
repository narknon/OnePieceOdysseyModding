#include "KizokFieldEncountComponent.h"

class UPrimitiveComponent;
class AActor;

void UKizokFieldEncountComponent::OnPlayerHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UKizokFieldEncountComponent::OnPlayerEndHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

UKizokFieldEncountComponent::UKizokFieldEncountComponent() {
    this->bCheckObstacle = true;
}

