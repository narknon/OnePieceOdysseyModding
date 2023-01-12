#pragma once
#include "CoreMinimal.h"
#include "KizokLoadFaceIconInfo.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FKizokLoadFaceIconInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Texture;
    
    KIZOK_API FKizokLoadFaceIconInfo();
};

