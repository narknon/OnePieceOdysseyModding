#pragma once
#include "CoreMinimal.h"
#include "EnlightenAtlasAllocation.generated.h"

USTRUCT(BlueprintType)
struct FEnlightenAtlasAllocation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Width;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Height;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AtlasBaseX;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AtlasBaseY;
    
    ENLIGHTENCORE_API FEnlightenAtlasAllocation();
};

