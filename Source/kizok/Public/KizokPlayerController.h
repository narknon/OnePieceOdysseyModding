#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "KizokPlayerController.generated.h"

class UKizokMoveInput;
class UKizokPlayerFieldInput;

UCLASS(Blueprintable)
class KIZOK_API AKizokPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMoveInput* MoveInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokPlayerFieldInput* FieldInput;
    
    AKizokPlayerController();
};

