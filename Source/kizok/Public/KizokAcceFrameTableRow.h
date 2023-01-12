#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokAcceFrameTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokAcceFrameTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AcceFrame1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AcceFrame2;
    
    KIZOK_API FKizokAcceFrameTableRow();
};

