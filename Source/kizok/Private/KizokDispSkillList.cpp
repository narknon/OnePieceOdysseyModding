#include "KizokDispSkillList.h"

FKizokDispSkillList::FKizokDispSkillList() {
    this->playerID = PLAYER_ID::PLAYER_ID_LUF;
    this->IconType = ESkillListDispIcon::Hidden;
    this->DispType = ESkillListDispType::NotRelease;
    this->bBattleMenu = false;
    this->CostSP = 0;
    this->PlayerSP = 0;
    this->AttackValue = 0;
    this->bDispWeak = false;
    this->bConsumputionTPMitigation = false;
}

