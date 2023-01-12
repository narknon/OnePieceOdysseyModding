#pragma once
#include "CoreMinimal.h"
#include "KizokUserWidget.h"
#include "KizokTitleLogoMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokTitleLogoMenu : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDelayTime;
    
public:
    UKizokTitleLogoMenu();
    UFUNCTION(BlueprintCallable)
    void StopTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartTimer();
    
    UFUNCTION(BlueprintCallable)
    void SetIsOpenedFromMovie(bool bInIsOpenedFromMovie);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetFinishFadeInAnimation(bool bInFinishFadeInAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSkip();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectDisplay(bool bWaitingTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpenedFromMovie() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpenDLCDialog() const;
    
    UFUNCTION(BlueprintCallable)
    void CallOnTitleLogoFinishIn();
    
    UFUNCTION(BlueprintCallable)
    void CallBindEvent();
    
};

