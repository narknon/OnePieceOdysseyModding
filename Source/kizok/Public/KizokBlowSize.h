#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokBlowSize.generated.h"

USTRUCT(BlueprintType)
struct FKizokBlowSize : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OccupyMax;
    
    KIZOK_API FKizokBlowSize();
};

