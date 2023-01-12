#pragma once
#include "CoreMinimal.h"
#include "KizokPlayerInfoData.generated.h"

USTRUCT(BlueprintType)
struct FKizokPlayerInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Reserved[7];
    
    KIZOK_API FKizokPlayerInfoData();
};

