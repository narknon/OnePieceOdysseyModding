#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "Channels/MovieSceneIntegerChannel.h"
#include "KizokMovieSceneWindCharacterPhysicsAssetRateTemplateData.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneWindCharacterPhysicsAssetRateTemplateData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel Rate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneIntegerChannel PhysicsAssetIndex;
    
    KIZOK_API FKizokMovieSceneWindCharacterPhysicsAssetRateTemplateData();
};

