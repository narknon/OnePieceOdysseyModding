#pragma once
#include "CoreMinimal.h"
#include "KizokMovieSceneLipSyncControllMask.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneLipSyncControllMask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Mask;
    
public:
    KIZOK_API FKizokMovieSceneLipSyncControllMask();
};

