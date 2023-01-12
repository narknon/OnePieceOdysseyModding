#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PLAYER_ID.h"
#include "EBtlMenuTargetSelectType.h"
#include "EBtlMenuTargetRange.h"
#include "KizokBattlePartySelectCancelDelegate.h"
#include "KizokBattlePartySelectDecideDelegate.h"
#include "BtlMenuStatusPath.h"
#include "BtlMenuDispStatus.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattlePartySelect.generated.h"

class UKizokButtonWidget;
class UKizokMenuBattleMain;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattlePartySelect : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlMenuStatusPath> PlayerIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> ButtonNumberList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> ItemIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> BGTextureList;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokBattlePartySelectDecide OnPartySelectDecide;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokBattlePartySelectCancel OnPartySelectCancel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlMenuTargetSelectType TargetSelectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetRangeSameGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PartyButtonGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllSelect;
    
public:
    UKizokMenuBattlePartySelect();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateFocusIcon(UKizokButtonWidget* Button);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDispStatusAll();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFocusCursor(int32 Index, bool is_visible);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDispInfomation(const FText& infoText, int32 cost, int32 Category, bool iconDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBGTexture(int32 texIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenWindow(UKizokMenuBattleMain* parentWindow);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecideTarget();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsTargetOutAnmPlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInit() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsChangeIcon(int32 pre_focus_index, int32 next_focus_index);
    
    UFUNCTION(BlueprintCallable)
    void InitButtonInfo();
    
public:
    UFUNCTION(BlueprintCallable)
    void GroupeFocusOut();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBtlMenuDispStatus GetStatus(int32 Index) const;
    
public:
    UFUNCTION(BlueprintCallable)
    FString GetSelectPlayerName();
    
    UFUNCTION(BlueprintCallable)
    PLAYER_ID GetSelectPlayerID();
    
    UFUNCTION(BlueprintCallable)
    TArray<PLAYER_ID> GetPlayerIDList();
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetPartyMemberNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextExp(PLAYER_ID playerID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMemberIndex(const UKizokButtonWidget* InButtonWidget) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetItemIcon(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExp(PLAYER_ID playerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetCharaFlag(PLAYER_ID PLAYER_ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetCharaFace(PLAYER_ID PLAYER_ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetButtonNumber(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetBGTexture(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusLostGroupIcon(int32 focus_lost_index);
    
    UFUNCTION(BlueprintCallable)
    void FocusIconAll();
    
    UFUNCTION(BlueprintCallable)
    void FocusGroupIconList(TArray<int32> focus_index_list);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusGroupIcon(int32 focus_index);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeSelectMethod(EBtlMenuTargetRange target_type);
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangeFocusMember(int32 InFocusMemberIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeFocusIcon(int32 pre_focus_index, int32 next_focus_index);
    
};

