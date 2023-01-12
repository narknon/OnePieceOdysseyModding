#pragma once
#include "CoreMinimal.h"
#include "EnlightenSystemDusterPoint.h"
#include "EnlightenSystemDusterSection.generated.h"

USTRUCT(BlueprintType)
struct FEnlightenSystemDusterSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FirstFace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FaceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnlightenSystemDusterPoint> Points;
    
    ENLIGHTENCORE_API FEnlightenSystemDusterSection();
};

