#include "KizokLvsJobResult.h"

FKizokLvsJobResult::FKizokLvsJobResult() {
    this->JobType = EKizokLvsJobType::LoadLevel;
    this->ResultDesc = EKizokLvsJobResultDesc::Success;
    this->IsSuccess = false;
}

