#pragma once
#include "CoreMinimal.h"
#include "KizokAIController.h"
#include "KizokNPCAIController.generated.h"

UCLASS(Blueprintable)
class KIZOK_API AKizokNPCAIController : public AKizokAIController {
    GENERATED_BODY()
public:
    AKizokNPCAIController();
    UFUNCTION(BlueprintCallable)
    bool SetBlackBoardParam();
    
    UFUNCTION(BlueprintCallable)
    bool IsActionEnd();
    
    UFUNCTION(BlueprintCallable)
    void ActionStart(int32 nextAction);
    
};

