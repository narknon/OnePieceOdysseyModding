#include "KizokFieldNPCCharacter.h"
#include "KizokPhysMtrlBaseComponent.h"
#include "KizokSoundComponent.h"

class UBlendSpace1D;
class UAnimationAsset;
class UAnimSequence;

void AKizokFieldNPCCharacter::UnregisterInteract() {
}

void AKizokFieldNPCCharacter::UninitializeAnimation() {
}

void AKizokFieldNPCCharacter::TrySetUpUpdateRateOptimization(bool bIsWalk) {
}

void AKizokFieldNPCCharacter::StopAnimation(int32 slot) {
}

void AKizokFieldNPCCharacter::SetVisibilityAndActivity(bool visible, bool Active) {
}

void AKizokFieldNPCCharacter::SetUpperFacialID(const FName& ID) {
}

void AKizokFieldNPCCharacter::SetUpperFacial(const FName& A, const FName& B, float Alpha) {
}

void AKizokFieldNPCCharacter::SetTone(float Alpha) {
}

void AKizokFieldNPCCharacter::SetStartAnimation(UAnimSequence* Anim) {
}

void AKizokFieldNPCCharacter::SetPlayTime(float Frame, int32 slot) {
}

void AKizokFieldNPCCharacter::SetPlayRate(int32 slot, float Rate) {
}

void AKizokFieldNPCCharacter::SetLowerFacialID(const FName& ID) {
}

void AKizokFieldNPCCharacter::SetLowerFacial(const FName& A, const FName& B, float Alpha) {
}

bool AKizokFieldNPCCharacter::SetLookAtTag(const FName& Tag, float Goal, float Time, bool isBody) {
    return false;
}

void AKizokFieldNPCCharacter::SetLookAtPosition(const FVector& Pos) {
}

void AKizokFieldNPCCharacter::SetLookAt(const FVector& Pos, float Goal, float Time, bool isBody) {
}

void AKizokFieldNPCCharacter::SetInteractOnTheWayTalk(bool bEnable) {
}

void AKizokFieldNPCCharacter::SetInteractOffset(FVector Offset) {
}

void AKizokFieldNPCCharacter::SetInteractDistance(float dist) {
}

void AKizokFieldNPCCharacter::SetIconDistance(float dist) {
}

bool AKizokFieldNPCCharacter::SetFitGround() {
    return false;
}

void AKizokFieldNPCCharacter::SetFacialID(const FName& ID) {
}

bool AKizokFieldNPCCharacter::SetEyeLookAtTarget(const FName& Tag) {
    return false;
}

void AKizokFieldNPCCharacter::SetEyeLookAtPosition(const FVector& TargetPosition) {
}

void AKizokFieldNPCCharacter::SetEyelidAlpha(float Alpha) {
}

void AKizokFieldNPCCharacter::SetEyeBlinkInterval(float Min, float Max) {
}

void AKizokFieldNPCCharacter::SetExpressionBlendRate(float Rate, bool bCurve1, bool bCurve2, bool bCurve3, bool bCurve4, bool bCurve5, bool bCurve6, bool bCurve7, bool bCurve8, bool bCurve9, bool bCurve10) {
}

void AKizokFieldNPCCharacter::SetEnableSecondaryAnimInitMultiframe() {
}

void AKizokFieldNPCCharacter::SetEmotion(float Alpha) {
}

void AKizokFieldNPCCharacter::SetDynamicsSimulationExecuteCount(int32 ExecuteCount) {
}

void AKizokFieldNPCCharacter::SetDynamicsBlendRate(float Rate, bool bCurve1, bool bCurve2, bool bCurve3, bool bCurve4, bool bCurve5, bool bCurve6, bool bCurve7, bool bCurve8, bool bCurve9, bool bCurve10) {
}

void AKizokFieldNPCCharacter::SetDitherFade(float Goal, float Time) {
}

void AKizokFieldNPCCharacter::SetBSPlayRate(float Rate) {
}

void AKizokFieldNPCCharacter::SetBlendUpperFacial(const FName& A, const FName& B, float AWeight, float BWeight) {
}

void AKizokFieldNPCCharacter::SetBlendSpaceAlpha(float Goal, float Time) {
}

void AKizokFieldNPCCharacter::SetBlendSpace(UBlendSpace1D* bs) {
}

void AKizokFieldNPCCharacter::SetBlendRatio(int32 slot, float Ratio) {
}

void AKizokFieldNPCCharacter::SetBlendLowerFacial(const FName& A, const FName& B, float AWeight, float BWeight) {
}

bool AKizokFieldNPCCharacter::SetBlendAnimation(const FName& Name, int32 slot, bool IsLoop, float BlendInTime, float BlendOutTime, float InPlayRate) {
    return false;
}

void AKizokFieldNPCCharacter::ResumeAnimation(int32 slot) {
}

void AKizokFieldNPCCharacter::ResetLookAt(float Time) {
}

void AKizokFieldNPCCharacter::ResetFacial() {
}

void AKizokFieldNPCCharacter::ResetEyeLookAt() {
}

void AKizokFieldNPCCharacter::ResetEyeBlinkInterval() {
}

