#pragma once
#include "CoreMinimal.h"
#include "WeatherParticleData.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FWeatherParticleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleSystemComponent;
    
    KIZOK_API FWeatherParticleData();
};

