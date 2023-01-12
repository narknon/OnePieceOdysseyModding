#include "KizokMovieSceneFacialValue.h"

FKizokMovieSceneFacialValue::FKizokMovieSceneFacialValue() {
    this->Mode = EFacialMode::FACIAL_MODE_ID;
    this->FacialID = EFacialId::None;
    this->FacialFrame = 0.00f;
    this->Alpha = 0.00f;
    this->InterpMode = RCIM_Linear;
}

