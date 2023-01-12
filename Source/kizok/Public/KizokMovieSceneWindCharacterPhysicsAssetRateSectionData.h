#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "Channels/MovieSceneIntegerChannel.h"
#include "UObject/Object.h"
#include "KizokMovieSceneWindCharacterPhysicsAssetRateSectionData.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneWindCharacterPhysicsAssetRateSectionData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel Rate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneIntegerChannel PhysicsAssetIndex;
    
public:
    UKizokMovieSceneWindCharacterPhysicsAssetRateSectionData();
};

