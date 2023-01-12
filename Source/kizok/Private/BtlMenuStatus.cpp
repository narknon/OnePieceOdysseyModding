#include "BtlMenuStatus.h"

FBtlMenuStatus::FBtlMenuStatus() {
    this->CharaID = PLAYER_ID::PLAYER_ID_LUF;
    this->MaxHp = 0;
    this->HP = 0;
    this->MaxSp = 0;
    this->SP = 0;
    this->GroupID = 0;
    this->PartyOrder = 0;
    this->IndexInGroup = 0;
    this->bActed = false;
    this->bGuest = false;
    this->MainAttr = ASP_ATTRIBUTE::NONE;
}

