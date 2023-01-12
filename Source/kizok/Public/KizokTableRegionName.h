#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokTableRegionName.generated.h"

USTRUCT(BlueprintType)
struct FKizokTableRegionName : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RegionName;
    
    KIZOK_API FKizokTableRegionName();
};

