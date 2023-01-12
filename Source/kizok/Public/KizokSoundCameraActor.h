#pragma once
#include "CoreMinimal.h"
#include "KizokEventCameraActor.h"
#include "KizokSoundCameraActor.generated.h"

class APlayerController;
class UCameraAnim;

UCLASS(Blueprintable)
class KIZOK_API AKizokSoundCameraActor : public AKizokEventCameraActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAnim* m_CameraAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* m_playerController;
    
public:
    AKizokSoundCameraActor();
};

