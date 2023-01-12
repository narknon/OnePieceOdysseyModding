#include "KizokEffectWeatherComponent.h"

class USceneComponent;

void UKizokEffectWeatherComponent::OnAtSaveKey(USceneComponent* ParentComponent) {
}

void UKizokEffectWeatherComponent::On(EKizokEffectWeatherType Type, USceneComponent* ParentComponent) {
}

void UKizokEffectWeatherComponent::OffAll() {
}

void UKizokEffectWeatherComponent::Off(EKizokEffectWeatherType Type) {
}

void UKizokEffectWeatherComponent::DestroyAllEffect() {
}

UKizokEffectWeatherComponent::UKizokEffectWeatherComponent() {
    this->Object = NULL;
}

