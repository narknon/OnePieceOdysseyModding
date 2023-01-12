#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "KizokAxisKeyMap.generated.h"

USTRUCT(BlueprintType)
struct FKizokAxisKeyMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString KeyString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    KIZOK_API FKizokAxisKeyMap();
};

