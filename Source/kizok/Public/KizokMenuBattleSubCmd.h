#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "EBtlMenuSystemMesType.h"
#include "EBattleSubCmdType.h"
#include "BattleTacticsCmd.h"
#include "BattleSubCmd.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleSubCmd.generated.h"

class UKizokMenuBattlePartyChange;
class UKizokMenuBattleMain;
class UKizokMenuBattleTactics;
class UKizokMenuBattleStatusCheck;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleSubCmd : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattleTacticsCmd> TacticsCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubCommandButtonGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnceInvalidInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBattleSubCmdType, FBattleSubCmd> WidgetRefList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMenuBattleTactics* BattleModeSelectWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMenuBattlePartyChange* PartyChangeWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMenuBattleStatusCheck* StatusCheckWindow;
    
public:
    UKizokMenuBattleSubCmd();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDispCmdList();
    
    UFUNCTION(BlueprintCallable)
    void UpdateDispAll();
    
    UFUNCTION(BlueprintCallable)
    void SubCmdTacticsDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SubCmdDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SubCmdCancel();
    
    UFUNCTION(BlueprintCallable)
    void ShowSystemMessage(EBtlMenuSystemMesType systemMesType);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisibleSubCmd(ESlateVisibility visibilityType);
    
    UFUNCTION(BlueprintCallable)
    void SetInputEnableSubCmd(bool bEnable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetInvalidInput();
    
    UFUNCTION(BlueprintCallable)
    void PlayVoiceNotEscape(EBattleSubCmdType CommandType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenWindow(UKizokMenuBattleMain* parentWindow);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool OpenSubCommandWidget();
    
    UFUNCTION(BlueprintCallable)
    void OnceInvalidInput();
    
    UFUNCTION(BlueprintCallable)
    bool IsUsableCommand(EBattleSubCmdType CommandType);
    
    UFUNCTION(BlueprintCallable)
    bool IsSelectableCurButton();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBattleSubCmdType GetCurCommandType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCmdListMaxNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseWindow();
    
    UFUNCTION(BlueprintCallable)
    void CloseSubCommandWidget();
    
    UFUNCTION(BlueprintCallable)
    void CallCurSelectSubCommand();
    
};

