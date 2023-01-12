#include "KizokAnimNode_Facial.h"

FKizokAnimNode_Facial::FKizokAnimNode_Facial() {
    this->IntervalMin = 0.00f;
    this->IntervalMax = 0.00f;
    this->CloseStart = 0.00f;
    this->CloseEnd = 0.00f;
    this->OpenStart = 0.00f;
    this->OpenEnd = 0.00f;
    this->LipSyncIntervalTime = 0.00f;
    this->LipSyncBlendTime = 0.00f;
    this->LipSyncApplicationRate = 0.00f;
    this->FacialAnim = NULL;
}

