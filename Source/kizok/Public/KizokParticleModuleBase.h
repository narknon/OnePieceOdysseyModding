#pragma once
#include "CoreMinimal.h"
#include "Particles/ParticleModule.h"
#include "KizokParticleModuleBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UKizokParticleModuleBase : public UParticleModule {
    GENERATED_BODY()
public:
    UKizokParticleModuleBase();
};

