#pragma once
#include "CoreMinimal.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleSituationFrame.generated.h"

class UKizokTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleSituationFrame : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
    UKizokMenuBattleSituationFrame();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitleText(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFrameText(const FText& CategoryText, const FText& TitleText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCategoryText(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInAnimation();
    
    UFUNCTION(BlueprintCallable)
    void InitTextBlock(UKizokTextBlock* InTextBlock);
    
};

