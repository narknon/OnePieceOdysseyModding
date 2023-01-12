#pragma once
#include "CoreMinimal.h"
#include "EKizokButtonWidgetSelectMode.h"
#include "KizokCommonMenuAfterSelectDelegateDelegate.h"
#include "KizokCommonMenuFocusButtonDelegateDelegate.h"
#include "KizokUserWidget.h"
#include "KizokCommonMenu.generated.h"

class UKizokButtonWidget;
class UKizokTalkWindow;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokCommonMenu : public UKizokUserWidget {
    GENERATED_BODY()
public:
    UKizokCommonMenu();
    UFUNCTION(BlueprintCallable)
    void SetSelectMode(const TArray<EKizokButtonWidgetSelectMode>& InSelectModeList);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableCancelButton(bool bInEnable);
    
private:
    UFUNCTION(BlueprintCallable)
    void RegisterTalkWindow(UKizokTalkWindow* InTalkWindow);
    
    UFUNCTION(BlueprintCallable)
    void ReflectParamToMenu();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRegisterEventToTalkWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrevMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNextMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMenuIn();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetNextMenuChoice(const UKizokButtonWidget* InButtonWidget) const;
    
    UFUNCTION(BlueprintCallable)
    void ExecTalkWindowAfterCloseEvent();
    
    UFUNCTION(BlueprintCallable)
    void ExecFocusButtonEvent(int32 InFocusIndex);
    
    UFUNCTION(BlueprintCallable)
    void ExecAfterSelectEvent(int32 InChoiceNo);
    
public:
    UFUNCTION(BlueprintCallable)
    void CloseWidgetAndPlayDecisionSE();
    
    UFUNCTION(BlueprintCallable)
    void BackPrevPage();
    
    UFUNCTION(BlueprintCallable)
    void BackPage(int32 InPage);
    
    UFUNCTION(BlueprintCallable)
    void BackMenuPage();
    
    UFUNCTION(BlueprintCallable)
    void BackFirstPage();
    
    UFUNCTION(BlueprintCallable)
    void AddMessageToMenuWithUITextId(const TArray<FName>& InUITextIdList);
    
    UFUNCTION(BlueprintCallable)
    void AddMessageToMenuWithMessageId(const TArray<FName>& InMessageIdList);
    
    UFUNCTION(BlueprintCallable)
    void AddMessageToMenu(const TArray<FText>& InMessageList);
    
    UFUNCTION(BlueprintCallable)
    void AddFocusButtonEvent(FKizokCommonMenuFocusButtonDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    void AddChoiceToTalkWindowWithUITextId(const TArray<FName>& InUITextIdList, FName InUITextId, FKizokCommonMenuAfterSelectDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    void AddChoiceToTalkWindowWithMessageIdAndInsertNum(FName InMessageId, int32 InNum, FKizokCommonMenuAfterSelectDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    void AddChoiceToTalkWindowWithMessageId(FName InMessageId, FKizokCommonMenuAfterSelectDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    void AddChoiceToTalkWindow(const TArray<FText>& InChoiceList, FText InMessage, FKizokCommonMenuAfterSelectDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    void AddChoiceToMenuWithUITextId(const TArray<FName>& InUITextIdList, FKizokCommonMenuAfterSelectDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    void AddChoiceToMenu(const TArray<FText>& InChoiceList, FKizokCommonMenuAfterSelectDelegate InEvent);
    
};

