#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "KizokMovieSceneWindParamTemplateData.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneWindParamTemplateData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel WindLevel;
    
    KIZOK_API FKizokMovieSceneWindParamTemplateData();
};

