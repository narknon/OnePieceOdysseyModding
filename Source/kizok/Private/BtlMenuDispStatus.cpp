#include "BtlMenuDispStatus.h"

FBtlMenuDispStatus::FBtlMenuDispStatus() {
    this->playerID = PLAYER_ID::PLAYER_ID_LUF;
    this->Level = 0;
    this->MaxHp = 0;
    this->HP = 0;
    this->MaxSp = 0;
    this->SP = 0;
    this->GroupID = 0;
    this->ResortueTurn = 0;
    this->bEndAction = false;
    this->bUFrozen = false;
    this->MainAttr = ASP_ATTRIBUTE::NONE;
}

