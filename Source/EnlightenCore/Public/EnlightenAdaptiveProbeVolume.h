#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEnlightenQualityWithDefault -FallbackName=EEnlightenQualityWithDefault
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEnlightenUpdateMethodWithDefault -FallbackName=EEnlightenUpdateMethodWithDefault
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEnlightenAdaptiveProbeResolutionWithDefault -FallbackName=EEnlightenAdaptiveProbeResolutionWithDefault
#include "EnlightenSystemContainer.h"
#include "GameFramework/Volume.h"
#include "EnlightenAdaptiveProbeVolume.generated.h"

UENUM()
enum class EEnlightenAdaptiveProbeResolutionWithDefault : uint8
{
    EPRD_UseLevelDefault,
    EPRD__Low UMETA(DisplayName="Low"),
    EPRD__Medium UMETA(DisplayName="Medium"),
    EPRD__High UMETA(DisplayName="High"),
    EPRD__MAX UMETA(Hidden),
};

UCLASS(Blueprintable, MinimalAPI)
class AEnlightenAdaptiveProbeVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnlightenAdaptiveProbeResolutionWithDefault> Resolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResolutionBias;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnlightenQualityWithDefault> Quality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnlightenUpdateMethodWithDefault> UpdateMethod;
    
    AEnlightenAdaptiveProbeVolume();
};

