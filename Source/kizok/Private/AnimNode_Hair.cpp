#include "AnimNode_Hair.h"

FAnimNode_Hair::FAnimNode_Hair() {
    this->bEnable = false;
    this->bIgnoreAccel = false;
    this->AnimationDeltaTime = 0.00f;
    this->bUseHeadName = false;
    this->HairAngleMax = 0.00f;
    this->SphereLimitBoneNumber = 0;
    this->SphereLimitAngle = 0.00f;
    this->HairCurve = 0.00f;
    this->HairRandomAmount = 0.00f;
    this->HairPowerConst = 0.00f;
    this->ObjectAngleMax = 0.00f;
    this->ObjectCurve = 0.00f;
    this->ObjectRandomAmount = 0.00f;
    this->ObjectPowerConst = 0.00f;
    this->HorizentalLimitBoneNumber = 0;
    this->HorizentalAngleMin = 0.00f;
    this->HorizentalAngleMax = 0.00f;
    this->WindConst = 0.00f;
    this->ResistConst = 0.00f;
    this->SpringConst = 0.00f;
    this->AccelConst = 0.00f;
    this->MinWaveNumber = 0.00f;
    this->MaxWaveNumber = 0.00f;
    this->MinWaveSpeed = 0.00f;
    this->MaxWaveSpeed = 0.00f;
    this->MinAmp = 0.00f;
    this->MaxAmp = 0.00f;
    this->TestObjectType = 0;
    this->bUseTestWind = false;
    this->bDebug1 = false;
    this->DebugParam = 0.00f;
    this->m_windControl = NULL;
}

