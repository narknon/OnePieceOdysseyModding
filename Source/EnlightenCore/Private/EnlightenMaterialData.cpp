#include "EnlightenMaterialData.h"

FEnlightenMaterialData::FEnlightenMaterialData() {
    this->ComponentMaterialIndex = 0;
    this->EnlightenId = 0;
    this->bSavedDynamicAlbedo = false;
    this->bSavedDynamicEmissive = false;
    this->bSavedEmissive = false;
    this->AlbedoScale = 0.00f;
}

