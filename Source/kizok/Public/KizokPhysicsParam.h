#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KizokPhysicsParam.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokPhysicsParam : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimulationExecuteCount;
    
    UKizokPhysicsParam();
};

