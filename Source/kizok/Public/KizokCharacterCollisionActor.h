#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KizokCharacterCollisionActor.generated.h"

class UCapsuleComponent;

UCLASS(Blueprintable)
class KIZOK_API AKizokCharacterCollisionActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* m_pCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLookAtTargetEnable;
    
    AKizokCharacterCollisionActor();
};

