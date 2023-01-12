#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnlightenSerializedInstance.generated.h"

USTRUCT(BlueprintType)
struct FEnlightenSerializedInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 UVScaleBias;
    
    ENLIGHTENCORE_API FEnlightenSerializedInstance();
};

