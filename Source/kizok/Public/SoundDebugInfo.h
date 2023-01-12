#pragma once
#include "CoreMinimal.h"
#include "SoundDebugInfo.generated.h"

class UAtomComponent;
class UBillboardComponent;

USTRUCT(BlueprintType)
struct FSoundDebugInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtomComponent* AtomComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* Billboard;
    
    KIZOK_API FSoundDebugInfo();
};

