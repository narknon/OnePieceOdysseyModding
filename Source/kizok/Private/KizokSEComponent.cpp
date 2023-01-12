#include "KizokSEComponent.h"

class USceneComponent;

void UKizokSEComponent::Stop(int32 Handle) {
}

void UKizokSEComponent::Resume(int32 Handle) {
}

int32 UKizokSEComponent::PlaySurroundDirectCue(FName Name, FVector Pos) {
    return 0;
}

int32 UKizokSEComponent::PlaySurround(FName Name, FVector Pos) {
    return 0;
}

int32 UKizokSEComponent::PlaySEAutoCheck(FName Name, bool bAcrossLevel) {
    return 0;
}

int32 UKizokSEComponent::PlayDirectCue(FName Name, bool bAcrossLevel) {
    return 0;
}

int32 UKizokSEComponent::PlayAttachedSEAutoCheck(FName Name, USceneComponent* Parent, FName SocketName) {
    return 0;
}

int32 UKizokSEComponent::Play(FName Name) {
    return 0;
}

void UKizokSEComponent::Pause(int32 Handle) {
}

bool UKizokSEComponent::IsPlaying(int32 Handle) const {
    return false;
}

float UKizokSEComponent::GetPlayPosition(int32 Handle) {
    return 0.0f;
}

float UKizokSEComponent::GetLength(int32 Handle) {
    return 0.0f;
}

bool UKizokSEComponent::Contains(FName CueName) {
    return false;
}

UKizokSEComponent::UKizokSEComponent() {
    this->CueSheet = NULL;
}

