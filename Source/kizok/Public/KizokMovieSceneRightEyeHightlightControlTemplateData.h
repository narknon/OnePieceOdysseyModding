#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "KizokMovieSceneRightEyeHightlightControlTemplateData.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneRightEyeHightlightControlTemplateData {
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
    
    KIZOK_API FKizokMovieSceneRightEyeHightlightControlTemplateData();
};

