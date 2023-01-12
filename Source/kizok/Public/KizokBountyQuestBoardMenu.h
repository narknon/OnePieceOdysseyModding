#pragma once
#include "CoreMinimal.h"
#include "EKizokBountyQuestState.h"
#include "EKizokBountyQuestBoardMenuReceiveState.h"
#include "EKizokBountyQuestBoardMenuState.h"
#include "KizokBountyQuestBoardMenuData.h"
#include "KizokUserWidget.h"
#include "KizokBountyQuestBoardMenu.generated.h"

class UKizokButtonWidget;
class UKizokConversationWidget;
class UScrollBox;
class UWidgetAnimation;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokBountyQuestBoardMenu : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonWidget> BountyQuestButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BountyQuestParamTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BountyQuestStringTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MessageParamTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MessageStringTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> RegionBoardTextIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* BountyQuestButtonWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokConversationWidget> ConversationWidgetPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokConversationWidget* ConversationWidget;
    
public:
    UKizokBountyQuestBoardMenu();
    UFUNCTION(BlueprintCallable)
    void SortBountyQuestDataList();
    
    UFUNCTION(BlueprintCallable)
    void SetState(EKizokBountyQuestBoardMenuState InState);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollBoxInfoAndButtonGroupInputEnable(bool InInputEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetReceiveState(EKizokBountyQuestBoardMenuReceiveState InState);
    
    UFUNCTION(BlueprintCallable)
    EKizokBountyQuestState SelectBountyQuest();
    
    UFUNCTION(BlueprintCallable)
    void RegisterBountyQuestMessage();
    
    UFUNCTION(BlueprintCallable)
    void ReceiveRewardMoney();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBountyBoard() const;
    
    UFUNCTION(BlueprintCallable)
    void InitBountyReceiveRewardMenu(FName InQuestId);
    
    UFUNCTION(BlueprintCallable)
    void InitBountyQuestBoardMenu(FName InRegionId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKizokBountyQuestBoardMenuState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSortStep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRegionBoardText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKizokBountyQuestBoardMenuReceiveState GetReceiveState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReceivableRewardBountyQuestNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNoticeDeletePossible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetBountyTextDataTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBountyQuestDataNum() const;
    
    UFUNCTION(BlueprintCallable)
    FKizokBountyQuestBoardMenuData GetBountyQuestData(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBountyQuestButtonGroupFocusIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishMessage();
    
    UFUNCTION(BlueprintCallable)
    void DisableBountyQuestDataNotice(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> CreateReceivableRewardNumberList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckReceivemoneyOver() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeScrollBoxInfo(float InScrollInsideSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalcOverMoney(int32 InRewardMoney, int32 InBrokerage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalcFinalMoney(int32 InRewardMoney, int32 InBrokerage) const;
    
    UFUNCTION(BlueprintCallable)
    void BackSelectBountyQuest(bool bInNextBountyQuestState);
    
    UFUNCTION(BlueprintCallable)
    void AddButtonWidgetAndCreateButtonGroup(UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget, UWidgetAnimation* InAnimation);
    
};

