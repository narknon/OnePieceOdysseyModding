#include "BtlCharaIcon.h"

FBtlCharaIcon::FBtlCharaIcon() {
    this->GroupID = 0;
    this->OrderInGroup = 0;
    this->bUseCircleTexture = false;
    this->bUnFightable = false;
    this->bPlayer = false;
    this->bGuest = false;
    this->bActed = false;
    this->bStrongEnemy = false;
    this->bHaveTreasure = false;
    this->bReinforcement = false;
    this->EscapeTurn = 0;
    this->BasePhysicalCompatibility = EPhysicalComptibility::None;
    this->bIsSituationTarget = false;
    this->bVisibleWeakMark = false;
    this->bVisibleResistMark = false;
}

