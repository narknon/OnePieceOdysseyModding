#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KizokSkillCameraEditor.generated.h"

UCLASS(Blueprintable)
class KIZOK_API AKizokSkillCameraEditor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableSkillCameraEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsShowPlaceHolderMesh;
    
public:
    AKizokSkillCameraEditor();
};

