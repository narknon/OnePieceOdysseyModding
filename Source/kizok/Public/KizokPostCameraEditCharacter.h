#pragma once
#include "CoreMinimal.h"
#include "KizokDebugCharacter.h"
#include "KizokPostCameraEditCharacter.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class KIZOK_API AKizokPostCameraEditCharacter : public AKizokDebugCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* SampleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SampleBoxSmallScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SampleBoxBigScale;
    
    AKizokPostCameraEditCharacter();
};

