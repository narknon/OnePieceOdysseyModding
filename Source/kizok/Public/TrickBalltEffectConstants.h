#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TrickBalltEffectConstants.generated.h"

USTRUCT(BlueprintType)
struct FTrickBalltEffectConstants : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Folder;
    
    KIZOK_API FTrickBalltEffectConstants();
};

