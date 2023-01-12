#pragma once
#include "CoreMinimal.h"
#include "EBtlResultSeq.h"
#include "BtlResultItemInfo.h"
#include "BtlMenuResult.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleResult.generated.h"

class UKizokUserWidget;
class UKizokBattleMenuManager;
class UKizokMenuBattleResultLevelUp;
class UKizokMenuBattleResultDrop;
class UGridPanel;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleResult : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokUserWidget> ButtonGuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlMenuResult DebugResultData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugResultExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugResultMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlResultSeq CurrentSeq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpInAnimWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoneyInAnimWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemInAnimWaitTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokBattleMenuManager* m_BtlMenuManager;
    
public:
    UKizokMenuBattleResult();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRapidBattle(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartSettingWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleButtonGuide(bool is_visible);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayLevelUpList();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDropAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinishedConverstationWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitSystemMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UKizokMenuBattleResultLevelUp* GetResultLevelUpWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UKizokMenuBattleResultDrop* GetResultDropWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMoney() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBtlResultItemInfo> GetDropList() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateMesButtonGuide(uint8 create_num, UGridPanel* grid_panel);
    
};

