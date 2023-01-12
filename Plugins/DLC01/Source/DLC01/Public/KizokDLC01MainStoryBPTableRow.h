#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokDLC01MainStoryBPTableRow.generated.h"

USTRUCT(BlueprintType)
struct DLC01_API FKizokDLC01MainStoryBPTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PtyN503: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PtyN504: 1;
    
    FKizokDLC01MainStoryBPTableRow();
};

