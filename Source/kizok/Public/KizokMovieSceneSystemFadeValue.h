#pragma once
#include "CoreMinimal.h"
#include "ESystemFadeMode.h"
#include "ESystemFadeColor.h"
#include "KizokMovieSceneSystemFadeValue.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneSystemFadeValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESystemFadeMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESystemFadeColor Color;
    
    KIZOK_API FKizokMovieSceneSystemFadeValue();
};

