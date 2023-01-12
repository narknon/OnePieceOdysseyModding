#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneKeyStruct.h"
#include "UObject/NoExportTypes.h"
#include "KizokMovieSceneParticleColorAnimationKeyStruct.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneParticleColorAnimationKeyStruct : public FMovieSceneKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber Time;
    
    KIZOK_API FKizokMovieSceneParticleColorAnimationKeyStruct();
};

