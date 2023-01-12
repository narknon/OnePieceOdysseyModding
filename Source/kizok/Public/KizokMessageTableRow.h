#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokMessageTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokMessageTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    KIZOK_API FKizokMessageTableRow();
};

