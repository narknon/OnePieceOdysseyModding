#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "KizokMovieSceneWindCharacterBaseRateTemplateData.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneWindCharacterBaseRateTemplateData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel Rate;
    
    KIZOK_API FKizokMovieSceneWindCharacterBaseRateTemplateData();
};

