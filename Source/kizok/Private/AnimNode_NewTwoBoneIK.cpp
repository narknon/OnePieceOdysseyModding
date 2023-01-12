#include "AnimNode_NewTwoBoneIK.h"

FAnimNode_NewTwoBoneIK::FAnimNode_NewTwoBoneIK() {
    this->IKAlpha = 0.00f;
    this->bTakeRotationFromEffectorSpace = false;
    this->bMaintainEffectorRelRot = false;
    this->bAllowStretching = false;
    this->StartStretchRatio = 0.00f;
    this->MaxStretchScale = 0.00f;
    this->EffectorLocationSpace = BCS_WorldSpace;
    this->JointTargetLocationSpace = BCS_WorldSpace;
    this->bEnableIK = false;
    this->bForceLanding = false;
    this->bUpGround = false;
    this->LandingRate = 0.00f;
    this->LandingRateHigh = 0.00f;
    this->bKeepLegAngle = false;
    this->OpenAngleHorizentalMax = 0.00f;
    this->OpenAngleVerticalMax = 0.00f;
    this->ModelUpLimit = 0.00f;
    this->ModelDownLimit = 0.00f;
    this->bFootFitGround = false;
    this->FootAngleVerticalUpMax = 0.00f;
    this->FootAngleVerticalDownMax = 0.00f;
    this->FootAngleHorizentalInnerMax = 0.00f;
    this->FootAngleHorizentalOuterMax = 0.00f;
    this->FootOffset = 0.00f;
    this->TriangleCalcuDistance = 0.00f;
}

