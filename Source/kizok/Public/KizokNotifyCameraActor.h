#pragma once
#include "CoreMinimal.h"
#include "KizokCameraActor.h"
#include "KizokNotifyCameraActor.generated.h"

class AActor;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class KIZOK_API AKizokNotifyCameraActor : public AKizokCameraActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_pPrevCameraActor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_pOwner;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USkeletalMeshComponent> m_pMeshComp;
    
public:
    AKizokNotifyCameraActor();
};

