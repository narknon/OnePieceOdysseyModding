#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "KizokDebugCharacter.generated.h"

class UCapsuleComponent;
class UKizokSkeletalMeshComponent;

UCLASS(Blueprintable)
class KIZOK_API AKizokDebugCharacter : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokSkeletalMeshComponent* m_pMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* m_pCapsule;
    
    AKizokDebugCharacter();
};

