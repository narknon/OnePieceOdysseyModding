#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SaveDataLvd.generated.h"

USTRUCT(BlueprintType)
struct FSaveDataLvd {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Flags[256];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 I[512];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float F[1024];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector V[16];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator R[16];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Reserved[640];
    
    KIZOK_API FSaveDataLvd();
};

