#pragma once
#include "CoreMinimal.h"
#include "TextureFolderEnableInfo.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FTextureFolderEnableInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Texture;
    
    KIZOK_API FTextureFolderEnableInfo();
};

