#include "EnlightenAdaptiveProbeVolume.h"

AEnlightenAdaptiveProbeVolume::AEnlightenAdaptiveProbeVolume() {
    this->Resolution = EEnlightenAdaptiveProbeResolutionWithDefault::EPRD_UseLevelDefault;
    this->ResolutionBias = 0;
    this->Quality = EEnlightenQualityWithDefault::EQWD_UseLevelDefault;
    this->UpdateMethod = EEnlightenUpdateMethodWithDefault::EUMD_UseLevelDefault;
}

