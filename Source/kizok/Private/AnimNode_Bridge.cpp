#include "AnimNode_Bridge.h"

FAnimNode_Bridge::FAnimNode_Bridge() {
    this->IKAlpha = 0.00f;
    this->bTakeRotationFromEffectorSpace = false;
    this->bMaintainEffectorRelRot = false;
    this->bAllowStretching = false;
    this->StartStretchRatio = 0.00f;
    this->MaxStretchScale = 0.00f;
    this->EffectorLocationSpace = BCS_WorldSpace;
    this->JointTargetLocationSpace = BCS_WorldSpace;
}

