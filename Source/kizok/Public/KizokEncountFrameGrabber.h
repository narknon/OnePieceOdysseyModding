#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KizokEncountFrameGrabber.generated.h"

class UTexture2D;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class KIZOK_API AKizokEncountFrameGrabber : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialInstanceDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> CaptureFrameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CaptureFrameTexture;
    
public:
    AKizokEncountFrameGrabber();
};

