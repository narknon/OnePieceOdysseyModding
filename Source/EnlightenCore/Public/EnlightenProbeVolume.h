#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEnlightenQualityWithDefault -FallbackName=EEnlightenQualityWithDefault
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEnlightenUpdateMethodWithDefault -FallbackName=EEnlightenUpdateMethodWithDefault
#include "EnlightenSystemContainer.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EnlightenProbeVolume.generated.h"

class UEnlightenProbeSetComponent;

UCLASS(Blueprintable, MinimalAPI)
class AEnlightenProbeVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ProbeSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnlightenQualityWithDefault> Quality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnlightenUpdateMethodWithDefault> UpdateMethod;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnlightenProbeSetComponent* ProbeSetComponent;
    
public:
    AEnlightenProbeVolume();
};

