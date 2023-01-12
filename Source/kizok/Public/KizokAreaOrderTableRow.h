#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokAreaOrderTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokAreaOrderTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AreaOrder;
    
    KIZOK_API FKizokAreaOrderTableRow();
};

