#include "KizokGimmickEventCameraTriggerBase.h"
#include "KizokFindObjectComponentBase.h"

AKizokGimmickEventCameraTriggerBase::AKizokGimmickEventCameraTriggerBase() {
    this->EventCameraActorTextComponent = NULL;
    this->bIsDebugDisp = false;
    this->bSearchCamera = false;
    this->FindObjectComponent = CreateDefaultSubobject<UKizokFindObjectComponentBase>(TEXT("FineObjectComponent"));
}

