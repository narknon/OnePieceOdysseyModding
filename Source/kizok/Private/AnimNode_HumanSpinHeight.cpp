#include "AnimNode_HumanSpinHeight.h"

FAnimNode_HumanSpinHeight::FAnimNode_HumanSpinHeight() {
    this->LimitUpFoot = 0.00f;
    this->LimitDownFoot = 0.00f;
    this->UpLimitRange = 0.00f;
    this->DownLimitRange = 0.00f;
    this->HeightOffset = 0.00f;
    this->LerpSpeed = 0.00f;
    this->LerpSpeedMin = 0.00f;
    this->LerpSpeedIntervalMove = 0.00f;
    this->RootBlendLerpSpeed = 0.00f;
    this->ComplexTraceMaxSpeed = 0.00f;
    this->ComplexTraceZRange = 0.00f;
    this->RightFootFloorLenZ = 0.00f;
    this->LeftFootFloorLenZ = 0.00f;
    this->bMovingCurrentPositionInterpolate = false;
}

