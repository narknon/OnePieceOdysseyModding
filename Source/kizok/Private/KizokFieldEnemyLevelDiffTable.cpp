#include "KizokFieldEnemyLevelDiffTable.h"

FKizokFieldEnemyLevelDiffTable::FKizokFieldEnemyLevelDiffTable() {
    this->PartyType = FIELD_ENEMY_PARTY_TYPE::NORMAL;
    this->LevelDiff_M50toM41 = 0;
    this->LevelDiff_M40toM31 = 0;
    this->LevelDiff_M30toM21 = 0;
    this->LevelDiff_M20toM11 = 0;
    this->LevelDiff_M10toP10 = 0;
    this->LevelDiff_P11toP20 = 0;
    this->LevelDiff_P21toP30 = 0;
    this->LevelDiff_P31toP40 = 0;
    this->LevelDiff_P41toP50 = 0;
}

