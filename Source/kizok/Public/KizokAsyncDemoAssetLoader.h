#pragma once
#include "CoreMinimal.h"
#include "AsyncLoadDemoAssetCompleteDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "KizokAsyncDemoAssetLoader.generated.h"

class UObject;
class UKizokAsyncDemoAssetLoader;

UCLASS(Blueprintable)
class KIZOK_API UKizokAsyncDemoAssetLoader : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncLoadDemoAssetComplete Completed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> SoftClassPointer;
    
public:
    UKizokAsyncDemoAssetLoader();
private:
    UFUNCTION(BlueprintCallable)
    void OnTimer();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKizokAsyncDemoAssetLoader* AsyncLoadDemoAsset(UObject* WorldContextObject, const TSoftClassPtr<UObject> softClassPtr);
    
};

