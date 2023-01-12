#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokLoadingTipsTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokLoadingTipsTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seq;
    
    KIZOK_API FKizokLoadingTipsTableRow();
};

