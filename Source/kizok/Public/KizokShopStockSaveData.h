#pragma once
#include "CoreMinimal.h"
#include "KizokShopStockSaveData.generated.h"

USTRUCT(BlueprintType)
struct FKizokShopStockSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Reserved[120];
    
    KIZOK_API FKizokShopStockSaveData();
};

