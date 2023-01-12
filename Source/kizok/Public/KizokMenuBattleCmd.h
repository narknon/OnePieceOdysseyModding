#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "EBattleMainCmdType.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleCmd.generated.h"

class UKizokBattleMenuManager;
class UKizokMenuBattleMain;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleCmd : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokBattleMenuManager* m_BtlMenuManager;
    
public:
    UKizokMenuBattleCmd();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDispMainCommand(bool bActed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TurnStartAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopPlayerSkillName();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopPlayerCurrentSkillName();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartMainCmdWidgetOperate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleWaitTime(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMainCmdVisible(ESlateVisibility visible, bool cur);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMainCmdInputEnable(bool InEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveSkillTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveLRCursorTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveItemTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveAttackTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPlayerCurrentSkillName();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCursorAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCmdLoopAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCmdInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayChangeAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsSubCmdTutorialAbleCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsStateDirectAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EBattleMainCmdType GetFocusMainCmdType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKizokMenuBattleMain* GetBattleMainWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseMainCmdWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddSkillTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddLRCursorTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddItemTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddAttackTutorial();
    
};

