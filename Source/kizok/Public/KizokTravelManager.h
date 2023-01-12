#pragma once
#include "CoreMinimal.h"
#include "FieldWarpInfo.h"
#include "EKizokTravelMode.h"
#include "UObject/Object.h"
#include "KizokTravelManager.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokTravelManager : public UObject {
    GENERATED_BODY()
public:
    UKizokTravelManager();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetFastTravelMenuEnable(const UObject* WorldContextObject, bool bInEnable);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteWarp(FFieldWarpInfo warpInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedEndSequence();
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedBeginSequence();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetFastTravelMenuEnable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Debug_SetFastTravelEnableAll(const UObject* WorldContextObject, bool bInEnable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BeginTravel(const UObject* WorldContextObject, FName InMapSymbolId, EKizokTravelMode InTravelMode);
    
};

