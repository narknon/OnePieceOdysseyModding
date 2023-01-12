#include "AilmentMatCurveConstants.h"

FAilmentMatCurveConstants::FAilmentMatCurveConstants() {
    this->ParamType = SMC_PARAM_TYPE::SMC_NONE;
    this->Target = SMT_TARGET_TYPE::SMT_NONE;
    this->Type = AEF_TYPE::AEF_HPRECOVER;
    this->Status = ANOMALIES::STATUS_POISONED;
}

