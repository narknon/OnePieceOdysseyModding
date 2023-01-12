#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EnlightenProbeSet.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UEnlightenProbeSet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> RadiosityDependencies;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableProbeInterpolationVisibility: 1;
    
public:
    UEnlightenProbeSet();
};

