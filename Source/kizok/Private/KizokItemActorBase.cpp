#include "KizokItemActorBase.h"

void AKizokItemActorBase::UnregisterInteract() {
}

void AKizokItemActorBase::StartBattleShowCapture() {
}

void AKizokItemActorBase::RegistRevivalTime(float RevivalTime) {
}

void AKizokItemActorBase::RegisterInteract() {
}

void AKizokItemActorBase::PreBattleToField() {
}

bool AKizokItemActorBase::IsRevival() {
    return false;
}

bool AKizokItemActorBase::IsOverPossessMaxItem() {
    return false;
}

bool AKizokItemActorBase::IsOverPossessMaxAcce() {
    return false;
}

bool AKizokItemActorBase::IsInteractRegistered() const {
    return false;
}

bool AKizokItemActorBase::IsAvailable() {
    return false;
}


void AKizokItemActorBase::EnableInteract() {
}

void AKizokItemActorBase::DisableInteract() {
}

bool AKizokItemActorBase::CheckObtainItem() {
    return false;
}

AKizokItemActorBase::AKizokItemActorBase() {
    this->bPhysics = false;
    this->bAdjustIconObstacleOffset = false;
    this->bPhysicsBefInBattle = false;
}

