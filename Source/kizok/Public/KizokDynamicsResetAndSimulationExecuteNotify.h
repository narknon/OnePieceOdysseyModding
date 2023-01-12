#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "KizokDynamicsResetAndSimulationExecuteNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class KIZOK_API UKizokDynamicsResetAndSimulationExecuteNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeleportType ResetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ResetTargetPhysicsAssetIndecies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSimulationExecute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SimulateionExecuteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SimulateionExecuteTargetPhysicsAssetIndecies;
    
    UKizokDynamicsResetAndSimulationExecuteNotify();
};

