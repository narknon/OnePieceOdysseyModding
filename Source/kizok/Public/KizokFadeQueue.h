#pragma once
#include "CoreMinimal.h"
#include "EKizokFadeType.h"
#include "KizokFadeQueue.generated.h"

USTRUCT(BlueprintType)
struct FKizokFadeQueue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKizokFadeType FadeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTime;
    
    KIZOK_API FKizokFadeQueue();
};

