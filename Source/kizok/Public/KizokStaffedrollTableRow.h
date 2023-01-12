#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokStaffedrollTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokStaffedrollTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    KIZOK_API FKizokStaffedrollTableRow();
};

