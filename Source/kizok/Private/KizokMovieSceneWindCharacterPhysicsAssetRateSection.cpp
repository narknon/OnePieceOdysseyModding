#include "KizokMovieSceneWindCharacterPhysicsAssetRateSection.h"
#include "KizokMovieSceneWindCharacterPhysicsAssetRateSectionData.h"

UKizokMovieSceneWindCharacterPhysicsAssetRateSection::UKizokMovieSceneWindCharacterPhysicsAssetRateSection() {
    this->Data = CreateDefaultSubobject<UKizokMovieSceneWindCharacterPhysicsAssetRateSectionData>(TEXT("UKizokMovieSceneWindCharacterPhysicsAssetRateSectionData"));
}

