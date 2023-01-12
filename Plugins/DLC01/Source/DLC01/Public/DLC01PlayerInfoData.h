#pragma once
#include "CoreMinimal.h"
#include "DLC01PlayerInfoData.generated.h"

USTRUCT(BlueprintType)
struct FDLC01PlayerInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Reserved[8];
    
    DLC01_API FDLC01PlayerInfoData();
};

