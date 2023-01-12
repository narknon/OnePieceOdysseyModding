#include "KizokGimmickBase.h"
#include "KizokControlByQuestComponent.h"
#include "KizokSEComponent.h"

int32 AKizokGimmickBase::PlaySEWithCuesheet(FName Name) {
    return 0;
}

int32 AKizokGimmickBase::PlayDirectAtomCue(FName Name) {
    return 0;
}

AKizokGimmickBase::AKizokGimmickBase() {
    this->SEComponent = CreateDefaultSubobject<UKizokSEComponent>(TEXT("SE Component"));
    this->ControlByQuestComponent = CreateDefaultSubobject<UKizokControlByQuestComponent>(TEXT("Control By Quest Component"));
}

