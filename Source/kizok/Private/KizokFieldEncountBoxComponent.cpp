#include "KizokFieldEncountBoxComponent.h"

class UPrimitiveComponent;
class AActor;

void UKizokFieldEncountBoxComponent::OnPlayerHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UKizokFieldEncountBoxComponent::OnPlayerEndHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

UKizokFieldEncountBoxComponent::UKizokFieldEncountBoxComponent() {
    this->bCheckObstacle = true;
}

