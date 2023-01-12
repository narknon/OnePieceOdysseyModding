#pragma once
#include "CoreMinimal.h"
#include "EnlightenSystemDusterSection.h"
#include "UObject/NoExportTypes.h"
#include "EnlightenSystemDusterInstance.generated.h"

USTRUCT(BlueprintType)
struct FEnlightenSystemDusterInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PrimitiveId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid InstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnlightenSystemDusterSection> Sections;
    
    ENLIGHTENCORE_API FEnlightenSystemDusterInstance();
};

