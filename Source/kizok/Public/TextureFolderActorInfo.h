#pragma once
#include "CoreMinimal.h"
#include "TextureFolderActorInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTextureFolderActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBeginEnable;
    
    KIZOK_API FTextureFolderActorInfo();
};

