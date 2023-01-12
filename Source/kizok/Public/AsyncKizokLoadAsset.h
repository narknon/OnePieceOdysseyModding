#pragma once
#include "CoreMinimal.h"
#include "AsyncKizokAssetLoadCompleteDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncKizokLoadAsset.generated.h"

class UObject;
class UAsyncKizokLoadAsset;

UCLASS(Blueprintable)
class KIZOK_API UAsyncKizokLoadAsset : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncKizokAssetLoadComplete Completed;
    
public:
    UAsyncKizokLoadAsset();
private:
    UFUNCTION(BlueprintCallable)
    void OnAsyncLoadComplete();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAsyncKizokLoadAsset* AsyncKizokLoadAsset(UObject* WorldContextObject, TSoftObjectPtr<UObject> Asset);
    
};

