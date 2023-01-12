#pragma once
#include "CoreMinimal.h"
#include "KizokIconTypeInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FKizokIconTypeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    KIZOK_API FKizokIconTypeInfo();
};

