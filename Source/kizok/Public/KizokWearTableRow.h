#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokWearTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokWearTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CostumeID;
    
    KIZOK_API FKizokWearTableRow();
};

