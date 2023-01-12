#include "KizokFieldPlayerCharacter.h"

AKizokFieldPlayerCharacter::AKizokFieldPlayerCharacter() {
    this->CameraBoom = NULL;
    this->tpsCameraBoom = NULL;
    this->FollowCamera = NULL;
    this->bCustomCamera = false;
    this->CameraSphere = NULL;
    this->CameraSphereRadius = 100.00f;
    this->LowAngleSafeReturnSpeed = 10.00f;
    this->NearAltitude = 0.00f;
    this->FarAltitude = 25.00f;
    this->BaseTurnRate = 0.00f;
    this->BaseLookUpRate = 0.00f;
    this->EncountVolume = NULL;
    this->fieldCamera = NULL;
    this->fpsCamera = NULL;
    this->m_windDirectionalSource = NULL;
}

