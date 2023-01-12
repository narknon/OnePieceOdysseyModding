#pragma once
#include "CoreMinimal.h"
#include "EnlightenMaterialData.h"
#include "EnlightenSerializedFoliageAlbedoData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FEnlightenSerializedFoliageAlbedoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 FirstInstanceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnlightenMaterialData> Materials;
    
    ENLIGHTENCORE_API FEnlightenSerializedFoliageAlbedoData();
};

