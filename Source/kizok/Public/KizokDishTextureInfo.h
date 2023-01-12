#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KizokDishTextureInfo.generated.h"

USTRUCT(BlueprintType)
struct FKizokDishTextureInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleEffect;
    
    KIZOK_API FKizokDishTextureInfo();
};

