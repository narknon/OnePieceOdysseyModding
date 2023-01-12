#include "KizokBlendAnimInstance.h"

class UAnimSequenceBase;
class UBlendSpace1D;
class UAnimMontage;
class UAnimSequence;

void UKizokBlendAnimInstance::StartLipSync(float Time) {
}

void UKizokBlendAnimInstance::OnKizokMontageStarted(UAnimMontage* Montage) {
}

bool UKizokBlendAnimInstance::IsValidBlendSpace(UBlendSpace1D* BlendSpace) {
    return false;
}

UAnimSequence* UKizokBlendAnimInstance::GetStartAnimation() {
    return NULL;
}

FVector UKizokBlendAnimInstance::GetRightFootIKEffectorOffset() const {
    return FVector{};
}

float UKizokBlendAnimInstance::GetMoveSpeedRate() {
    return 0.0f;
}

float UKizokBlendAnimInstance::GetLookAtAlpha(float InLimit, float InHighPriorityLimit, float InDefaultAlpha) const {
    return 0.0f;
}

FVector UKizokBlendAnimInstance::GetLeftFootIKEffectorOffset() const {
    return FVector{};
}

UBlendSpace1D* UKizokBlendAnimInstance::GetBlendSpace() {
    return NULL;
}

UAnimSequenceBase* UKizokBlendAnimInstance::GetActiveMontageAnimation() const {
    return NULL;
}

UKizokBlendAnimInstance::UKizokBlendAnimInstance() {
    this->m_BlendRatio1 = 0.00f;
    this->m_BlendRatio2 = 0.00f;
    this->m_BlendRatio3 = 0.00f;
    this->m_BlendRatio4 = 0.00f;
    this->m_BlendRatio5 = 0.00f;
    this->m_BlendRatio6 = 0.00f;
    this->AdditiveAlpha1 = 1.00f;
    this->AdditiveAlpha2 = 1.00f;
    this->AdditiveAlpha3 = 1.00f;
    this->LookAtL = 0.00f;
    this->LookAtR = 0.00f;
    this->LookAtU = 0.00f;
    this->LookAtD = 0.00f;
    this->LookAtAlphaForHead = 0.00f;
    this->IsLookAtNeck = true;
    this->LookAtAlphaForNeck = 0.00f;
    this->LookAtAlphaForShoulder = 0.00f;
    this->IsLookAtBody = false;
    this->LookAtAlphaForWaist = 0.00f;
    this->LookAtBoneName = TEXT("BN_Head");
    this->LookAtNeckPercent = 40.00f;
    this->LookAtShoulderPercent = 25.00f;
    this->LookAtWaistPercent = 7.50f;
    this->LookAtUpLimit = 30.00f;
    this->LookAtDownLimit = 20.00f;
    this->LookAtLeftLimit = 45.00f;
    this->LookAtRightLimit = 45.00f;
    this->bEnableEyeLookAt = false;
    this->bSyncEyeLookAt = true;
    this->EyeLookAtAlpha = 0.00f;
    this->LeftEyeBlend = 0.00f;
    this->RightEyeBlend = 0.00f;
    this->LeftEyeHightlightBlend = 0.00f;
    this->RightEyeHightlightBlend = 0.00f;
    this->UpperFace = 0.00f;
    this->LowerFace = 0.00f;
    this->UpperAlpha = 1.00f;
    this->LowerAlpha = 1.00f;
    this->NextUpperAlpha = 1.00f;
    this->NextLowerAlpha = 1.00f;
    this->UpperFrame = 0.00f;
    this->LowerFrame = 0.00f;
    this->bAutoBlink = true;
    this->EyelidAlpha = 0.00f;
    this->LipSyncDefaultTime = 2.50f;
    this->bLipSyncPossible = true;
    this->ToneAlpha = 0.00f;
    this->EmotionAlpha = 0.00f;
    this->SimulationAlpha = 1.00f;
    this->IsIK = false;
    this->LimitUpFoot = 48.00f;
    this->FootInterpSpeed = 15.00f;
    this->FootInterpSpeedMin = 7.00f;
    this->FootInterpSpeedLen = 400.00f;
    this->IKAlpha = 1.00f;
    this->BlendSpacePlayRate = 1.00f;
    this->BlendSpaceAlpha = 1.00f;
    this->CSLoopAnimBlendAlpha = 0.00f;
    this->NodAnim = NULL;
    this->LookAtCurve = NULL;
}

