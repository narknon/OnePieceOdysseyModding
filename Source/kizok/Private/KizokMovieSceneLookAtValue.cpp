#include "KizokMovieSceneLookAtValue.h"

FKizokMovieSceneLookAtValue::FKizokMovieSceneLookAtValue() {
    this->Mode = ELookAtMode::LOOK_AT_MODE_ACTOR;
    this->bNeckOnly = false;
    this->InterpMode = RCIM_Linear;
}

