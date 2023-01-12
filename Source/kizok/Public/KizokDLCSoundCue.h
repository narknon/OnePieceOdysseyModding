#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokDLCSoundCue.generated.h"

class USoundAtomCueSheet;

UCLASS(Blueprintable)
class KIZOK_API UKizokDLCSoundCue : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, USoundAtomCueSheet*> DLCSound;
    
public:
    UKizokDLCSoundCue();
};

