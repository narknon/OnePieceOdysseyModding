#include "BtlMenuGroup.h"

FBtlMenuGroup::FBtlMenuGroup() {
    this->IconType = EBtlMenuIcon::BMI_Player;
    this->GroupID = 0;
    this->OrderInGroup = 0;
    this->bUnFightable = false;
    this->bVisibleWeakMark = false;
    this->bVisibleResistMark = false;
    this->bTargetTypeGroupOrAll = false;
    this->CharaBase = NULL;
    this->bStrong = false;
    this->bValidTextColor = false;
    this->bHaveTreasure = false;
    this->MainAttr = ASP_ATTRIBUTE::NONE;
    this->bVisiblePhysicalWeakMark = false;
    this->bVisiblePhysicalResistMark = false;
    this->BasePhysicalCompatibility = EPhysicalComptibility::None;
    this->bIsSituationTarget = false;
}

