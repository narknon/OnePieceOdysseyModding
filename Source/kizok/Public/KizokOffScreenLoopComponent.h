#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KizokOffScreenLoopComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokOffScreenLoopComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Tolerance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOffScreenActor;
    
public:
    UKizokOffScreenLoopComponent();
};

