#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokPlayerInput.generated.h"

class AKizokPlayerBase;

UCLASS(Blueprintable)
class KIZOK_API UKizokPlayerInput : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKizokPlayerBase* OwnerPlayer;
    
public:
    UKizokPlayerInput();
};

