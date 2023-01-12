#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PLAYER_ID.h"
#include "EBtlMenuTargetSelectType.h"
#include "EBtlMenuStatusIconType.h"
#include "BtlMenuStatus.h"
#include "BtlCharaIcon.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleStatus.generated.h"

class UKizokBattleMenuManager;
class UImage;
class UKizokMenuBattleMain;
class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleStatus : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* StatusHorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* CharaSelelctHorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 StatusIconDispNum;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlCharaIcon> m_EnemyGroupList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMenuBattleMain* MenuBattleMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokBattleMenuManager* m_BtlMenuManager;
    
public:
    UKizokMenuBattleStatus();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateStatusWBP(int32 Index, FBtlMenuStatus& Status);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateStatusAll(const TArray<FBtlMenuStatus>& status_list);
    
    UFUNCTION(BlueprintCallable)
    void UpdateStatus(int32 Index, const FBtlMenuStatus& Status);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateEnemyIconFocus(EBtlMenuTargetSelectType target_range, FName focus_name, int32 group_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateEnemyGroup(PLAYER_ID PLAYER_ID, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDispStatusAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDispStatus(int32 Index);
    
public:
    UFUNCTION(BlueprintCallable)
    void UnfocusStatusButtonList();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetStatusIcon(PLAYER_ID PLAYER_ID, UImage* Image, FName parameter_name);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonGroupInfo(int32 button_gruop_id);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetBtlMenuManager(UKizokBattleMenuManager* manager);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleMainWBP(UKizokMenuBattleMain* main_widget);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeMemberEvent();
    
    UFUNCTION(BlueprintCallable)
    bool IsActedPlayer(PLAYER_ID playerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStatusListNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetStatusIconPath(EBtlMenuStatusIconType Type) const;
    
public:
    UFUNCTION(BlueprintCallable)
    FSoftObjectPath GetStatusCharaIconPath(PLAYER_ID PLAYER_ID);
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<FSoftObjectPath> GetStatusChangePathList(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetStatusBoxChildrenCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBtlMenuStatus GetStatus(int32 Index) const;
    
public:
    UFUNCTION(BlueprintCallable)
    PLAYER_ID GetSelectPlayerID();
    
protected:
    UFUNCTION(BlueprintCallable)
    FString GetSelectCharaName();
    
    UFUNCTION(BlueprintCallable)
    TArray<FBtlCharaIcon> GetEnemyGroupList(PLAYER_ID PLAYER_ID);
    
public:
    UFUNCTION(BlueprintCallable)
    void FocusCurrentSelectChara();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DefocusEnemyIconAt(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DefocusEnemyIconAll();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearStatusWBP(int32 Index);
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangeFocusMember(int32 InFocusMemberIndex);
    
};

