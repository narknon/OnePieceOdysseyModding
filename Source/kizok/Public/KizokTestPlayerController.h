#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EAnalogStickType.h"
#include "UObject/NoExportTypes.h"
#include "KizokAIController.h"
#include "KizokTestPlayerController.generated.h"

UCLASS(Blueprintable)
class KIZOK_API AKizokTestPlayerController : public AKizokAIController {
    GENERATED_BODY()
public:
    AKizokTestPlayerController();
    UFUNCTION(BlueprintCallable)
    void SetInputButton(FKey Key, float pressTime);
    
    UFUNCTION(BlueprintCallable)
    void SetInputAxis(EAnalogStickType Key, FVector2D Slope, float pressTime);
    
};

