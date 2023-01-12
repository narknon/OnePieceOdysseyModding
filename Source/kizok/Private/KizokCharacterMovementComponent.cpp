#include "KizokCharacterMovementComponent.h"

void UKizokCharacterMovementComponent::SetFixedMaxWalkSpeed(float Speed) {
}

float UKizokCharacterMovementComponent::GetFixedMaxWalkSpeed() const {
    return 0.0f;
}

UKizokCharacterMovementComponent::UKizokCharacterMovementComponent() {
    this->FixedMaxWalkSpeed = 600.00f;
}

