#pragma once
#include "CoreMinimal.h"
#include "KizokAccessoryShapeBlockNum.generated.h"

USTRUCT(BlueprintType)
struct FKizokAccessoryShapeBlockNum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Height;
    
    KIZOK_API FKizokAccessoryShapeBlockNum();
};

