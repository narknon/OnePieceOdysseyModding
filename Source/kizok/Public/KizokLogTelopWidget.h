#pragma once
#include "CoreMinimal.h"
#include "KizokUserWidget.h"
#include "KizokLogTelopWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokLogTelopWidget : public UKizokUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DispTimeRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DispTimeReleaseWhenThereComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DispTimeComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DispTimeCompleteWhenThereRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTime;
    
public:
    UKizokLogTelopWidget();
private:
    UFUNCTION(BlueprintCallable)
    void RemoveLogTelopTargetWhatExec();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReleaseAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompleteAnime();
    
private:
    UFUNCTION(BlueprintCallable)
    void NextAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThereRelease() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThereComplete() const;
    
};

