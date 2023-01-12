#pragma once
#include "CoreMinimal.h"
#include "EnlightenMaterialData.h"
#include "UObject/NoExportTypes.h"
#include "EnlightenSerializedPrimitiveAlbedoData.generated.h"

USTRUCT(BlueprintType)
struct FEnlightenSerializedPrimitiveAlbedoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PrimitiveGuid;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 InstanceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnlightenMaterialData> Materials;
    
    ENLIGHTENCORE_API FEnlightenSerializedPrimitiveAlbedoData();
};

