#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "EnlightenDrawProbeSetComponent.generated.h"

class UEnlightenProbeSet;
class UStaticMesh;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEnlightenDrawProbeSetComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* SphereMesh;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UEnlightenProbeSet> ProbeSet;
    
    UEnlightenDrawProbeSetComponent();
};

