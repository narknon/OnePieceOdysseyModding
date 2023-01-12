#pragma once
#include "CoreMinimal.h"
#include "EKizokEffectWeatherType.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "KizokEffectFunctionLibrary.generated.h"

class USceneComponent;
class UKizokEffectWeatherObject;

UCLASS(Blueprintable)
class KIZOK_API UKizokEffectFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokEffectWeatherObject* EffectWeatherObject;
    
public:
    UKizokEffectFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void WeatherEffectStart();
    
    UFUNCTION(BlueprintCallable)
    static void WeatherEffectOnWithQuad(const EKizokEffectWeatherType& Type, const FQuat& inQuat, USceneComponent* SceneComponent);
    
    UFUNCTION(BlueprintCallable)
    static void WeatherEffectOnAtSaveKeyWithQuad(const FQuat& inQuat, USceneComponent* SceneComponent);
    
    UFUNCTION(BlueprintCallable)
    static void WeatherEffectOnAtSaveKey(USceneComponent* SceneComponent);
    
    UFUNCTION(BlueprintCallable)
    static void WeatherEffectOn(const EKizokEffectWeatherType& Type, USceneComponent* SceneComponent);
    
    UFUNCTION(BlueprintCallable)
    static void WeatherEffectOffAtSaveKey(USceneComponent* SceneComponent);
    
    UFUNCTION(BlueprintCallable)
    static void WeatherEffectOffAll();
    
    UFUNCTION(BlueprintCallable)
    static void WeatherEffectOff(const EKizokEffectWeatherType& Type);
    
    UFUNCTION(BlueprintCallable)
    static void WeatherEffectEnd();
    
    UFUNCTION(BlueprintCallable)
    static void WeatherEffectDestroy();
    
private:
    UFUNCTION(BlueprintCallable)
    static void OnCameraCutChanged(const bool bIsForceHideWeatherEffect, const bool bIsEditQuat, const FQuat& inQuat, USceneComponent* SceneComponent);
    
};

