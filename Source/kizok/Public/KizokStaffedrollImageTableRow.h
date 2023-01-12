#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "KizokStaffedrollImageTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokStaffedrollImageTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ImagePath;
    
    KIZOK_API FKizokStaffedrollImageTableRow();
};

