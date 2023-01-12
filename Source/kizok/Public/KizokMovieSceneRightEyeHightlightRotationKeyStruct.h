#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneKeyStruct.h"
#include "UObject/NoExportTypes.h"
#include "KizokMovieSceneRightEyeHightlightRotationKeyStruct.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneRightEyeHightlightRotationKeyStruct : public FMovieSceneKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber Time;
    
    KIZOK_API FKizokMovieSceneRightEyeHightlightRotationKeyStruct();
};

