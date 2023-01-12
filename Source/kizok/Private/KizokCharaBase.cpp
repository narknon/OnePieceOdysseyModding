#include "KizokCharaBase.h"

void AKizokCharaBase::PlayLipSync(float Time) {
}

void AKizokCharaBase::AddAttachWeapon(UClass* WeaponBP, const FName& socket, float Scale) {
}

AKizokCharaBase::AKizokCharaBase() {
    this->FootprintsControl = NULL;
    this->FootControlClass = NULL;
    this->BtlTargetCursorRefBoneName = TEXT("Bn_Root");
    this->m_LoadWait = false;
}

