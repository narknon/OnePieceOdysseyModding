#include "KizokGimmickNPCMoveMarker.h"

class AKizokNpcBase;

AKizokNpcBase* AKizokGimmickNPCMoveMarker::GetNPC() {
    return NULL;
}

void AKizokGimmickNPCMoveMarker::ClearNPC() {
}

AKizokGimmickNPCMoveMarker::AKizokGimmickNPCMoveMarker() {
    this->MoveType = ENPCMoveType::ROUND_TRIP;
    this->npc = NULL;
}

