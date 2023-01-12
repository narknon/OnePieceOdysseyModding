#pragma once
#include "CoreMinimal.h"
#include "EBtlPlayerActionType.h"
#include "KizokBattleTacticsCancelDelegate.h"
#include "KizokBattleTacticsDecideDelegate.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleTactics.generated.h"

class UKizokMenuBattleMain;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleTactics : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokBattleTacticsDecide OnTacticsDecide;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokBattleTacticsCancel OnTacticsCancel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TacticsButtonGruopID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlPlayerActionType CurPlayerActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDecideButtonAction;
    
public:
    UKizokMenuBattleTactics();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenWindow(UKizokMenuBattleMain* parentWidget);
    
    UFUNCTION(BlueprintCallable)
    void NotCalledStartWidgetOperate();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitStrategyList();
    
    UFUNCTION(BlueprintCallable)
    void DecideAction(EBtlPlayerActionType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallCurSelectCharaFocusAnim();
    
};

