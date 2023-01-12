#pragma once
#include "CoreMinimal.h"
#include "KizokKeyMappingData.generated.h"

USTRUCT(BlueprintType)
struct FKizokKeyMappingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextId;
    
    KIZOK_API FKizokKeyMappingData();
};

