#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokTableConstantName.generated.h"

USTRUCT(BlueprintType)
struct FKizokTableConstantName : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Value;
    
    KIZOK_API FKizokTableConstantName();
};

