#pragma once
#include "CoreMinimal.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleGameOver.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleGameOver : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToSkipTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 JingleHandle;
    
public:
    UKizokMenuBattleGameOver();
protected:
    UFUNCTION(BlueprintCallable)
    void Update(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StopGameOverJingle();
    
    UFUNCTION(BlueprintCallable)
    void PlayGameOverJingle();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayingGameOverJingle();
    
private:
    UFUNCTION(BlueprintCallable)
    void EndGameOver();
    
};

