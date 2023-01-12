#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBase.h"
#include "KizokGimmickEventCameraTriggerBase.generated.h"

class UKizokFindObjectComponentBase;
class UTextRenderComponent;

UCLASS(Blueprintable)
class KIZOK_API AKizokGimmickEventCameraTriggerBase : public ATriggerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CameraID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* EventCameraActorTextComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDebugDisp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSearchCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokFindObjectComponentBase* FindObjectComponent;
    
    AKizokGimmickEventCameraTriggerBase();
};

