#pragma once
#include "CoreMinimal.h"
#include "FieldWarpInfo.h"
#include "KizokTravelData.h"
#include "UObject/Object.h"
#include "DbgFieldEventLogger.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UDbgFieldEventLogger : public UObject {
    GENERATED_BODY()
public:
    UDbgFieldEventLogger();
private:
    UFUNCTION(BlueprintCallable)
    void OnSystemReady(FFieldWarpInfo warpInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnStartWarp(FFieldWarpInfo warpInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnStartWaitLevelStreaming();
    
    UFUNCTION(BlueprintCallable)
    void OnStartTravelWarp(FKizokTravelData travelData);
    
    UFUNCTION(BlueprintCallable)
    void OnStartTravelFadeOut(FKizokTravelData travelData);
    
    UFUNCTION(BlueprintCallable)
    void OnStartTravelFadeIn(FKizokTravelData travelData);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerInitialized();
    
    UFUNCTION(BlueprintCallable)
    void OnFieldSystemInitialized();
    
    UFUNCTION(BlueprintCallable)
    void OnEndWarp(FFieldWarpInfo warpInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnEndWaitLevelStreaming();
    
    UFUNCTION(BlueprintCallable)
    void OnEndTravelFadeIn(FKizokTravelData travelData);
    
    UFUNCTION(BlueprintCallable)
    void OnEndTravel(FKizokTravelData travelData);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteStreaming(FFieldWarpInfo warpInfo);
    
};

