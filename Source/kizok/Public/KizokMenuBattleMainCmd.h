#pragma once
#include "CoreMinimal.h"
#include "EKizokBtlInputDir.h"
#include "EBattleMainCmdType.h"
#include "EMainCmdDispType.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleMainCmd.generated.h"

class UKizokButtonWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleMainCmd : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKizokBtlInputDir, EBattleMainCmdType> MainCmdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNormalInputMethod;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActedPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActionableStatePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMainCmdDispType CurCmdDispType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMainCmdDispType PreCmdDispType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CommandButtonGroupID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, EBattleMainCmdType> m_CmdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBattleMainCmdType, FName> m_CommandNameList;
    
public:
    UKizokMenuBattleMainCmd();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateFocusButton();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCommnadList();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCommandListName();
    
    UFUNCTION(BlueprintCallable)
    void UpdateCmdDispType();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMainCmdAnm(bool anm);
    
    UFUNCTION(BlueprintCallable)
    void SetActionableStatePlayer(bool bActionableState);
    
    UFUNCTION(BlueprintCallable)
    void SetActedPlayerFlag(bool bActed);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ScrollUpdateListName(UVerticalBox* vertical_box);
    
    UFUNCTION(BlueprintCallable)
    bool IsUsableArtsSkill();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsRapidBattle();
    
    UFUNCTION(BlueprintCallable)
    bool IsMainCmdAnm();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsExistDispSkillInfo();
    
    UFUNCTION(BlueprintCallable)
    bool IsChangeSeq(UKizokButtonWidget* Button);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsAutoBattle();
    
    UFUNCTION(BlueprintCallable)
    void InitPlayerTurn(int32 InFocusIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetFocusIndexByDirType(EKizokBtlInputDir InDirType, int32& OutFocusIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    EBattleMainCmdType GetFocusCmdType();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetDirTypeByFocusIndex(int32 InFocusIndex, EKizokBtlInputDir& OutDirType);
    
    UFUNCTION(BlueprintCallable)
    EBattleMainCmdType GetCommnadType(UKizokButtonWidget* Button);
    
    UFUNCTION(BlueprintCallable)
    EMainCmdDispType GetCmdDispType();
    
};

