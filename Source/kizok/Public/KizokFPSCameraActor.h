#pragma once
#include "CoreMinimal.h"
#include "KizokCameraActor.h"
#include "KizokFPSCameraActor.generated.h"

class AActor;

UCLASS(Blueprintable)
class KIZOK_API AKizokFPSCameraActor : public AKizokCameraActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* GoalCameraActor;
    
public:
    AKizokFPSCameraActor();
};

