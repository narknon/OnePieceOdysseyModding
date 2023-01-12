#pragma once
#include "CoreMinimal.h"
#include "KizokAxisMappingSystemSaveData.generated.h"

USTRUCT(BlueprintType)
struct FKizokAxisMappingSystemSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MappingHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 KeyNameIndex;
    
    KIZOK_API FKizokAxisMappingSystemSaveData();
};

