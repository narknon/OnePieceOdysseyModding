#include "KizokFieldPlayerZoro.h"

AKizokFieldPlayerZoro::AKizokFieldPlayerZoro() {
    this->BGDist = 60.00f;
    this->SlashingEffectToCameraDistance = 200.00f;
    this->SlashingEffectToCameraHeight = 0.00f;
    this->ShakeTime = 1.00f;
    this->GatebreakAnimName = TEXT("Gatebreak00");
    this->FreeAtkGiriSpeed = 1.00f;
    this->FreeAtkGiriBlendIn = 0.00f;
    this->FreeAtkGiriBlendOut = 0.00f;
    this->m_FreeAtkOffset = 0.00f;
    this->m_pCameraShake = NULL;
}

