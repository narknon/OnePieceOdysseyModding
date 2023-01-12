#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "KizokMovieSceneWindCharacterMoveRateTemplateData.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneWindCharacterMoveRateTemplateData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel Rate;
    
    KIZOK_API FKizokMovieSceneWindCharacterMoveRateTemplateData();
};

