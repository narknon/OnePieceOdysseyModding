#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokGammaValueTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokGammaValueTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GammaValue;
    
    KIZOK_API FKizokGammaValueTableRow();
};

