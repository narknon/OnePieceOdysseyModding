#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "KizokMapIconTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokMapIconTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath MapIcon;
    
    KIZOK_API FKizokMapIconTableRow();
};

