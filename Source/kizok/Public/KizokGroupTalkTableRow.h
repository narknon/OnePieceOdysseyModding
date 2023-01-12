#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokGroupTalkTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokGroupTalkTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Params;
    
    KIZOK_API FKizokGroupTalkTableRow();
};

