#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "KizokMovieSceneLeftEyeHightlightControlTemplateData.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneLeftEyeHightlightControlTemplateData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel TranslationCurve[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel RotationCurve[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel ScaleCurve[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel AlphaCurve;
    
    KIZOK_API FKizokMovieSceneLeftEyeHightlightControlTemplateData();
};

