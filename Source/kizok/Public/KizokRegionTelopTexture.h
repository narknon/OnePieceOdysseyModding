#pragma once
#include "CoreMinimal.h"
#include "KizokRegionTelopTexture.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FKizokRegionTelopTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> TextureList;
    
    KIZOK_API FKizokRegionTelopTexture();
};

