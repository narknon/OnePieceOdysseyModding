#pragma once
#include "CoreMinimal.h"
#include "Components/TimelineComponent.h"
#include "KizokTableWindParam.h"
#include "Components/TimelineComponent.h"
#include "GameFramework/Actor.h"
#include "KizokWindUpdater.generated.h"

UCLASS(Blueprintable)
class KIZOK_API AKizokWindUpdater : public AActor {
    GENERATED_BODY()
public:
    AKizokWindUpdater();
    UFUNCTION(BlueprintCallable)
    void Update(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetWindParamModify(FKizokTableWindParam WindParam);
    
    UFUNCTION(BlueprintCallable)
    void SetWindParamDefault(FKizokTableWindParam WindParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ReflectionToEn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ReflectionToCh() const;
    
    UFUNCTION(BlueprintCallable)
    void PostUpdateWindParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool JustChangeWindEnSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChangingWind() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWindYawModify() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWindYawDefault() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWindPitchModify() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWindPitchDefault() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWindEnYawCurrent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWindEnSpeedModify() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWindEnSpeedDefault() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWindEnSpeedCurrent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWindEnPowerModify() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWindEnPowerDefault() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWindEnPowerCurrent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWindEnPitchCurrent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWindChYawCurrent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWindChPowerModify() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWindChPowerDefault() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWindChPowerCurrent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWindChPitchCurrent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWindChangeLerpAlpha() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ETimelineDirection::Type> GetWindChangeDirection() const;
    
    UFUNCTION(BlueprintCallable)
    void BeginWindChangeForward(float Time, FOnTimelineEvent PostUpdateFunc);
    
    UFUNCTION(BlueprintCallable)
    void BeginWindChangeFlip();
    
    UFUNCTION(BlueprintCallable)
    void BeginWindChangeBackward(float Time, FOnTimelineEvent PostUpdateFunc);
    
};

