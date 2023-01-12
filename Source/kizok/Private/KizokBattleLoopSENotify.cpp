#include "KizokBattleLoopSENotify.h"

UKizokBattleLoopSENotify::UKizokBattleLoopSENotify() {
    this->Action = ELoopSENotifyAction::ELSN_APPEAR;
    this->Uid = 0;
    this->LoopSE = NULL;
    this->PostSE = NULL;
}

