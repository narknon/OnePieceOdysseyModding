#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokHelpTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokHelpTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HelpId;
    
    KIZOK_API FKizokHelpTableRow();
};

