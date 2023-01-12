#include "KizokBaseCharacter.h"

void AKizokBaseCharacter::SetMoveTarget(FVector Target) {
}

bool AKizokBaseCharacter::RotateYawToTarget(FVector Target, float DeltaSeconds, float rps) {
    return false;
}

void AKizokBaseCharacter::ResetMoveTarget() {
}

bool AKizokBaseCharacter::IsMoveTarget() {
    return false;
}

bool AKizokBaseCharacter::IsMotionPlay() {
    return false;
}

float AKizokBaseCharacter::GetRotateYawToTarget(FVector Target) {
    return 0.0f;
}

float AKizokBaseCharacter::GetMotionTime() {
    return 0.0f;
}

float AKizokBaseCharacter::GetMotionLength() {
    return 0.0f;
}

AKizokBaseCharacter::AKizokBaseCharacter() {
    this->FootprintsControl = NULL;
}

