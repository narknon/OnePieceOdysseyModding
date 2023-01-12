#pragma once
#include "CoreMinimal.h"
#include "KiznaChargeText.generated.h"

USTRUCT(BlueprintType)
struct FKiznaChargeText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChargeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    KIZOK_API FKiznaChargeText();
};

