#pragma once
#include "CoreMinimal.h"
#include "InteractInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FInteractInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pActor;
    
    KIZOK_API FInteractInfo();
};

