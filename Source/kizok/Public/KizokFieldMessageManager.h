#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KizokFieldMessageManager.generated.h"

class UBehaviorTreeComponent;
class UBlackboardComponent;

UCLASS(Blueprintable)
class KIZOK_API AKizokFieldMessageManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* BehaviorTreeComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlackboardComponent* BlackboardComp;
    
public:
    AKizokFieldMessageManager();
    UFUNCTION(BlueprintCallable)
    void StopMessageAI();
    
    UFUNCTION(BlueprintCallable)
    void RestartMessageAI();
    
};

