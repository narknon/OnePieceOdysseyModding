#include "KizokLvsRequestComponent.h"

class AActor;

void UKizokLvsRequestComponent::OnEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void UKizokLvsRequestComponent::OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

UKizokLvsRequestComponent::UKizokLvsRequestComponent() {
    this->Usage = EKizokLvsVolumeUsage::LoadAndVisible;
    this->bShowTriggerActor = false;
}

