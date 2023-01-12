#pragma once
#include "CoreMinimal.h"
#include "EKizokWidgetPriority.h"
#include "EKizokFadeType.h"
#include "EKizokFadeFixedPriority.h"
#include "EKizokFadeFixedColor.h"
#include "KizokOnFadeFinishedDelegate.h"
#include "KizokFadeQueue.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "KizokFadeWidget.generated.h"

class UObject;
class UImage;
class UKizokFadeWidget;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokFadeWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SystemFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SystemWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SequenceFadeTime;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokOnFadeFinished OnFadeFinished;
    
public:
    UKizokFadeWidget();
    UFUNCTION(BlueprintCallable)
    void UnsetRemoveFade();
    
    UFUNCTION(BlueprintCallable)
    void SetWhiteFade();
    
    UFUNCTION(BlueprintCallable)
    void SetPriority(EKizokWidgetPriority InPriority);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetFadeImage(UImage* InImage);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetColor(const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable)
    void SetBlackFade();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SequenceStartFadeAtSelectTime(const UObject* WorldContextObject, float InFadeTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SequenceStartFade(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SequenceNewFadeAtColor(const UObject* WorldContextObject, const TArray<FKizokFadeQueue>& InQueueList, EKizokFadeFixedPriority InPriority, const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SequenceNewFade(const UObject* WorldContextObject, const TArray<FKizokFadeQueue>& InQueueList, EKizokFadeFixedPriority InPriority, EKizokFadeFixedColor InFixedColor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SequenceEndFadeAtSelectTimeAndSelectPriority(const UObject* WorldContextObject, EKizokFadeFixedColor InFixedColor, float InFadeTime, EKizokFadeFixedPriority InPriority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SequenceEndFadeAtSelectTime(const UObject* WorldContextObject, EKizokFadeFixedColor InFixedColor, float InFadeTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SequenceEndFadeAtSelectPriority(const UObject* WorldContextObject, EKizokFadeFixedColor InFixedColor, EKizokFadeFixedPriority InFixedPriority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SequenceEndFade(const UObject* WorldContextObject, EKizokFadeFixedColor InFixedColor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKizokFadeWidget* SequenceCreateFadeWidgetAtColor(const UObject* WorldContextObject, EKizokFadeFixedPriority InPriority, const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKizokFadeWidget* SequenceCreateFadeWidget(const UObject* WorldContextObject, EKizokFadeFixedPriority InPriority, EKizokFadeFixedColor InFixedColor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFadeAnimation(const FKizokFadeQueue& InFadeQueue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpen();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotRemoveFade();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable)
    void IndicateFadeAtSetColor(const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSystemWaitTime() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKizokFadeWidget* GetSystemFadeWidget(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSystemFadeTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSequenceFadeTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetColor() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishFade();
    
public:
    UFUNCTION(BlueprintCallable)
    void Enqueue(EKizokFadeType InFadeType, float InFadeTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKizokFadeWidget* CreateFadeWidget(const UObject* WorldContextObject);
    
};

