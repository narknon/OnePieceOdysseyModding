#include "KizokWeaponActor.h"
#include "KizokMaterialControlComponent.h"

void AKizokWeaponActor::DitherFadeChanged(float dither) {
}

AKizokWeaponActor::AKizokWeaponActor() {
    this->DitherFadeMaterialParamName = TEXT("DitherFade");
    this->MaterialControlComponent = CreateDefaultSubobject<UKizokMaterialControlComponent>(TEXT("Material Control"));
    this->bDefaultVisibility = false;
}

