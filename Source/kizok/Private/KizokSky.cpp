#include "KizokSky.h"
#include "KizokSkyDummyComponent.h"

class UEnlightenEnvironmentTextureComponent;
class UCurveLinearColor;
class UCurveFloat;
class UDirectionalLightComponent;

void AKizokSky::SetTransitionTargetColorCurveAsset(EKizokColorCurveName Name, UCurveLinearColor* CurveAsset) {
}

void AKizokSky::SetFloatCurveAsset(EKizokFloatCurveName Name, UCurveFloat* CurveAsset) {
}

void AKizokSky::SetDistanceFieldShadowEnableForCS(bool bEnable) {
}

void AKizokSky::SetDistanceFieldShadowDistanceForCS(float Distance) {
}

void AKizokSky::SetColorCurveAsset(EKizokColorCurveName Name, UCurveLinearColor* CurveAsset) {
}

void AKizokSky::RegisterDirectionalLight(UDirectionalLightComponent* DirectionalLight) {
}

void AKizokSky::ProcessEnvironmentTextureMaps() {
}

UCurveLinearColor* AKizokSky::GetTransitionTargetColorCurveAsset(EKizokColorCurveName Name) const {
    return NULL;
}

float AKizokSky::GetRuntimeCurveFloat(const FRuntimeFloatCurve& Curve, float Time) const {
    return 0.0f;
}

UCurveFloat* AKizokSky::GetFloatCurveAsset(EKizokFloatCurveName Name) const {
    return NULL;
}

float AKizokSky::GetFloatCurve(EKizokFloatCurveName Name, float Time) {
    return 0.0f;
}

UCurveLinearColor* AKizokSky::GetColorCurveAsset(EKizokColorCurveName Name) const {
    return NULL;
}

FLinearColor AKizokSky::GetColorCurve(EKizokColorCurveName Name, float Time) {
    return FLinearColor{};
}

float AKizokSky::GetAdjustedTimeOfDay() {
    return 0.0f;
}

void AKizokSky::FindEnvironmentTexturesAndLerpAlpha(float InTimeOfDay, bool& OutIsSuccess, UEnlightenEnvironmentTextureComponent*& OutEnvTexComponentA, UEnlightenEnvironmentTextureComponent*& OutEnvTexComponentB, float& OutLerpAlpha) {
}

void AKizokSky::CopyCurveAssetTransitionTargetToCurrent() {
}

AKizokSky::AKizokSky() {
    this->m_rootComponent = CreateDefaultSubobject<UKizokSkyDummyComponent>(TEXT("Root Component"));
    this->EnvironmentIntensity = 1.00f;
    this->TimeOfDay = 1130.00f;
    this->DayLength = 20.00f;
    this->bAnimateDayCycle = false;
    this->b24hCurves = false;
    this->TransitionRate = 0.00f;
    this->bUseIntensityCurve = false;
    this->bUseColorCurve = false;
}

