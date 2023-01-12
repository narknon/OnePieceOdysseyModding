#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokAcceParamTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokAcceParamTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Parcentage;
    
    KIZOK_API FKizokAcceParamTableRow();
};

