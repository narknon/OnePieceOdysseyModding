#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "KizokMovieSceneWindCharacterPhysicsAssetRateSection.generated.h"

class UKizokMovieSceneWindCharacterPhysicsAssetRateSectionData;

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneWindCharacterPhysicsAssetRateSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokMovieSceneWindCharacterPhysicsAssetRateSectionData* Data;
    
public:
    UKizokMovieSceneWindCharacterPhysicsAssetRateSection();
};

