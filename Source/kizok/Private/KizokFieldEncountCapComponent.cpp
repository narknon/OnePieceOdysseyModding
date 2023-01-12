#include "KizokFieldEncountCapComponent.h"

class UPrimitiveComponent;
class AActor;

void UKizokFieldEncountCapComponent::OnPlayerHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UKizokFieldEncountCapComponent::OnPlayerEndHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

UKizokFieldEncountCapComponent::UKizokFieldEncountCapComponent() {
    this->bCheckObstacle = true;
}

