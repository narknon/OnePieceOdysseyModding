#pragma once
#include "CoreMinimal.h"
#include "KizokEnvironmentTexture.generated.h"

class UTextureCube;

USTRUCT(BlueprintType)
struct KIZOK_API FKizokEnvironmentTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float timeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureCube* Texture;
    
    FKizokEnvironmentTexture();
};

