#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PLAYER_ID.h"
#include "EBtlMenuSystemMesType.h"
#include "EBtlPartyChangeSeq.h"
#include "EBtlMainMesWindow.h"
#include "KizokBattlePartyChangeCancelDelegate.h"
#include "KizokBattlePartyChangeDecideDelegate.h"
#include "BtlMenuStatusPath.h"
#include "BtlMenuDispStatus.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattlePartyChange.generated.h"

class UKizokButtonWidget;
class UPanelWidget;
class UKizokMenuBattleMain;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattlePartyChange : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlMenuStatusPath> PlayerIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> ButtonNumberList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> SubAndGuestCharaFaceList;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokBattlePartyChangeDecide OnPartyChangeDecide;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokBattlePartyChangeCancel OnPartyChangeCancel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlPartyChangeSeq CurrentPartyChangeSeq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MainPartyButtonGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubPartyButtonGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsChangeConfirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FirstSelectIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SecondSelectIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FocusMemberIndex;
    
public:
    UKizokMenuBattlePartyChange();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateStatusIconAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateStatusIcon(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCharaButton(UPanelWidget* InPanelWidget, int32 InNum);
    
    UFUNCTION(BlueprintCallable)
    void ShowSystemMessage(EBtlMenuSystemMesType systemMesType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStatusIconCheckMark(int32 Index, bool is_visible);
    
    UFUNCTION(BlueprintCallable)
    void RequestPartyLists();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestPartyList();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenWindow(UKizokMenuBattleMain* parentWidget);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsSelectableChangeMenberIdx(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool IsSelectableChangeMenber();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsButtonGroupListEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalButtonNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBtlMenuDispStatus GetSubStatusInfo(int32 Index) const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    PLAYER_ID GetSubPlayerID() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSubPartyMemberNum() const;
    
    UFUNCTION(BlueprintCallable)
    UKizokButtonWidget* GetSubGroupButtonWidget(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSubButtonNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetSubAndGuestCharaFace(uint8 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextExp(PLAYER_ID playerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMemberIndex(const UKizokButtonWidget* InButtonWidget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBtlMenuDispStatus GetMainStatusInfo(int32 Index) const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    PLAYER_ID GetMainPlayerID() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMainPartyMemberNum() const;
    
    UFUNCTION(BlueprintCallable)
    UKizokButtonWidget* GetMainGroupButtonWidget(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMainButtonNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExp(PLAYER_ID playerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetCharaFlag(PLAYER_ID PLAYER_ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetCharaFace(PLAYER_ID PLAYER_ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetButtonNumber(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void ExecPartyChange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseWindow();
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangeFocusMember(int32 InFocusMemberIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeButtonGuide(EBtlMainMesWindow MessageType);
    
};

