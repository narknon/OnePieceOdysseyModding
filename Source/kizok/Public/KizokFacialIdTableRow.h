#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokFacialIdTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokFacialIdTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowFrame;
    
    KIZOK_API FKizokFacialIdTableRow();
};

