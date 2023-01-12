#pragma once
#include "CoreMinimal.h"
#include "BtlResultItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FBtlResultItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTreasureChest;
    
    KIZOK_API FBtlResultItemInfo();
};

