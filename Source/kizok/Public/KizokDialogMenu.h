#pragma once
#include "CoreMinimal.h"
#include "KizokOnDialogChangeDelegate.h"
#include "KizokOnDialogCancelDelegate.h"
#include "KizokOnDialogDecisionDelegate.h"
#include "KizokUserWidget.h"
#include "KizokDialogMenu.generated.h"

class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokDialogMenu : public UKizokUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokOnDialogDecision OnDialogDecision;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokOnDialogCancel OnDialogCancel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokOnDialogChange OnDialogChange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SelectTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SelectButtonGuideID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ContinuousInputProtectionTime;
    
public:
    UKizokDialogMenu();
    UFUNCTION(BlueprintCallable)
    void SelectDialogToTextId(const FName InTextId, bool bInContinuousInputProtectionEnable);
    
    UFUNCTION(BlueprintCallable)
    void SelectDialogToMessage(const FText& InMessage, bool bInContinuousInputProtectionEnable);
    
    UFUNCTION(BlueprintCallable)
    void SelectDialog(uint8 InUITextIndex, bool bInContinuousInputProtectionEnable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterButtonGuideWidget(UHorizontalBox* InHorizontalBox);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVisibleButtonGuide(bool bInVisible);
    
    UFUNCTION(BlueprintCallable)
    void OnIsPlayAnimationFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeDialogMessageTextIndex(uint8 InUITextIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeDialogMessage(const FText& InMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeDialog();
    
    UFUNCTION(BlueprintCallable)
    void OffIsPlayAnimationFlag();
    
public:
    UFUNCTION(BlueprintCallable)
    void MessageOnlyDialogToMessage(const FText& InMessage);
    
    UFUNCTION(BlueprintCallable)
    void MessageOnlyDialog(uint8 InUITextIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsContinuousInputProtectionEnable() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void DecisionOnlyDialogToTextId(const FName& InTextId, bool bInContinuousInputProtectionEnable);
    
    UFUNCTION(BlueprintCallable)
    void DecisionOnlyDialogToMessage(const FText& InMessage, bool bInContinuousInputProtectionEnable);
    
    UFUNCTION(BlueprintCallable)
    void DecisionOnlyDialog(uint8 InUITextIndex, bool bInContinuousInputProtectionEnable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeDialogEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeDialog();
    
};

