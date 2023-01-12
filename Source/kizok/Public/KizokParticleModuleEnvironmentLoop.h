#pragma once
#include "CoreMinimal.h"
#include "Distributions/DistributionVector.h"
#include "KizokParticleModuleBase.h"
#include "KizokParticleModuleEnvironmentLoop.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UKizokParticleModuleEnvironmentLoop : public UKizokParticleModuleBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector LowerLeftCorner;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector UpperRightCorner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsTraceParent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsLoopX: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsLoopY: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsLoopZ: 1;
    
    UKizokParticleModuleEnvironmentLoop();
};

