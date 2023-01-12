#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneKeyStruct.h"
#include "UObject/NoExportTypes.h"
#include "KizokMovieSceneLeftEyeRotationKeyStruct.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneLeftEyeRotationKeyStruct : public FMovieSceneKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber Time;
    
    KIZOK_API FKizokMovieSceneLeftEyeRotationKeyStruct();
};

