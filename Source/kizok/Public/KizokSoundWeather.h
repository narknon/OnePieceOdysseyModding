#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokSoundWeather.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokSoundWeather : public UObject {
    GENERATED_BODY()
public:
    UKizokSoundWeather();
    UFUNCTION(BlueprintCallable)
    void WeatherSoundStart();
    
    UFUNCTION(BlueprintCallable)
    void WeatherSoundPause();
    
    UFUNCTION(BlueprintCallable)
    void StopWeatherSound(float fade_out_time);
    
    UFUNCTION(BlueprintCallable)
    void SetWeatherVolume(float Volume, float Time);
    
    UFUNCTION(BlueprintCallable)
    bool PlayWeatherSound(uint8 weather_id, float fade_in_time, float fade_out_time);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWeatherTime();
    
    UFUNCTION(BlueprintCallable)
    void OnAreaTime();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsPlayWeatherSound();
    
    UFUNCTION(BlueprintCallable)
    void EnableWeatherSoundChange();
    
    UFUNCTION(BlueprintCallable)
    void DisableWeatherSoundChange();
    
};

