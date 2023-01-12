#pragma once
#include "CoreMinimal.h"
#include "KizokShopInfo.generated.h"

USTRUCT(BlueprintType)
struct FKizokShopInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShopId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LineupListId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ShopCategoryId;
    
    KIZOK_API FKizokShopInfo();
};

