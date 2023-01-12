#pragma once
#include "CoreMinimal.h"
#include "FieldDebugMiddlePointInfo.h"
#include "UObject/Interface.h"
#include "FieldDebugBlueprintBinder.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class KIZOK_API UFieldDebugBlueprintBinder : public UInterface {
    GENERATED_BODY()
};

class KIZOK_API IFieldDebugBlueprintBinder : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartMiddlePoint(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTimeZone(const FString& timezoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMiddlePointForAutoPlay(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEncountEnable(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsBusyMiddlePoint(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName GetCurrentBattleMapID();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<AActor*> GetAllMiddlePointActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FFieldDebugMiddlePointInfo> CreateEpisodeMiddlePointInfo() const;
    
};

