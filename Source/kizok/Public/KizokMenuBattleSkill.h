#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "PLAYER_ID.h"
#include "EAtkAttrIcon.h"
#include "EBTL_NEW_TUTORIAL_ID.h"
#include "EBtlMenuSystemMesType.h"
#include "EBtlMenuCameraType.h"
#include "EBtlMenuTargetRange.h"
#include "EBtlMainMesWindow.h"
#include "EBtlSkillMenuSeq.h"
#include "EBtlSkillMenuSysMes.h"
#include "BtlMenuSkillInfo.h"
#include "KizokSkillAtkAttr.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleSkill.generated.h"

class UKizokUserWidget;
class UKizokButtonWidget;
class UScrollBox;
class UKizokMenuBattlePartySelect;
class UKizokMenuBattleMain;
class UKizokSkillButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleSkill : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CombinItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMenuBattlePartySelect* StatusWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAtkAttrIcon, FSoftObjectPath> AttrIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin SkillListPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TutorialSkillID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlSkillMenuSeq CurrentSkillSeq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TutorialSkillName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SkillWidgetClass;
    
public:
    UKizokMenuBattleSkill();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UseSkillTargetFriend(bool is_use_item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateUsableSkillFlag(UKizokSkillButtonWidget* ButtonWidget, const FBtlMenuSkillInfo Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateStatusDispAll();
    
    UFUNCTION(BlueprintCallable)
    void UpdateSkillDetailInfo();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSelectSkillInfo(int32 CostSP, const FText& SkillName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDispSkillList(int32 list_index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDispDetailInfo(int32 list_index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDispCurPlayerTP();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartTutorialMenu(EBTL_NEW_TUTORIAL_ID tutorialType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ShowSystemMessage(EBtlMenuSystemMesType systemMesType);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetScrollOffset();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerID(PLAYER_ID playerID);
    
    UFUNCTION(BlueprintCallable)
    void SetPartyStatusList();
    
    UFUNCTION(BlueprintCallable)
    void SetInputEnableSkillList(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFocusSkillID(FName SkillID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SelectedSkill();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSkillListFromScrollBox(UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget, int32 InTabButtonGroupIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReflectAtkAttributeAll(FName SkillID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenWindow(UKizokMenuBattleMain* parentWindow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenStatusWindow();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OpenPartySelectWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputTrgUseSkillWithItem();
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadSkillWidget(TSoftClassPtr<UKizokButtonWidget> skill_class);
    
    UFUNCTION(BlueprintCallable)
    EBtlSkillMenuSysMes IsUseSelectSkill();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsUseCombinItem();
    
    UFUNCTION(BlueprintCallable)
    bool IsUsableSkillFromTargets();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsUsableSkill(const FBtlMenuSkillInfo& InSkillParam, EBtlSkillMenuSysMes& OutMes);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsCurSkillNoDamageType();
    
    UFUNCTION(BlueprintCallable)
    bool IsAvailableCombinItem(FName item_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitStatusWindow();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitSkillList();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTextByItemID(const FName item_id) const;
    
    UFUNCTION(BlueprintCallable)
    FSoftObjectPath GetTargetRangeImagePath(EBtlMenuTargetRange TargetRange);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSkillListNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkillListFocusIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBtlMenuSkillInfo GetSkillData(int32 Index) const;
    
public:
    UFUNCTION(BlueprintCallable)
    FName GetSelectSkillID();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPossessNumByItemID(const FName item_id) const;
    
public:
    UFUNCTION(BlueprintCallable)
    UKizokMenuBattlePartySelect* GetPartySelectWidget();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBtlMenuSkillInfo GetFocusSkillData() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurTP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    PLAYER_ID GetCurSelectPlayerGroupId();
    
    UFUNCTION(BlueprintCallable)
    TArray<FKizokSkillAtkAttr> GetAtkAttrList(FName SkillID);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteSkillAction(const FString& TargetName);
    
    UFUNCTION(BlueprintCallable)
    void DestroyFieldIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecidePartyTargetSelect(PLAYER_ID playerID, const FString& selectPlayerName);
    
public:
    UFUNCTION(BlueprintCallable)
    void CreateSkillList();
    
    UFUNCTION(BlueprintCallable)
    EBtlMenuSystemMesType ConvertSystemMessageType(EBtlSkillMenuSysMes skill_mes);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseWindow();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseStatusWindow();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClosePartySelectWindow();
    
    UFUNCTION(BlueprintCallable)
    void ClosedSkillWidget();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearSkillList();
    
    UFUNCTION(BlueprintCallable)
    void ChangeCameraType(EBtlMenuCameraType Type);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeButtonGuide(EBtlMainMesWindow MessageType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CancelPartyTargetSelect();
    
    UFUNCTION(BlueprintCallable)
    void BlowSkillTutorial();
    
};

