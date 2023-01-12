#pragma once
#include "CoreMinimal.h"
#include "TextureFolderObjectInfo.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FTextureFolderObjectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBeginEnable;
    
    KIZOK_API FTextureFolderObjectInfo();
};

