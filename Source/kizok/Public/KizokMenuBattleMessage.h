#pragma once
#include "CoreMinimal.h"
#include "EBtlMenuSystemMesType.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleMessage.generated.h"

class AKizokNewBattleMode;
class UKizokTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleMessage : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBtlMenuSystemMesType, FName> SystemMessageList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MesWindowGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayBattleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BtlTextVisibleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultVisibleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeVisibleTime;
    
public:
    UKizokMenuBattleMessage();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopSytemMessage();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopBtlTextAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopBattleText();
    
    UFUNCTION(BlueprintCallable)
    void ShowTextBlockTime(UKizokTextBlock* TextBlock, FName TextId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSystemMessage(EBtlMenuSystemMesType MessageType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveSystemMes(UKizokTextBlock* TextBlock);
    
    UFUNCTION(BlueprintCallable)
    bool PopBtlText(FString& OutText, int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayBattleText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishedBtlOutAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishedBtlInAnim();
    
    UFUNCTION(BlueprintCallable)
    void OnBindTextBlock(UKizokTextBlock* TextBlock);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsPlayBattleText();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsExistBtlTextQueue();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitDataTable(AKizokNewBattleMode* BtlGameMode);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitBtlVisibleTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSystemMessageTextID(const EBtlMenuSystemMesType MessageType) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetBtlTextQueueNum();
    
    UFUNCTION(BlueprintCallable)
    void FinishBtlText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseSystemMes();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearBtlText();
    
};

