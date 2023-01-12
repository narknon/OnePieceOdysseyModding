#pragma once
#include "CoreMinimal.h"
#include "EKizokLoadingMode.h"
#include "KizokOnDestroyWidgetEventDelegate.h"
#include "Blueprint/UserWidget.h"
#include "KizokLoadingWidget.generated.h"

class UUMGSequencePlayer;
class UWidgetAnimation;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokLoadingWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokOnDestroyWidgetEvent OnDestroy;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTimeToBeginShowTips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTimeToChangeShowTips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TipsPriorityRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TipsPriorityProbability;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TipsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TipsStrTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UUMGSequencePlayer*> LoadingWidgetAnimationList;
    
public:
    UKizokLoadingWidget();
    UFUNCTION(BlueprintCallable)
    void RegisterWidgetAnimationFromWidget(UUserWidget* Widget, UWidgetAnimation* TipsInAnimation, UWidgetAnimation* TipsOutAnimation);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectTips(const FText& InName, const FText& InInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectProgressParams(float InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenLoadingWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndLoading(bool bInInstant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloseLoadingWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeTips();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginTips();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginLoading(bool bInInstant);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowTips() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndLoading() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKizokLoadingMode GetLoadingMode() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishEndLoadingAnime();
    
    UFUNCTION(BlueprintCallable)
    void FinishBeginLoadingAnime();
    
public:
    UFUNCTION(BlueprintCallable)
    void DestroyLoadingWidget();
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangeTips();
    
};

