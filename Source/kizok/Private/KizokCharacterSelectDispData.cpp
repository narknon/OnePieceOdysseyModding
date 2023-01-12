#include "KizokCharacterSelectDispData.h"

FKizokCharacterSelectDispData::FKizokCharacterSelectDispData() {
    this->Level = 0;
    this->HP = 0;
    this->MaxHp = 0;
    this->SP = 0;
    this->MaxSp = 0;
    this->Exp = 0;
    this->NextExp = 0;
    this->playerID = PLAYER_ID::PLAYER_ID_LUF;
    this->Attribute = ASP_ATTRIBUTE::NONE;
    this->bUFrozen = false;
}

