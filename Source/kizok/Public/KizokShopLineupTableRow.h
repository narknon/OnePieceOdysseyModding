#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokShopLineupTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokShopLineupTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Stock;
    
    KIZOK_API FKizokShopLineupTableRow();
};

