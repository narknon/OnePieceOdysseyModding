#pragma once
#include "CoreMinimal.h"
#include "EKizokEffectWeatherType.h"
#include "WeatherParticleData.h"
#include "UObject/Object.h"
#include "KizokEffectWeatherObject.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class KIZOK_API UKizokEffectWeatherObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> TargetSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKizokEffectWeatherType, FWeatherParticleData> ObjectMap;
    
public:
    UKizokEffectWeatherObject();
};

