#pragma once
#include "CoreMinimal.h"
#include "EnlightenSerializedInstance.h"
#include "UObject/NoExportTypes.h"
#include "EnlightenSerializedInstancedPrimitive.generated.h"

USTRUCT(BlueprintType)
struct FEnlightenSerializedInstancedPrimitive {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PrimitiveId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnlightenSerializedInstance> Instances;
    
    ENLIGHTENCORE_API FEnlightenSerializedInstancedPrimitive();
};

