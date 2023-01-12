#pragma once
#include "CoreMinimal.h"
#include "AsyncKizokClassAssetLoadCompleteDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncKizokLoadClassAsset.generated.h"

class UObject;
class UAsyncKizokLoadClassAsset;

UCLASS(Blueprintable)
class KIZOK_API UAsyncKizokLoadClassAsset : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncKizokClassAssetLoadComplete Completed;
    
public:
    UAsyncKizokLoadClassAsset();
private:
    UFUNCTION(BlueprintCallable)
    void OnAsyncLoadComplete();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAsyncKizokLoadClassAsset* AsyncKizokLoadClassAsset(UObject* WorldContextObject, TSoftClassPtr<UObject> AssetClass);
    
};

