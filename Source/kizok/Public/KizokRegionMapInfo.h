#pragma once
#include "CoreMinimal.h"
#include "KizokRegionMapInfo.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FKizokRegionMapInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* MapMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* MiniMapMaterial;
    
    KIZOK_API FKizokRegionMapInfo();
};

