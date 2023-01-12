#pragma once
#include "CoreMinimal.h"
#include "ObtainItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FObtainItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    KIZOK_API FObtainItemInfo();
};