void AKizokFieldNPCCharacter::ResetExpressionBlendRate() {
}

void AKizokFieldNPCCharacter::ResetDynamicsBlendRate() {
}

void AKizokFieldNPCCharacter::ResetDynamics(ETeleportType Type) {
}

void AKizokFieldNPCCharacter::ResetBlendRatio() {
}

void AKizokFieldNPCCharacter::RequestResetDynamicsForNPCSpanwer() {
}

void AKizokFieldNPCCharacter::ReInitializeAnimation() {
}

void AKizokFieldNPCCharacter::RegisterInteract() {
}

void AKizokFieldNPCCharacter::ReflectIKFlag() {
}

void AKizokFieldNPCCharacter::PlayLipSync(float Time) {
}

void AKizokFieldNPCCharacter::PlayBlendSpace(float Time) {
}

void AKizokFieldNPCCharacter::PlayAnimMontageSection(const FName& Section, float BlendInTime, float BlendOutTime, float PlayRate, float Position, bool IsDynamicsReset) {
}

bool AKizokFieldNPCCharacter::PlayAnimationAsset(UAnimationAsset* Asset, int32 slot, bool IsLoop, float BlendInTime, float BlendOutTime, float InPlayRate) {
    return false;
}

bool AKizokFieldNPCCharacter::PlayAnimation(const FName& Name, int32 slot, bool IsLoop, float BlendInTime, float BlendOutTime, float InPlayRate) {
    return false;
}

void AKizokFieldNPCCharacter::PauseAnimation(int32 slot) {
}

void AKizokFieldNPCCharacter::OnPlayerChanged(PLAYER_ID ID) {
}

bool AKizokFieldNPCCharacter::IsInteractRegistered() const {
    return false;
}

bool AKizokFieldNPCCharacter::IsAnimEnd(int32 slot) {
    return false;
}

void AKizokFieldNPCCharacter::HideStrawHat(bool bHide) {
}

void AKizokFieldNPCCharacter::HideLogPose(bool bHide) {
}

void AKizokFieldNPCCharacter::HideGlassBead(bool bHide) {
}

bool AKizokFieldNPCCharacter::HaveDestroyRequest() {
    return false;
}

UAnimSequence* AKizokFieldNPCCharacter::GetStartAnimation() const {
    return NULL;
}

float AKizokFieldNPCCharacter::GetPlayRate(int32 slot) {
    return 0.0f;
}

float AKizokFieldNPCCharacter::GetMoveSpeedRate() {
    return 0.0f;
}

FVector AKizokFieldNPCCharacter::GetInteractPoint() const {
    return FVector{};
}

float AKizokFieldNPCCharacter::GetInteractDistance() const {
    return 0.0f;
}

float AKizokFieldNPCCharacter::GetBSPlayRate() {
    return 0.0f;
}

UBlendSpace1D* AKizokFieldNPCCharacter::GetBlendSpace() {
    return NULL;
}

TArray<FFieldNPCWeaponParam> AKizokFieldNPCCharacter::GetAttachWeapons() {
    return TArray<FFieldNPCWeaponParam>();
}

FQuat AKizokFieldNPCCharacter::GetAnimationRotValue() {
    return FQuat{};
}

FVector4 AKizokFieldNPCCharacter::GetAnimationMoveValue() {
    return FVector4{};
}

float AKizokFieldNPCCharacter::GetAnimationCurrentTime(int32 slot) {
    return 0.0f;
}

UAnimationAsset* AKizokFieldNPCCharacter::GetAnimAsset(const FName& Name) {
    return NULL;
}

void AKizokFieldNPCCharacter::ForceDitherFade(float Value) {
}

void AKizokFieldNPCCharacter::EnableInteract() {
}

void AKizokFieldNPCCharacter::EnableExpression() {
}

void AKizokFieldNPCCharacter::EnableDynamics() {
}

void AKizokFieldNPCCharacter::DisableInteract() {
}

void AKizokFieldNPCCharacter::DisableExpression() {
}

void AKizokFieldNPCCharacter::DisableDynamics() {
}

void AKizokFieldNPCCharacter::DestroyRequest(bool IsFade) {
}

void AKizokFieldNPCCharacter::CompletedSpawn() {
}

void AKizokFieldNPCCharacter::ApplyLODBounds() {
}

AKizokFieldNPCCharacter::AKizokFieldNPCCharacter() {
    this->StartAnimation = NULL;
    this->SectionMontage = NULL;
    this->m_pSoundComponent = CreateDefaultSubobject<UKizokSoundComponent>(TEXT("SoundComponent"));
    this->m_pPhysicalMaterialComponent = CreateDefaultSubobject<UKizokPhysMtrlBaseComponent>(TEXT("PhysicalMaterialComponent"));
    this->BlendSpace = NULL;
    this->BlendSpaceMoveRateCurve = NULL;
    this->bSetUROEnableOnBeginPlay = false;
    this->InteractDistance = 200.00f;
    this->IconDistance = 4000.00f;
    this->bInteractPossibleOntheWayTalk = true;
    this->bPlayerInIconRange = false;
    this->bIKEnable = true;
    this->bCutSceneCharacter = false;
    this->bPorhibitDither = true;
}

