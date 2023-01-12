#pragma once
#include "CoreMinimal.h"
#include "KizokBattleMenuBase.h"
#include "KizokBattleSituationIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokBattleSituationIcon : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
    UKizokBattleSituationIcon();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleIcon(bool bVisible);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextList(const TArray<FText>& TextList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayLoopAnimation();
    
    UFUNCTION(BlueprintCallable)
    void IconOnFromTextList(TArray<FText> TextList);
    
    UFUNCTION(BlueprintCallable)
    void IconOn();
    
    UFUNCTION(BlueprintCallable)
    void IconOff();
    
};

