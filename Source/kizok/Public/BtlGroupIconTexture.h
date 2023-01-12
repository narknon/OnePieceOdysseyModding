#pragma once
#include "CoreMinimal.h"
#include "BtlGroupIconTexture.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FBtlGroupIconTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CharaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* OutlineTexture;
    
    KIZOK_API FBtlGroupIconTexture();
};

