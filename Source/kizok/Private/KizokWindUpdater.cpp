#include "KizokWindUpdater.h"

void AKizokWindUpdater::Update(float DeltaTime) {
}

void AKizokWindUpdater::SetWindParamModify(FKizokTableWindParam WindParam) {
}

void AKizokWindUpdater::SetWindParamDefault(FKizokTableWindParam WindParam) {
}

bool AKizokWindUpdater::ReflectionToEn() const {
    return false;
}

bool AKizokWindUpdater::ReflectionToCh() const {
    return false;
}

void AKizokWindUpdater::PostUpdateWindParam() {
}

bool AKizokWindUpdater::JustChangeWindEnSpeed() const {
    return false;
}

bool AKizokWindUpdater::IsChangingWind() const {
    return false;
}

float AKizokWindUpdater::GetWindYawModify() const {
    return 0.0f;
}

float AKizokWindUpdater::GetWindYawDefault() const {
    return 0.0f;
}

float AKizokWindUpdater::GetWindPitchModify() const {
    return 0.0f;
}

float AKizokWindUpdater::GetWindPitchDefault() const {
    return 0.0f;
}

float AKizokWindUpdater::GetWindEnYawCurrent() const {
    return 0.0f;
}

float AKizokWindUpdater::GetWindEnSpeedModify() const {
    return 0.0f;
}

float AKizokWindUpdater::GetWindEnSpeedDefault() const {
    return 0.0f;
}

float AKizokWindUpdater::GetWindEnSpeedCurrent() const {
    return 0.0f;
}

float AKizokWindUpdater::GetWindEnPowerModify() const {
    return 0.0f;
}

float AKizokWindUpdater::GetWindEnPowerDefault() const {
    return 0.0f;
}

float AKizokWindUpdater::GetWindEnPowerCurrent() const {
    return 0.0f;
}

float AKizokWindUpdater::GetWindEnPitchCurrent() const {
    return 0.0f;
}

float AKizokWindUpdater::GetWindChYawCurrent() const {
    return 0.0f;
}

float AKizokWindUpdater::GetWindChPowerModify() const {
    return 0.0f;
}

float AKizokWindUpdater::GetWindChPowerDefault() const {
    return 0.0f;
}

float AKizokWindUpdater::GetWindChPowerCurrent() const {
    return 0.0f;
}

float AKizokWindUpdater::GetWindChPitchCurrent() const {
    return 0.0f;
}

float AKizokWindUpdater::GetWindChangeLerpAlpha() const {
    return 0.0f;
}

TEnumAsByte<ETimelineDirection::Type> AKizokWindUpdater::GetWindChangeDirection() const {
    return ETimelineDirection::Forward;
}

void AKizokWindUpdater::BeginWindChangeForward(float Time, FOnTimelineEvent PostUpdateFunc) {
}

void AKizokWindUpdater::BeginWindChangeFlip() {
}

void AKizokWindUpdater::BeginWindChangeBackward(float Time, FOnTimelineEvent PostUpdateFunc) {
}

AKizokWindUpdater::AKizokWindUpdater() {
}

