#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEnlightenQuality -FallbackName=EEnlightenQuality
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEnlightenQualityWithDefault -FallbackName=EEnlightenQualityWithDefault
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEnlightenUpdateMethod -FallbackName=EEnlightenUpdateMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEnlightenUpdateMethodWithDefault -FallbackName=EEnlightenUpdateMethodWithDefault
#include "GameFramework/Info.h"
#include "EnlightenSystemContainer.generated.h"

class UEnlightenSystemContainerComponent;
class UEnlightenProbeSetContainerComponent;
class UEnlightenPrecomputeData;

UENUM()
enum class EEnlightenQuality : uint8
{
    /** Low quality, fast precomputation, low quality lighting. */
    ENLQ_Low,
    /** Medium quality, medium precomputation time, medium quality lighting. */
    ENLQ_Medium,
    /** High quality, slow precomputation, high quality lighting. */
    ENLQ_High,
    /** Very high quality, very slow precomputation, very high quality lighting. */
    ENLQ_VeryHigh,
    /** Custom quality, custom precomputation time, custom quality lighting. */
    ENLQ_Custom,
};

UENUM()
enum class EEnlightenUpdateMethod : uint8
{
    EUM_Dynamic,
};

UENUM()
enum class EEnlightenQualityWithDefault : uint8
{
    EQWD_UseLevelDefault,
    EQWD_Low,
    EQWD_Medium,
    EQWD_High,
};

UENUM()
enum class EEnlightenUpdateMethodWithDefault : uint8
{
    EUMD_UseLevelDefault,
};

UCLASS(Blueprintable, MinimalAPI, NotPlaceable)
class AEnlightenSystemContainer : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnlightenQuality> DefaultQuality;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnlightenUpdateMethod> DefaultUpdateMethod;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnlightenQualityWithDefault> BSPQuality;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnlightenUpdateMethodWithDefault> BSPUpdateMethod;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnlightenQualityWithDefault> LandscapeQuality;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnlightenUpdateMethodWithDefault> LandscapeUpdateMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableEnlighten: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPrecomputedDisabled: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowGpuInputShadowing: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnlightenPrecomputeData* PrecomputeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnlightenSystemContainerComponent* SystemContainerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnlightenProbeSetContainerComponent* ProbeSetContainerComponent;
    
public:
    AEnlightenSystemContainer();
};

