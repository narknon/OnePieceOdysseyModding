#include "KizokPlayerAnimInstance.h"

bool UKizokPlayerAnimInstance::NativeTrans_Fld_WalkToWaitConduit() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_WalkToRunConduit() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_WalkToRocket1In() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_WalkToJump1In() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_WaitToWalkConduit() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_WaitToTreasureConduit() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_WaitToRunConduit() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_WaitToRocket1In() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_WaitToPacIn() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_WaitToJump1In() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_WaitToDoorSingleBConduit() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_WaitToDoorSingleAConduit() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_WaitToDoorDoubleConduit() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_RunToWalkConduit() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_RunToWaitConduit() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_RunToRocket1In() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_RunToJump2In() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_Rocket1ShootToRocket1HandGrab() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_Rocket1MoveToRocket1Ed() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_Rocket1InToWait() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_Rocket1InToRocket1Shoot() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_Rocket1HandGrabToRocket1Move() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_Rocket1EdToWalk() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_Rocket1EdToWait() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_Rocket1EdToRun() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_PacInToAimWait() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_PacEndToWait() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_PacAimWaitToEnd() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_PacAimWaitToAimTrigger() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_PacAimTriggerToAimShoot() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_PacAimTriggerInToLoop() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_PacAimShootToAimWait() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_MoveToFallConduit() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_LandedToWait() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_JumpLpToJumpEd() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_JumpEdToWalk() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_JumpEdToWait() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_JumpEdToRun() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_Jump2InToJumpLp() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_Jump1InToJumpLp() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_FallToWaitConduit() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_FallToLandedConduit() {
    return false;
}

bool UKizokPlayerAnimInstance::NativeTrans_Fld_ActToWaitConduit() {
    return false;
}

float UKizokPlayerAnimInstance::GetPacAimYaw() {
    return 0.0f;
}

float UKizokPlayerAnimInstance::GetPacAimPitch() {
    return 0.0f;
}

EPlayerFieldActionType UKizokPlayerAnimInstance::GetFieldActionType() {
    return EPlayerFieldActionType::None;
}

UKizokPlayerAnimInstance::UKizokPlayerAnimInstance() {
    this->OwnerCharacter = NULL;
    this->FieldAnimationType = EPlayerAnimationType::Wait;
    this->LandingDelta = 0.20f;
    this->bAnimePlaying = false;
    this->fladActPacAimPitch = 0.00f;
    this->fladActPacAimYaw = 0.00f;
}

