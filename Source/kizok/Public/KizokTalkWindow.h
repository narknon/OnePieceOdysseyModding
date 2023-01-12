#pragma once
#include "CoreMinimal.h"
#include "KizokTalkWindowAfterSelectDelegateDelegate.h"
#include "KizokTalkWindowFocusButtonDelegateDelegate.h"
#include "KizokTalkWindowAfterWaitDelegateDelegate.h"
#include "KizokTalkWindowAfterCloseDelegateDelegate.h"
#include "KizokTalkWindowBeforeOpenDelegateDelegate.h"
#include "KizokMessageParam.h"
#include "KizokUserWidget.h"
#include "KizokTalkWindow.generated.h"

class UKizokButtonWidget;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokTalkWindow : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MessageDataTable;
    
public:
    UKizokTalkWindow();
private:
    UFUNCTION(BlueprintCallable)
    void WaitAdvanceMessage(float InWaitTime, FKizokTalkWindowAfterWaitDelegate InEvent);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveAfterSelectEvent(FKizokTalkWindowAfterSelectDelegate InEvent);
    
private:
    UFUNCTION(BlueprintCallable)
    void ReflectMessageParam();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayMessageWithChoice(FText InMessage, const TArray<FText>& InChoiceList);
    
    UFUNCTION(BlueprintCallable)
    void PlayMessageWithCharaIconAndChoice(FText InMessage, FText InCharaName, FName InCharaID, const TArray<FText>& InChoiceList);
    
    UFUNCTION(BlueprintCallable)
    void PlayMessageWithCharaIcon(FText InMessage, FText InCharaName, FName InCharaID);
    
    UFUNCTION(BlueprintCallable)
    void PlayMessageTimeWithCharaIcon_DisableInput(FText InMessage, float InTime, FText InCharaName, FName InCharaID);
    
    UFUNCTION(BlueprintCallable)
    void PlayMessageTime_DisableInput(FText InMessage, float InTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayMessage(FText InMessage);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectMessageParam(const FKizokMessageParam& InMessageParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayOccurrenceChoiceSE();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayNextMessageSE();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHideOnlyText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetNextMessageChoice(const UKizokButtonWidget* InButtonWidget) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void FinishPlayMessage();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ExistNextMessage() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void AddFocusButtonEvent(FKizokTalkWindowFocusButtonDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    void AddBeforeOpenEvent(FKizokTalkWindowBeforeOpenDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    void AddAfterSelectEvent(FKizokTalkWindowAfterSelectDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    void AddAfterCloseEvent(FKizokTalkWindowAfterCloseDelegate InEvent);
    
};

