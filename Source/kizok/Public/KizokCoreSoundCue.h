#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokCoreSoundCue.generated.h"

class USoundAtomCueSheet;
class UKizokDLCSoundCue;

UCLASS(Blueprintable)
class KIZOK_API UKizokCoreSoundCue : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, USoundAtomCueSheet*> CommonSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UKizokDLCSoundCue*> DLCCueList;
    
public:
    UKizokCoreSoundCue();
};

