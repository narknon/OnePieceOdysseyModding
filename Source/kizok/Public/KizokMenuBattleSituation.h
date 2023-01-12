#pragma once
#include "CoreMinimal.h"
#include "ESITUATIONRIBBON.h"
#include "EBtlSituationDispType.h"
#include "BtlMeuFrame.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleSituation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleSituation : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarningAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndSituation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESITUATIONRIBBON CurDispFrameType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DispTypeBits;
    
public:
    UKizokMenuBattleSituation();
    UFUNCTION(BlueprintCallable)
    void UnBindDelegates();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartAnimFromTextID(FName TextId, bool bWarnig);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartAnim(const FText& Text, bool bWarnig);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleWarningFrame(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleTitleText(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleInfoTextWidget(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleFrameWidget(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameWidgetType(ESITUATIONRIBBON frameType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveVisibleDispType(EBtlSituationDispType Type);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllVisibleDispType();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReflectFrameWidget(ESITUATIONRIBBON frameType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInfoTextOutAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInfoTextInAnim(const TArray<FText>& InTextList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFreamWidgetOutAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFrameInAnim(const FBtlMeuFrame& Param);
    
    UFUNCTION(BlueprintCallable)
    bool IsVisibleDispType(EBtlSituationDispType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsAnyDispType();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishedOutAnim(EBtlSituationDispType finishDispType);
    
    UFUNCTION(BlueprintCallable)
    void ExecFinishAnimNotify();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndAnim();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BindDelegates();
    
    UFUNCTION(BlueprintCallable)
    void AddVisibleDispType(EBtlSituationDispType Type);
    
};

