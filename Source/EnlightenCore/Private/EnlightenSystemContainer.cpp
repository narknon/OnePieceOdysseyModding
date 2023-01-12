#include "EnlightenSystemContainer.h"
#include "EnlightenSystemContainerComponent.h"
#include "EnlightenProbeSetContainerComponent.h"

AEnlightenSystemContainer::AEnlightenSystemContainer() {
    this->DefaultQuality = EEnlightenQuality::ENLQ_High;
    this->DefaultUpdateMethod = EEnlightenUpdateMethod::EUM_Dynamic;
    this->BSPQuality = EEnlightenQualityWithDefault::EQWD_UseLevelDefault;
    this->BSPUpdateMethod = EEnlightenUpdateMethodWithDefault::EUMD_UseLevelDefault;
    this->LandscapeQuality = EEnlightenQualityWithDefault::EQWD_Medium;
    this->LandscapeUpdateMethod = EEnlightenUpdateMethodWithDefault::EUMD_UseLevelDefault;
    this->bDisableEnlighten = false;
    this->bPrecomputedDisabled = false;
    this->bAllowGpuInputShadowing = true;
    this->PrecomputeData = NULL;
    this->SystemContainerComponent = CreateDefaultSubobject<UEnlightenSystemContainerComponent>(TEXT("ContainerComponent"));
    this->ProbeSetContainerComponent = CreateDefaultSubobject<UEnlightenProbeSetContainerComponent>(TEXT("ProbeSetContainerComponent"));
}

