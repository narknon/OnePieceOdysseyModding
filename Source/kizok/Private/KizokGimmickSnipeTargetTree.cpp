#include "KizokGimmickSnipeTargetTree.h"

AKizokGimmickSnipeTargetTree::AKizokGimmickSnipeTargetTree() {
    this->spawnFruitType = EKizokSnipeTargetFruit::SNIPE_TARGET_FRUIT_TYPE_APPLE;
    this->spawnMin = 0;
    this->spawnMax = 0;
    this->respawnSeconds = 0.00f;
    this->actionRange = 0.00f;
    this->actionHeight = 0.00f;
    this->isActionRegist = false;
}

