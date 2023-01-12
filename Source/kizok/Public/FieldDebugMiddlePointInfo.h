#pragma once
#include "CoreMinimal.h"
#include "FieldDebugMiddlePointInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FFieldDebugMiddlePointInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EpisodeFlagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SeqNo;
    
    KIZOK_API FFieldDebugMiddlePointInfo();
};

