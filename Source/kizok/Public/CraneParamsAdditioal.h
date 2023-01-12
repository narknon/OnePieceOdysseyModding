#pragma once
#include "CoreMinimal.h"
#include "CraneParamsByGroup.h"
#include "CraneParamsAdditioal.generated.h"

USTRUCT(BlueprintType)
struct FCraneParamsAdditioal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCraneParamsByGroup SameGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCraneParamsByGroup DiffGroup;
    
    KIZOK_API FCraneParamsAdditioal();
};

