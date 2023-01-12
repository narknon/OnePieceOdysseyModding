#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokBattleActionLoader.generated.h"

UCLASS(Blueprintable)
class UKizokBattleActionLoader : public UObject {
    GENERATED_BODY()
public:
    UKizokBattleActionLoader();
private:
    UFUNCTION(BlueprintCallable)
    void OnLoadCompleteForSkill_LevelSequence();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadCompleteForSkill_AnimSequence();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadCompleteForAny_SoundSoftObjectPath();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadCompleteForAlternateJoin_AnimSequence();
    
};

