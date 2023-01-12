#include "KizokBattleCraneRig.h"

AKizokBattleCraneRig::AKizokBattleCraneRig() : ACameraRig_Crane(FObjectInitializer::Get()) {
    this->ErrorTolerance = 0.05f;
    this->ProgressLimit = 50;
    this->DeccelarationDevider = 0.90f;
    this->LEasingCurve4EnemyFocus = NULL;
    this->LEasingCurve = NULL;
    this->currentType = ECRANEPARAMTYPE::REGULAR;
    this->GroupType = ECRANEPARAMSW::SAMEGROUP;
    this->RootID = 0;
    this->CurrentOccupyType = EOCCUPYTYPE::OC_Unknown;
    this->DestYaw = 0.00f;
    this->DestCamPitch = 0.00f;
    this->DispTargetSphere = false;
    this->CurrentFoculLength = 0.00f;
    this->CurrentAperture = 0.00f;
    this->Distance = 0.00f;
    this->IsError = false;
    this->centerPitch = 0.00f;
    this->ArmLengthBase = 0.00f;
    this->ArmLengthCurveRef = NULL;
    this->REasing = false;
    this->LEasingCurveRef = NULL;
    this->LEasing = false;
    this->ProgressYawCurve = false;
    this->YawCurveRef = NULL;
    this->ProgressFallen = false;
    this->ElapseTime = 0.00f;
    this->FoculCurveRefForFallen = NULL;
    this->ProgressCnt = 0;
    this->lastAngleDiffInProgress = 0.00f;
    this->CamOfsY = -70.00f;
    this->CamOfsZ = 70.00f;
    this->HeightOffset = 300.00f;
    this->RollLock = false;
    this->cineCam = NULL;
    this->RefTransformComponent = NULL;
    this->RefCraneYawControl = NULL;
    this->RefCranePitchControl = NULL;
    this->RefCraneCameraMount = NULL;
    this->LastFoculLength = 0.00f;
    this->LastAperture = 0.00f;
    this->DestFoculLength = 0.00f;
    this->DestAperture = 0.00f;
    this->DestArmLength = 0.00f;
    this->DestCranePitch = 0.00f;
    this->LEasingElapsed = 0.00f;
    this->PitchMaxWhenFallen = 0.00f;
    this->PitchMinWhenFallen = 0.00f;
    this->FocusTargetWhenFallen = NULL;
}

