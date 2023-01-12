#include "SoundAtomCue.h"

bool USoundAtomCue::IsParameterPalletAssigned() {
    return false;
}

bool USoundAtomCue::IsLoop() const {
    return false;
}

FString USoundAtomCue::GetUserData() {
    return TEXT("");
}

float USoundAtomCue::GetMaxAttenuationDistanceToUse() const {
    return 0.0f;
}

int32 USoundAtomCue::GetLength() {
    return 0;
}

float USoundAtomCue::GetEconomicTickMarginDistanceToUse() const {
    return 0.0f;
}

float USoundAtomCue::GetEconomicTickFrequencyToUse() const {
    return 0.0f;
}

float USoundAtomCue::GetEconomicTickBoundaryDistanceToUse() const {
    return 0.0f;
}

float USoundAtomCue::GetCullingMarginDistanceToUse() const {
    return 0.0f;
}

float USoundAtomCue::GetCullingBoundaryDistanceToUse() const {
    return 0.0f;
}

USoundAtomCue::USoundAtomCue() {
    this->CueSheet = NULL;
    this->bApplyAtomParameter = false;
    this->LoopSetting = EAtomLoopSettingID::DefaultLoop;
    this->DefaultAttenuation = NULL;
    this->bEconomicTick = false;
    this->bOverrideEconomicTickSettings = false;
    this->EconomicTickMarginDistance = 1000000.00f;
    this->EconomicTickFrequency = 15;
    this->bCullingSoundPlayingProcessByDistance = false;
    this->bUseLegacyCullingSettings = true;
    this->MaxProcessDistance = 1000000.00f;
    this->bOverrideCullingSettings = false;
    this->CullingMarginDistance = 1000000.00f;
    this->Duration = -1.00f;
    this->FirstWaveLengthSeconds = -1.00f;
    this->bLoopSettingByAtomCraft = false;
}

