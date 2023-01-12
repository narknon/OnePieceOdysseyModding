#include "KizokFieldPlayerManager.h"

class APawn;

void AKizokFieldPlayerManager::SetEnableDitherPlayer(bool bEnable, float Opacity) {
}

void AKizokFieldPlayerManager::SetEnableDitherFade(bool bEnable) {
}

void AKizokFieldPlayerManager::SetDisableFieldMotionBlur() {
}

void AKizokFieldPlayerManager::SetCameraArmRotationSpeedRot(FRotator rot, FRotator Speed) {
}

void AKizokFieldPlayerManager::SetCameraArmRotationSpeed(FRotator rot, float Speed) {
}

void AKizokFieldPlayerManager::SetCameraArmRotation(FRotator rot, float Time) {
}

void AKizokFieldPlayerManager::Restriction(bool flag, ERestrictionType Type) {
}

void AKizokFieldPlayerManager::ResetFieldMotionBlur() {
}

void AKizokFieldPlayerManager::RequestDamage(PLAYER_ID ID, float Damage) {
}

void AKizokFieldPlayerManager::OutChopperVol() {
}

void AKizokFieldPlayerManager::OutChangeChopperVol() {
}

void AKizokFieldPlayerManager::OnFastTravel(FKizokTravelData travelData) {
}

void AKizokFieldPlayerManager::OnAnyKeyRep() {
}

void AKizokFieldPlayerManager::OnAnyKeyPre() {
}

bool AKizokFieldPlayerManager::IsRestriction(ERestrictionType Type) const {
    return false;
}

bool AKizokFieldPlayerManager::IsPlayerAnyClimbing() {
    return false;
}

bool AKizokFieldPlayerManager::IsPlayable() {
    return false;
}

bool AKizokFieldPlayerManager::IsNowCharaChange() {
    return false;
}

bool AKizokFieldPlayerManager::IsInChopperVol() const {
    return false;
}

bool AKizokFieldPlayerManager::IsInChangeChopperVol() const {
    return false;
}

bool AKizokFieldPlayerManager::IsCurrentPlayerLadder() {
    return false;
}

bool AKizokFieldPlayerManager::IsControlPlayer(PLAYER_ID Type) const {
    return false;
}

void AKizokFieldPlayerManager::InChopperVol() {
}

void AKizokFieldPlayerManager::InChangeChopperVol() {
}

float AKizokFieldPlayerManager::GetNoControlTime() const {
    return 0.0f;
}

APawn* AKizokFieldPlayerManager::GetCurrentPlayer() {
    return NULL;
}

PLAYER_ID AKizokFieldPlayerManager::GetControlPlayerType() const {
    return PLAYER_ID::PLAYER_ID_LUF;
}

bool AKizokFieldPlayerManager::ChangeControlPlayer(PLAYER_ID Type, FVector Pos, FRotator rot, bool isInterrupt) {
    return false;
}

void AKizokFieldPlayerManager::AllOnRestriction() {
}

void AKizokFieldPlayerManager::AllOffRestriction() {
}

AKizokFieldPlayerManager::AKizokFieldPlayerManager() {
    this->PlayerTexturePreloader = NULL;
    this->FallHeightBase = 500.00f;
    this->FallFixedRecoveryTime = 0.00f;
    this->AddFallRecoveryTime = 0.03f;
    this->NotFallHeight = 30.00f;
    this->IconViewDistDest = 700.00f;
    this->IconViewDistItem = 700.00f;
    this->IconViewDistEnemy = 700.00f;
    this->IconViewDistLadder = 400.00f;
    this->IconViewDistWallKick = 600.00f;
    this->IconViewDistWallClimb = 600.00f;
    this->IconViewDistDoor = 1500.00f;
    this->IconViewDistCamp = 1500.00f;
    this->IconViewDistNormalNPC = 600.00f;
    this->IconViewDistShopNPC = 500.00f;
    this->IconViewDistIronDoor = 1500.00f;
    this->IconViewDistBridgeBuild = 1500.00f;
    this->MouseCameraPitchRate = 1.00f;
    this->MouseCameraYawRate = 1.00f;
    this->MouseCameraPitchMaxTurnSpeed = 3600.00f;
    this->MouseCameraYawMaxTurnSpeed = 3600.00f;
    this->AIClass = NULL;
    this->AIController = NULL;
    this->PlayerController = NULL;
    this->ClimbRailCameraTransitionDist = 300.00f;
    this->bIsDefaultAutoCamera = true;
    this->DefaultResetCameraPitch = -10.00f;
    this->ResetCameraSpeed = 1.00f;
}

