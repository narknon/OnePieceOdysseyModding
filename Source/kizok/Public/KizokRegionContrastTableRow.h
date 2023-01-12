#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokRegionContrastTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokRegionContrastTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RegionId;
    
    KIZOK_API FKizokRegionContrastTableRow();
};

