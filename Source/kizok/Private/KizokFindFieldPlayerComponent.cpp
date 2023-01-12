#include "KizokFindFieldPlayerComponent.h"

class UPrimitiveComponent;
class AActor;

void UKizokFindFieldPlayerComponent::OutArea(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UKizokFindFieldPlayerComponent::InArea(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UKizokFindFieldPlayerComponent::UKizokFindFieldPlayerComponent() {
    this->FindAngle = 45.00f;
    this->CancelAngle = 30.00f;
}

