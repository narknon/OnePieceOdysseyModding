#pragma once
#include "CoreMinimal.h"
#include "PLAYER_ID.h"
#include "UObject/NoExportTypes.h"
#include "Fellow.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FFellow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    PLAYER_ID Pid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeOffset;
    
    KIZOK_API FFellow();
};

