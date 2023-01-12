#include "EnlightenSettings.h"

UEnlightenSettings::UEnlightenSettings() {
    this->CubemapResolution = 16;
    this->EnlightenLightmapDisplayQuality = EEnlightenLightmapDisplayQuality::High;
    this->EnlightenMobileLightmapDisplayQuality = EEnlightenLightmapDisplayQuality::Medium;
    this->AvailableProbeSampleMethods = EEnlightenProbeSampleMethodSet::PerObject;
    this->ProbeAtlasSize = 8;
}

