#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KizokDebugTextureGroupSectionMemorySetting.generated.h"

USTRUCT(BlueprintType)
struct FKizokDebugTextureGroupSectionMemorySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MemoryRegulationKB;
    
    KIZOK_API FKizokDebugTextureGroupSectionMemorySetting();
};

