#include "KizokGimmickQuestTarget.h"
#include "Components/ArrowComponent.h"

AKizokGimmickQuestTarget::AKizokGimmickQuestTarget() {
    this->DummyMarker = CreateDefaultSubobject<UArrowComponent>(TEXT("Marker"));
}

