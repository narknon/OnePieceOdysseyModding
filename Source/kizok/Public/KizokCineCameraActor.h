#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "KizokCineCameraActor.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class KIZOK_API AKizokCineCameraActor : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* CameraAnimation;
    
    AKizokCineCameraActor();
};

