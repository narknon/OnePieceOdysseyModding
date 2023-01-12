#pragma once
#include "CoreMinimal.h"
#include "EKizokMovieSceneDynamicsResetType.h"
#include "KizokMovieSceneDynamicsResetValue.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneDynamicsResetValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKizokMovieSceneDynamicsResetType ResetType;
    
    KIZOK_API FKizokMovieSceneDynamicsResetValue();
};

