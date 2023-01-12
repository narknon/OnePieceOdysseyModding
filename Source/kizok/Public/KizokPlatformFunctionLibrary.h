#pragma once
#include "CoreMinimal.h"
#include "PlatformStoreCompleteDelegate.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "KizokPlatformFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class KIZOK_API UKizokPlatformFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKizokPlatformFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void ShowProductionVersionStore(const FPlatformStoreComplete& OnCompleted);
    
    UFUNCTION(BlueprintCallable)
    static void ShowDxProductionVersionStore(const FPlatformStoreComplete& OnCompleted);
    
    UFUNCTION(BlueprintCallable)
    static void ShowDLCStore(const FPlatformStoreComplete& OnCompleted);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReloadAssetWhenPlayGoDownloadCompleted(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMainChunkCompleted();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMainChunkProgress();
    
};

