#include "KizokContactEffectComponent.h"

class UPrimitiveComponent;
class AActor;

void UKizokContactEffectComponent::OnHitCallback(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

UKizokContactEffectComponent::UKizokContactEffectComponent() {
    this->ContactEffect = NULL;
    this->IntervalTime = 0.25f;
    this->Timer = 0.00f;
}

