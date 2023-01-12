#pragma once
#include "CoreMinimal.h"
#include "AsyncLoadDLCAssetCompleteDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "KizokDLCAsyncAssetLoader.generated.h"

class UObject;
class UKizokDLCAsyncAssetLoader;
class UDataTable;

UCLASS(Blueprintable)
class UKizokDLCAsyncAssetLoader : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncLoadDLCAssetComplete Completed;
    
public:
    UKizokDLCAsyncAssetLoader();
private:
    UFUNCTION(BlueprintCallable)
    static void TestDLCThreadSleep();
    
    UFUNCTION(BlueprintCallable)
    void OnTimer();
    
    UFUNCTION(BlueprintCallable)
    void OnAsyncLoadComplete();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKizokDLCAsyncAssetLoader* AsyncLoadDLCAssetFromDataTable(UObject* WorldContextObject, UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKizokDLCAsyncAssetLoader* AsyncLoadDLCAssetFromClass(UObject* WorldContextObject, UClass* classObject);
    
};

