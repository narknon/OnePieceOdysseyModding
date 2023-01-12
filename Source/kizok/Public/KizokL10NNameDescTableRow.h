#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokL10NNameDescTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokL10NNameDescTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText desc;
    
    KIZOK_API FKizokL10NNameDescTableRow();
};

