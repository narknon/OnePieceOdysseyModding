#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokFieldEnemySpawnerManager.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokFieldEnemySpawnerManager : public UObject {
    GENERATED_BODY()
public:
    UKizokFieldEnemySpawnerManager();
    UFUNCTION(BlueprintCallable)
    static void BC_SetSpawnerEnableFlagAll(bool _enable_flag);
    
};

