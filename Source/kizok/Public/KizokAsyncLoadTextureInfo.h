#pragma once
#include "CoreMinimal.h"
#include "KizokAsyncLoadTextureInfo.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FKizokAsyncLoadTextureInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Texture;
    
    KIZOK_API FKizokAsyncLoadTextureInfo();
};

