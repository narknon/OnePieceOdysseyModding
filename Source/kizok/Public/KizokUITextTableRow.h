#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokUITextTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokUITextTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UIText;
    
    KIZOK_API FKizokUITextTableRow();
};

