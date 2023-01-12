#include "KizokSpringArmComponent.h"

UKizokSpringArmComponent::UKizokSpringArmComponent() {
    this->WallChannel = ECC_WorldStatic;
    this->BlendInSpeed = 1000.00f;
    this->BlendOutSpeed = 1.00f;
    this->MinPitch = 45.00f;
    this->MaxPitch = 130.00f;
    this->PlayerCollisionProbeSize = 10.00f;
    this->PlayerFadeInTime = 0.50f;
    this->PlayerFadeOutTime = 0.50f;
    this->DesiredArmLengthCurve = NULL;
}

