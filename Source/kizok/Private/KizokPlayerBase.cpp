#include "KizokPlayerBase.h"
#include "KizokBattleSpringArmComponent.h"
#include "KizokPlayerInput.h"

class AKizokFieldCameraActor;

bool AKizokPlayerBase::IsJump() const {
    return false;
}

AKizokFieldCameraActor* AKizokPlayerBase::GetFieldCamera() const {
    return NULL;
}

AKizokPlayerBase::AKizokPlayerBase() {
    this->CameraFieldBoom = CreateDefaultSubobject<UKizokBattleSpringArmComponent>(TEXT("CameraFieldBoom"));
    this->bCustomCamera = true;
    this->bCustomCameraNew = true;
    this->DefaultCameraFov = 70.00f;
    this->CameraSphere = NULL;
    this->CameraSphereRadius = 100.00f;
    this->LowAngleSafeReturnSpeed = 10.00f;
    this->NearAltitude = 0.00f;
    this->FarAltitude = 25.00f;
    this->PlayerInput = CreateDefaultSubobject<UKizokPlayerInput>(TEXT("PlayerInput"));
}

