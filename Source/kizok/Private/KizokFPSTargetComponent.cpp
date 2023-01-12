#include "KizokFPSTargetComponent.h"

class AKizokFieldPlayerBase;

void UKizokFPSTargetComponent::OnValidComponent(AKizokFieldPlayerBase* Player) {
}

void UKizokFPSTargetComponent::ONTarget() {
}

void UKizokFPSTargetComponent::OnInvalidComponent() {
}

void UKizokFPSTargetComponent::OFFTarget() {
}

bool UKizokFPSTargetComponent::IsRegist() const {
    return false;
}

UKizokFPSTargetComponent::UKizokFPSTargetComponent() {
    this->ValidDistance = 2000.00f;
    this->InvalidDistance = 500.00f;
    this->TargetAngle = 180.00f;
    this->Type = EFPSTargetType::FPS_NONE;
    this->IsValidTarget = true;
    this->pPointEffectAsset = NULL;
    this->pSensorEffectAsset = NULL;
    this->m_pPointEffect = NULL;
    this->m_pSensorPointEffect = NULL;
}

