#include "KizokMovieSceneMessageParameters.h"

FKizokMovieSceneMessageParameters::FKizokMovieSceneMessageParameters() {
    this->Cursor = false;
    this->Voice = NULL;
    this->Delay = 0.00f;
    this->bSyncVoiceRange = false;
    this->bLipSync = false;
    this->bNod = false;
}

