#pragma once
#include "CoreMinimal.h"
#include "EBtlMenuSystemMesType.h"
#include "EBattleSubCmdType.h"
#include "EBtlMainMesWindow.h"
#include "BtlButtonCmdWindow.h"
#include "BattleTacticsCmd.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleConversation.generated.h"

class UKizokUserWidget;
class UGridPanel;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleConversation : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokUserWidget> ButtonGuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattleTacticsCmd> TacticsCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlButtonCmdWindow> SeqGuideList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MesWindowGroupID;
    
public:
    UKizokMenuBattleConversation();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTacticsDispState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartConvOperate();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSystemMessage(EBtlMenuSystemMesType InSystemMesType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSeqGuide(EBtlMainMesWindow Seq);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsSelectableCommand(EBattleSubCmdType CommandType);
    
    UFUNCTION(BlueprintCallable)
    bool IsSelectableCoiceMesWindow();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitTacticsDispState();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBattleSubCmdType GetSelectTacticsCmdType() const;
    
    UFUNCTION(BlueprintCallable)
    FBtlButtonCmdWindow GetMesWindowInfo(const EBtlMainMesWindow message_type);
    
    UFUNCTION(BlueprintCallable)
    void EndConvOperate();
    
    UFUNCTION(BlueprintCallable)
    void CreateMesButtonGuide(uint8 create_num, UGridPanel* grid_panel);
    
    UFUNCTION(BlueprintCallable)
    void CloseTacticsWindow();
    
    UFUNCTION(BlueprintCallable)
    void CallSubCommand();
    
};

