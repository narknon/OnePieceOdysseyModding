#pragma once
#include "CoreMinimal.h"
#include "KizokAccessorySaveData.generated.h"

USTRUCT(BlueprintType)
struct FKizokAccessorySaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AcceParamIdIndexList[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ParamCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Reserved[111];
    
    KIZOK_API FKizokAccessorySaveData();
};

