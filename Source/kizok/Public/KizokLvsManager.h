#pragma once
#include "CoreMinimal.h"
#include "EKizokLvsJobType.h"
#include "KizokLvsCompleteDelegate.h"
#include "KizokLvsJobResultDynamicMulticastDelegateDelegate.h"
#include "UObject/Object.h"
#include "KizokLvsManager.generated.h"

class UWorld;

UCLASS(Blueprintable)
class KIZOK_API UKizokLvsManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* CurrentWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* CurrentWorldContextObject;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokLvsJobResultDynamicMulticastDelegate OnStartJob;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokLvsJobResultDynamicMulticastDelegate OnEndJob;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokLvsJobResultDynamicMulticastDelegate OnEndLoadLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokLvsJobResultDynamicMulticastDelegate OnEndVisibleLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokLvsJobResultDynamicMulticastDelegate OnEndUnoadLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokLvsJobResultDynamicMulticastDelegate OnEndHiddenLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokLvsComplete OnComplete;
    
public:
    UKizokLvsManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WillBeVisibled(const FName& LevelSetName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WillBeLoaded(const FName& LevelSetName) const;
    
    UFUNCTION(BlueprintCallable)
    void SetLoadingProgressRateMaxToOne();
    
    UFUNCTION(BlueprintCallable)
    void SetEnable(const bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void RequestSetVisible(const FName& LevelSetName, const bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void RequestLevelUnload(const FName& LevelSetName);
    
    UFUNCTION(BlueprintCallable)
    void RequestLevelLoad(const FName& LevelSetName);
    
    UFUNCTION(BlueprintCallable)
    void Request(const FName& LevelSetName, EKizokLvsJobType JobType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGroundLevelVisibled(const FName& LevelSetName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistGroundLevel(const FName& LevelSetName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBusy() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceRequestSetVisible(const FName& LevelSetName, const bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void ForceRequestLevelUnload(const FName& LevelSetName);
    
    UFUNCTION(BlueprintCallable)
    void ForceRequestLevelLoad(const FName& LevelSetName);
    
    UFUNCTION(BlueprintCallable)
    void ForceRequest(const FName& LevelSetName, EKizokLvsJobType JobType);
    
};

