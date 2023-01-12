#include "KizokGimmickWarpTriggerBase.h"
#include "Components/SceneComponent.h"
#include "Components/ArrowComponent.h"

class AActor;
class AKizokGimmickWarpTriggerBase;

void AKizokGimmickWarpTriggerBase::WarpPlayer(AActor* pPlayer) {
}

void AKizokGimmickWarpTriggerBase::SetWarpPlayerValid(bool bIsValid) {
}

void AKizokGimmickWarpTriggerBase::SetDebugDisp(bool bIsDisp) {
}

AKizokGimmickWarpTriggerBase* AKizokGimmickWarpTriggerBase::GetWarpTargetActor() {
    return NULL;
}

bool AKizokGimmickWarpTriggerBase::GetDebugDisp() {
    return false;
}

void AKizokGimmickWarpTriggerBase::BeginWarp() {
}

AKizokGimmickWarpTriggerBase::AKizokGimmickWarpTriggerBase() {
    this->m_pWarpTargetActor = NULL;
    this->RelativeYaw = 0.00f;
    this->bIsWarpCollisionEnable = true;
    this->bIsCameraReset = false;
    this->bIsDebugDisp = false;
    this->m_pWarpActorTextComponent = NULL;
    this->m_pArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->m_pLocationComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LocationComponent"));
}

