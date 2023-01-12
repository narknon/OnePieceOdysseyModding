#pragma once
#include "CoreMinimal.h"
#include "KiznaChargeText.h"
#include "KiznaChargeAnimParm.generated.h"

USTRUCT(BlueprintType)
struct FKiznaChargeAnimParm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitChargeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKiznaChargeText> TextList;
    
    KIZOK_API FKiznaChargeAnimParm();
};

