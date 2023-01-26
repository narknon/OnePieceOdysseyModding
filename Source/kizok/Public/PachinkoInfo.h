#pragma once
#include "CoreMinimal.h"
#include "Enlighten/EnlightenInstanceId.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EnlightenInstanceId -FallbackName=EnlightenInstanceId
#include "PachinkoInfo.generated.h"

class USphereComponent;
class AKizokEffectParticle2;


USTRUCT(BlueprintType)
struct FPachinkoInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* m_Sphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnlightenInstanceId m_InsID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKizokEffectParticle2* m_pEffect;
    
    KIZOK_API FPachinkoInfo();
};

