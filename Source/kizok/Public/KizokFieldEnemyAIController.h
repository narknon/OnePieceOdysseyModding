#pragma once
#include "CoreMinimal.h"
#include "KizokAIController.h"
#include "KizokFieldEnemyAIController.generated.h"

UCLASS(Blueprintable)
class KIZOK_API AKizokFieldEnemyAIController : public AKizokAIController {
    GENERATED_BODY()
public:
    AKizokFieldEnemyAIController();
    UFUNCTION(BlueprintCallable)
    bool SetBlackBoardParam();
    
    UFUNCTION(BlueprintCallable)
    bool IsActionEnd();
    
    UFUNCTION(BlueprintCallable)
    void ActionStart(int32 nextAction);
    
};

