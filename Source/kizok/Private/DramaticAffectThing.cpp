#include "DramaticAffectThing.h"

FDramaticAffectThing::FDramaticAffectThing() {
    this->Type = EDRAMATICAFFECTTYPE::TYPENONE;
    this->Target = 0;
    this->Ribbon = ESITUATIONRIBBON::RIBBON_NONE;
    this->ExclamationUID = 0;
    this->ExclamationType = EEXCLAMATION::EXC_NONE;
    this->bAffectPlayerBonus = false;
    this->VisibleTimePerSystemMsg = 0.00f;
    this->GroupIndexOfAffect = 0;
    this->TargetOfAffect = NULL;
    this->GroupIndexOfExclamation = 0;
    this->TargetOfExclamation = NULL;
}

