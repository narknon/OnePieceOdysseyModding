#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnlightenSerializedPrimitive.generated.h"

USTRUCT(BlueprintType)
struct FEnlightenSerializedPrimitive {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PrimitiveId;
    
    ENLIGHTENCORE_API FEnlightenSerializedPrimitive();
};

