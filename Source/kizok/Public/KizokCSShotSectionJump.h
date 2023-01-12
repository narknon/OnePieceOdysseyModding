#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokCSShotSectionJump.generated.h"

class ALevelSequenceActor;

UCLASS(Blueprintable)
class KIZOK_API UKizokCSShotSectionJump : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* TargetLevelSequence;
    
public:
    UKizokCSShotSectionJump();
};

