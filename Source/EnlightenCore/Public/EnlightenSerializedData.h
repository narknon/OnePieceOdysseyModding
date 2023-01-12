#pragma once
#include "CoreMinimal.h"
#include "EnlightenSerializedPrimitive.h"
#include "EnlightenSerializedInstancedPrimitive.h"
#include "EnlightenSerializedPrimitiveAlbedoData.h"
#include "EnlightenSerializedFoliageAlbedoData.h"
#include "EnlightenSerializedData.generated.h"

USTRUCT(BlueprintType)
struct FEnlightenSerializedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnlightenSerializedPrimitive> Primitives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnlightenSerializedInstancedPrimitive> InstancedPrimitives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnlightenSerializedPrimitiveAlbedoData> PrimitiveAlbedoData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnlightenSerializedFoliageAlbedoData> FoliageAlbedoData;
    
    ENLIGHTENCORE_API FEnlightenSerializedData();
};

