#pragma once
#include "CoreMinimal.h"
#include "KizokShopLineupInfo.generated.h"

USTRUCT(BlueprintType)
struct FKizokShopLineupInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Stock;
    
    KIZOK_API FKizokShopLineupInfo();
};

