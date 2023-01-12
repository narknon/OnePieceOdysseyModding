#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokTableShopIndividual.generated.h"

USTRUCT(BlueprintType)
struct FKizokTableShopIndividual : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Stock;
    
    KIZOK_API FKizokTableShopIndividual();
};

