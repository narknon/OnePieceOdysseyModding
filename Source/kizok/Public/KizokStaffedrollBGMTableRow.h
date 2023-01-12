#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokStaffedrollBGMTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokStaffedrollBGMTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BGMID;
    
    KIZOK_API FKizokStaffedrollBGMTableRow();
};

