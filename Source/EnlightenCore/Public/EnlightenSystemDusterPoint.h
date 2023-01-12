#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnlightenSystemDusterPoint.generated.h"

USTRUCT(BlueprintType)
struct FEnlightenSystemDusterPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DusterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FaceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Position;
    
    ENLIGHTENCORE_API FEnlightenSystemDusterPoint();
};

