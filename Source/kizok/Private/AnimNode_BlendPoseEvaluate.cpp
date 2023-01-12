#include "AnimNode_BlendPoseEvaluate.h"

FAnimNode_BlendPoseEvaluate::FAnimNode_BlendPoseEvaluate() {
    this->DataTable = NULL;
    this->KlExpCurve = 0.00f;
    this->bMeshSpaceRotationBlend = false;
    this->CurveBlendOption = ECurveBlendOption::Override;
    this->bHasRelevantPoses = false;
}

