#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokBridgeTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokBridgeTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Material1Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Material1Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Material2Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Material2Num;
    
    KIZOK_API FKizokBridgeTableRow();
};

