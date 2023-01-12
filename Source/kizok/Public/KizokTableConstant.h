#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokTableConstant.generated.h"

USTRUCT(BlueprintType)
struct FKizokTableConstant : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    KIZOK_API FKizokTableConstant();
};

