#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokMainStoryChoiceTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokMainStoryChoiceTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChoiceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RouteNo;
    
    KIZOK_API FKizokMainStoryChoiceTableRow();
};

