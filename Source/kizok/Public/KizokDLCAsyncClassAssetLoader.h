#pragma once
#include "CoreMinimal.h"
#include "AsyncLoadDLCClassAssetCompleteDelegate.h"
#include "KizokDLCAsyncLoaderActionBase.h"
#include "KizokDLCAsyncClassAssetLoader.generated.h"

class UObject;
class UKizokDLCAsyncClassAssetLoader;

UCLASS(Blueprintable)
class UKizokDLCAsyncClassAssetLoader : public UKizokDLCAsyncLoaderActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncLoadDLCClassAssetComplete Completed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* classObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* LoadClassObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> ClassPtr;
    
public:
    UKizokDLCAsyncClassAssetLoader();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKizokDLCAsyncClassAssetLoader* AsyncLoadDLCClassFromSoftClassPtr(UObject* WorldContextObject, TSoftClassPtr<UObject> NewClassPtr);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKizokDLCAsyncClassAssetLoader* AsyncLoadDLCClassFromClass(UObject* WorldContextObject, UClass* NewClassObject);
    
};

