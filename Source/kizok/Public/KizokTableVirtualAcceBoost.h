#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokTableVirtualAcceBoost.generated.h"

USTRUCT(BlueprintType)
struct FKizokTableVirtualAcceBoost : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HP_Add;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 STR_Add;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DEF_Add;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LUCK_Add;
    
    KIZOK_API FKizokTableVirtualAcceBoost();
};

