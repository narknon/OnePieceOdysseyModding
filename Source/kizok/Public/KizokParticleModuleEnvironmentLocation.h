#pragma once
#include "CoreMinimal.h"
#include "Distributions/DistributionVector.h"
#include "Particles/Location/ParticleModuleLocationBase.h"
#include "KizokParticleModuleEnvironmentLocation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UKizokParticleModuleEnvironmentLocation : public UParticleModuleLocationBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistributeOverNPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistributeThreshold;
    
    UKizokParticleModuleEnvironmentLocation();
};

