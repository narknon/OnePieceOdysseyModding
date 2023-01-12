#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BtlButtonGuide.generated.h"

USTRUCT(BlueprintType)
struct FBtlButtonGuide {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath TexturePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextId;
    
    KIZOK_API FBtlButtonGuide();
};

