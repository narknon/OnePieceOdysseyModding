#pragma once
#include "CoreMinimal.h"
#include "BeginQuestTargetDelegate.h"
#include "KizokGimmickInteractBase.h"
#include "KizokGimmickQuestTarget.generated.h"

class UArrowComponent;

UCLASS(Blueprintable)
class AKizokGimmickQuestTarget : public AKizokGimmickInteractBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* DummyMarker;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBeginQuestTarget BeginQuestTarget;
    
public:
    AKizokGimmickQuestTarget();
};

