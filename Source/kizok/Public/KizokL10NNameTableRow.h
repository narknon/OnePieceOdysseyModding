#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokL10NNameTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokL10NNameTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    KIZOK_API FKizokL10NNameTableRow();
};

