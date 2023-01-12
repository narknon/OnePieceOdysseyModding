#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokTableShop.generated.h"

USTRUCT(BlueprintType)
struct FKizokTableShop : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LineupList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 shop_categoly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName influence_kizuna;
    
    KIZOK_API FKizokTableShop();
};

