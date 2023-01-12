#pragma once
#include "CoreMinimal.h"
#include "ToeControlFloatRange.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FToeControlFloatRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    FToeControlFloatRange();
};

