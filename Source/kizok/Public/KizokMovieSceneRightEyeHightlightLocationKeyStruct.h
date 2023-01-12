#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneKeyStruct.h"
#include "UObject/NoExportTypes.h"
#include "KizokMovieSceneRightEyeHightlightLocationKeyStruct.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneRightEyeHightlightLocationKeyStruct : public FMovieSceneKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber Time;
    
    KIZOK_API FKizokMovieSceneRightEyeHightlightLocationKeyStruct();
};

