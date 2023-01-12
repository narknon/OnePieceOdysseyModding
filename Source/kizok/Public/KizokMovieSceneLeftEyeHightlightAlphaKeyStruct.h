#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneKeyStruct.h"
#include "KizokMovieSceneLeftEyeHightlightAlphaKeyStruct.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneLeftEyeHightlightAlphaKeyStruct : public FMovieSceneKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber Time;
    
    KIZOK_API FKizokMovieSceneLeftEyeHightlightAlphaKeyStruct();
};

