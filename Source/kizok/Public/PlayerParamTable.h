#pragma once
#include "CoreMinimal.h"
#include "PlayerParamTable.generated.h"

USTRUCT(BlueprintType)
struct FPlayerParamTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName playerID;
    
    KIZOK_API FPlayerParamTable();
};

