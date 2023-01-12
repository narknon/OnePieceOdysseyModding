#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokLocalizationTextTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokLocalizationTextTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    KIZOK_API FKizokLocalizationTextTableRow();
};

