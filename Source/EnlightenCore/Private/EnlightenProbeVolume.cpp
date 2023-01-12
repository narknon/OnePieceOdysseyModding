#include "EnlightenProbeVolume.h"
#include "EnlightenProbeSetComponent.h"

AEnlightenProbeVolume::AEnlightenProbeVolume() {
    this->Quality = EEnlightenQualityWithDefault::EQWD_UseLevelDefault;
    this->UpdateMethod = EEnlightenUpdateMethodWithDefault::EUMD_UseLevelDefault;
    this->ProbeSetComponent = CreateDefaultSubobject<UEnlightenProbeSetComponent>(TEXT("ProbeSetComponent0"));
}

