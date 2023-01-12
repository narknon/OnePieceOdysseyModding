#pragma once
#include "CoreMinimal.h"
#include "SoundAcorInfo.generated.h"

class UKizokMapAtomComponent;

USTRUCT(BlueprintType)
struct FSoundAcorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMapAtomComponent* MapAtomComponet;
    
    KIZOK_API FSoundAcorInfo();
};

