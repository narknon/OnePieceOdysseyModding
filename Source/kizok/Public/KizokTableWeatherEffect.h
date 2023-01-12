#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EKizokEffectWeatherType.h"
#include "KizokTableWeatherEffect.generated.h"

USTRUCT(BlueprintType)
struct FKizokTableWeatherEffect : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKizokEffectWeatherType EffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParticlePath;
    
    KIZOK_API FKizokTableWeatherEffect();
};

