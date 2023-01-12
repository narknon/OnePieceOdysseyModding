#include "KizokFieldPlayerBase.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "KizokFieldPlayerFPSTargetPosSetter.h"
#include "KizokSEComponent.h"
#include "KizokTraceRecordComponent.h"
#include "Components/PostProcessComponent.h"

class USceneComponent;
class UPrimitiveComponent;
class AActor;
class UAnimationAsset;

void AKizokFieldPlayerBase::StopReactionAnim() {
}

void AKizokFieldPlayerBase::StopAutoRun() {
}

bool AKizokFieldPlayerBase::StartTalk() {
    return false;
}

bool AKizokFieldPlayerBase::StartIronDoor() {
    return false;
}

void AKizokFieldPlayerBase::StartBPGimmick() {
}

void AKizokFieldPlayerBase::StartBattleShowCapture() {
}

void AKizokFieldPlayerBase::StartBattle() {
}

void AKizokFieldPlayerBase::SetRotation_Autonomy(FRotator rot, float Speed) {
}

void AKizokFieldPlayerBase::SetMovePosition_Autonomy(FVector Pos, EAutonomyMoveMeans means, float Range) {
}

void AKizokFieldPlayerBase::SetEnableViewFPSPoint() {
}

void AKizokFieldPlayerBase::SetDisableViewFPSPoint() {
}

void AKizokFieldPlayerBase::SetAutoCamera(bool flag) {
}

void AKizokFieldPlayerBase::ResetCameraAngle() {
}

void AKizokFieldPlayerBase::RegistReactionAnim(const TArray<UAnimationAsset*>& anims) {
}

void AKizokFieldPlayerBase::PreEndBattle() {
}

void AKizokFieldPlayerBase::PreBattleToField() {
}

void AKizokFieldPlayerBase::OnWeatherEffectAtSaveKeyWithQuat(const FQuat& inQuat, USceneComponent* attachTargetComponent) {
}

void AKizokFieldPlayerBase::OnWeatherEffectAtSaveKey(USceneComponent* attchTargetComponent) {
}

void AKizokFieldPlayerBase::OnWeatherEffect(EKizokEffectWeatherType Type, USceneComponent* attachTargetComponent) {
}

void AKizokFieldPlayerBase::OnSensorTargetInside(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AKizokFieldPlayerBase::OnNPCSpawnerOutside(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AKizokFieldPlayerBase::OnNPCSpawnerInside(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AKizokFieldPlayerBase::OnItemOutside(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AKizokFieldPlayerBase::OnItemInside(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AKizokFieldPlayerBase::OnFPSTargetOutside(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AKizokFieldPlayerBase::OnFPSTargetInside(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AKizokFieldPlayerBase::OnDestructOutside(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AKizokFieldPlayerBase::OnDestructInside(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AKizokFieldPlayerBase::OnDamage(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AKizokFieldPlayerBase::OnCostumeChanged() {
}

void AKizokFieldPlayerBase::OnChangeAction(uint16 NewAction) {
}

void AKizokFieldPlayerBase::OffWeatherEffect(EKizokEffectWeatherType Type) {
}

void AKizokFieldPlayerBase::LandingBeforeBattle() {
}

bool AKizokFieldPlayerBase::IsLandedAction() const {
    return false;
}

bool AKizokFieldPlayerBase::IsLadder() const {
    return false;
}

bool AKizokFieldPlayerBase::IsAutonomy() const {
    return false;
}

bool AKizokFieldPlayerBase::IsAutoCamera() const {
    return false;
}

bool AKizokFieldPlayerBase::IsAtkInfo(USphereComponent* comp) {
    return false;
}

bool AKizokFieldPlayerBase::IsAimingMoveAction() const {
    return false;
}

bool AKizokFieldPlayerBase::IsAimingAction() const {
    return false;
}

bool AKizokFieldPlayerBase::IsAiming() const {
    return false;
}

void AKizokFieldPlayerBase::InteractPreparationWallClimb(bool bToTop, FVector interactPoint, FVector accessPoint) {
}

void AKizokFieldPlayerBase::InteractPreparationLadder(bool bToTop, FVector interactPoint, FVector accessPoint, FVector Top, FVector Bottom) {
}

void AKizokFieldPlayerBase::InteractDisposalWallClimb() {
}

void AKizokFieldPlayerBase::InteractDisposalLadder() {
}

bool AKizokFieldPlayerBase::HideStrawHat(bool bHide) {
    return false;
}

bool AKizokFieldPlayerBase::HideLogPose(bool bHide) {
    return false;
}

void AKizokFieldPlayerBase::Hide(bool flag) {
}

UKizokTraceRecordComponent* AKizokFieldPlayerBase::GetTraceRecordComponent() const {
    return NULL;
}

float AKizokFieldPlayerBase::GetNPCSpawnerSearchDistance() const {
    return 0.0f;
}

void AKizokFieldPlayerBase::ForceEndFPSMode() {
}

void AKizokFieldPlayerBase::EndTalkCamera() {
}

bool AKizokFieldPlayerBase::EndTalk() {
    return false;
}

void AKizokFieldPlayerBase::EndBPGimmick() {
}

void AKizokFieldPlayerBase::EndBattle() {
}

bool AKizokFieldPlayerBase::CanInteractPosition(FVector Pos, float Angle) {
    return false;
}

bool AKizokFieldPlayerBase::CanInteractActor(AActor* pActor, float Angle) {
    return false;
}

void AKizokFieldPlayerBase::CancelSensor() {
}

void AKizokFieldPlayerBase::CancelAutonomy() {
}

bool AKizokFieldPlayerBase::AddItem(FName ItemId, int32 Num) {
    return false;
}

AKizokFieldPlayerBase::AKizokFieldPlayerBase()
{
    this->PostProcess = CreateDefaultSubobject<UPostProcessComponent>(TEXT("Post Process"));
    this->BlendSpaceMoveRateCurve = NULL;
    this->m_MaxWalkSpeed = 160.00f;
    this->m_MaxRunSpeed = 720.00f;
    this->m_AutoRunRotSpeed = 10.00f;
    this->BSMoveRateInterpSpeed = 15.00f;
    this->m_MaxJumpSpeed = 800.00f;
    this->m_MaxVerticalJumpSpeed = 200.00f;
    this->JumpControlSpeed = 50.00f;
    this->JumpRotSpeed = 1.00f;
    this->VerticalJumpRotSpeed = 1.00f;
    this->VerticalJumpCurve = NULL;
    this->MoveJumpCurve = NULL;
    this->InVerticalJumpMotion = 0.00f;
    this->OutVerticalJumpMotion = 0.00f;
    this->InMoveJumpMotion = 0.10f;
    this->OutMoveJumpMotion = 0.00f;
    this->InJumpToVerticalLoopMotion = 0.00f;
    this->OutJumpToVerticalLoopMotion = 0.00f;
    this->InJumpToMoveLoopMotion = 0.00f;
    this->OutJumpToMoveLoopMotion = 0.00f;
    this->InJumpToVerticalLandMotion = 0.10f;
    this->OutJumpToVerticalLandMotion = 0.00f;
    this->InJumpToMoveLandMotion = 0.15f;
    this->OutJumpToMoveLandMotion = 0.00f;
    this->InHeightVerticalLandMotion = 0.25f;
    this->OutHeightVerticalLandMotion = 0.25f;
    this->InHeightMoveLandMotion = 0.10f;
    this->OutHeightMoveLandMotion = 0.25f;
    this->InVerticalLandToWaitMotion = 0.25f;
    this->InMoveLandToWaitMotion = 0.25f;
    this->InVerticalLandToWalkMotion = 0.25f;
    this->InMoveLandToWalkMotion = 0.25f;
    this->InVerticalLandToRunMotion = 0.15f;
    this->InMoveLandToRunMotion = 0.15f;
    this->FallingMoveSpeed = 10.00f;
    this->FallingMoveSeverity = 1.00f;
    this->FallRotSpeed = 1.00f;
    this->InFallLandMotion = 0.25f;
    this->OutFallLandMotion = 0.25f;
    this->InFallLandToWaitMotion = 0.25f;
    this->InFallLandToRunMotion = 0.25f;
    this->InHeightFallLandMotion = 0.25f;
    this->OutHeightFallLandMotion = 0.25f;
    this->InHeightFallLandToWaitMotion = 0.25f;
    this->InHeightFallLandToRunMotion = 0.25f;
    this->m_ClimbMoveRate = 1.00f;
    this->m_ClimbLadderSpeed = 100.00f;
    this->m_ClimbWallDist = 100.00f;
    this->m_ClimbMoveRange = 30.00f;
    this->m_ClimbLookAtTime = 0.50f;
    this->m_pAttackVolume = NULL;
    this->FreeAtkOnCancelTime = 0.00f;
    this->ObtainCancelTime = 0.00f;
    this->GetItemDist = 150.00f;
    this->InteractHeight = 110.00f;
    this->GimmickInteractAngle = 60.00f;
    this->InteractTargetActor = NULL;
    this->fpsCameraBoom = NULL;
    this->m_pFpsCamera = NULL;
    this->FPSStartTime = 0.25f;
    this->FPSEndTime = 0.15f;
    this->GimmickFPSStartTime = 1.00f;
    this->GimmickFPSEndTime = 1.00f;
    this->ClimbFPSLimitYaw = 80.00f;
    this->ClimbFPSMaxPitch = 79.90f;
    this->ClimbFPSMinPitch = -19.90f;
    this->FPSTimeShowDither = 0.50f;
    this->FPSTimeHideDither = 0.30f;
    this->FPSRadiusDitherCollisionSphere = 90.00f;
    this->FpsTargetPosSetter = CreateDefaultSubobject<UKizokFieldPlayerFPSTargetPosSetter>(TEXT("FpsTargetPosSetter"));
    this->m_pFpsTargetWidget = NULL;
    this->m_pFpsTargetInAnim = NULL;
    this->m_pFpsTargetLockAnim = NULL;
    this->DamagedInvincibleTime = 1.00f;
    this->DamagedReactionLagTime = 0.05f;
    this->MaxMoveValueNoDashMode = 85.00f;
    this->MaxMoveValueInDashMode = 100.00f;
    this->PlayEffectDashElapsedTime = 0.30f;
    this->DashEffectScale = 1.00f;
    this->pDashEffectSystem = NULL;
    this->IronDoorNeedSkillID = TEXT("Skl_F002020");
    this->IsBlendSpace = false;
    this->WaitAnimName = TEXT("Wait00");
    this->WalkAnimName = TEXT("Walk00");
    this->RunAnimName = TEXT("Run00");
    this->Jump1InAnimName = TEXT("Jump00_St");
    this->Jump2InAnimName = TEXT("Jump01_St");
    this->Jump1LpAnimName = TEXT("Jump00_Lp");
    this->Jump2LpAnimName = TEXT("Jump01_Lp");
    this->Jump1EdAnimName = TEXT("Jump00_Ed");
    this->Jump2EdAnimName = TEXT("Jump01_Ed");
    this->Jump2EdHightAnimName = TEXT("Jump01_High_Ed");
    this->Falling1LpAnimName = TEXT("Falling00_Lp");
    this->Falling1EdAnimName = TEXT("Falling00_Ed");
    this->Falling2EdAnimName = TEXT("Falling00_High_Ed");
    this->OpenTreasureName = TEXT("Opentreasure00");
    this->OpenDoorName = TEXT("Opendoor00");
    this->WallKickName = TEXT("Wallkickup00");
    this->WallClimbAnimSt_Up = TEXT("Wallclimb00_Up_St");
    this->WallClimbAnimSt_Dw = TEXT("Wallclimb00_Down_St");
    this->WallClimbAnimEd_Up_LR = TEXT("Wallclimb00_Up_LR_Ed");
    this->WallClimbAnimEd_Dw_LR = TEXT("Wallclimb00_Down_LR_Ed");
    this->WallClimbAnimEd_Up_RL = TEXT("Wallclimb00_Up_RL_Ed");
    this->WallClimbAnimEd_Dw_RL = TEXT("Wallclimb00_Down_RL_Ed");
    this->WallClimbAnimWait_Up_LR = TEXT("Wallclimb00_Up_LR_Lp");
    this->WallClimbAnimWait_Dw_LR = TEXT("Wallclimb00_Down_LR_Lp");
    this->WallClimbAnimWait_Up_RL = TEXT("Wallclimb00_Up_RL_Lp");
    this->WallClimbAnimWait_Dw_RL = TEXT("Wallclimb00_Down_RL_Lp");
    this->WallClimbAnimMoveL_LR = TEXT("Wallclimb00_SideL_LR");
    this->WallClimbAnimMoveL_RL = TEXT("Wallclimb00_SideL_RL");
    this->WallClimbAnimMoveR_LR = TEXT("Wallclimb00_SideR_LR");
    this->WallClimbAnimMoveR_RL = TEXT("Wallclimb00_SideR_RL");
    this->WallClimbAnimMoveU_LR = TEXT("Wallclimb00_Up_LR");
    this->WallClimbAnimMoveU_RL = TEXT("Wallclimb00_Up_RL");
    this->WallClimbAnimMoveD_LR = TEXT("Wallclimb00_Down_LR");
    this->WallClimbAnimMoveD_RL = TEXT("Wallclimb00_Down_RL");
    this->LadderStAnimName_Up = TEXT("Ladder00_Up_St");
    this->LadderStAnimName_Dw = TEXT("Ladder00_Down_St");
    this->LadderEdAnimName_Up_LR = TEXT("Ladder00_Up_LR_Ed");
    this->LadderEdAnimName_Dw_LR = TEXT("Ladder00_Down_LR_Ed");
    this->LadderEdAnimName_Up_RL = TEXT("Ladder00_Up_RL_Ed");
    this->LadderEdAnimName_Dw_RL = TEXT("Ladder00_Down_RL_Ed");
    this->LadderWaitAnimName_Up_LR = TEXT("Ladder00_Up_LR_Lp");
    this->LadderWaitAnimName_Dw_LR = TEXT("Ladder00_Down_LR_Lp");
    this->LadderWaitAnimName_Up_RL = TEXT("Ladder00_Up_RL_Lp");
    this->LadderWaitAnimName_Dw_RL = TEXT("Ladder00_Down_RL_Lp");
    this->LadderMoveUAnimName_LR = TEXT("Ladder00_Up_LR");
    this->LadderMoveUAnimName_RL = TEXT("Ladder00_Up_RL");
    this->LadderMoveDAnimName_LR = TEXT("Ladder00_Down_LR");
    this->LadderMoveDAnimName_RL = TEXT("Ladder00_Down_RL");
    this->DamageAnimName = TEXT("Bt_Dam00");
    this->StopAnimName = TEXT("Stop00");
    this->ObtainAnimName = TEXT("Obtain");
    this->m_TPSCameraY = 1.00f;
    this->m_TPSCameraStopY = 0.80f;
    this->m_TPSCameraX = 1.00f;
    this->m_TPSCameraStopX = 0.80f;
    this->m_FPSCameraY = 1.00f;
    this->m_FPSCameraX = 1.00f;
    this->MaxCameraPitch = 70.90f;
    this->MinCameraPitch = -45.90f;
    this->AutoCameraLimitDeg = 160.00f;
    this->IsAutoCameraDebug = false;
    this->AutoCameraStartCorrectTime = 30.00f;
    this->AutoCameraCorrectInterpSpeed = 2.50f;
    this->IsAutoCameraYaw = true;
    this->AutoCameraMaxSpeedYaw = 50.00f;
    this->AutoCameraAccelerationYaw = 180.00f;
    this->AutoCameraPlayYaw = 10.00f;
    this->IsAutoCameraPitch = true;
    this->AutoCameraMaxUpSpeedPitch = 50.00f;
    this->AutoCameraUpAccelerationPitch = 30.00f;
    this->AutoCameraMaxDownSpeedPitch = 80.00f;
    this->AutoCameraDownAccelerationPitch = 40.00f;
    this->AutoCameraPitchViewPointDistance = 400.00f;
    this->AutoCameraRayHeight = 400.00f;
    this->AutoCameraRayDistance = 800.00f;
    this->AutoCameraMaxPitch = 70.00f;
    this->AutoCameraMinPitch = -45.00f;
    this->AutoCameraViewPointStopHeight = 10.00f;
    this->AutoCameraViewPointMoveHeight = 0.00f;
    this->AvoidanceAccelerationSpeed = 360.00f;
    this->AvoidanceMaxSpeed = 360.00f;
    this->m_pCamArmCap = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Field Camera Arm Capsule"));
    this->IsCameraArmCollision = true;
    this->IsCameraArmInputCollision = false;
    this->AutoCameraArmCollisionRadius = 60.00f;
    this->AutoCameraArmYawInterpSpeed = 20.00f;
    this->AutoCameraArmPitchInterpSpeed = 20.00f;
    this->MaxCameraArmCollisionYaw = 90.00f;
    this->MaxCameraArmCollisionPitch = 90.00f;
    this->IsDebugCameraArmCollision = false;
    this->TalkCameraDist = 250.00f;
    this->TalkCameraAngle = 80.00f;
    this->TalkCameraStartTime = 0.80f;
    this->TalkCameraEndTime = 0.40f;
    this->TalkCameraElapsedTime = 0.00f;
    this->TalkCameraBeforeLengthMax = 0.00f;
    this->TalkCameraBeforeLengthMin = 0.00f;
    this->TalkCameraStartLengthMax = 0.00f;
    this->TalkCameraStartLengthMin = 0.00f;
    this->bTalkEndCamera = false;
    this->ClimbPrevAnimStartAsset = NULL;
    this->m_EnableFreeAtkDist = 500.00f;
    this->m_FreeAtkLevel = 1;
    this->FPSTargetSearchVolume = CreateDefaultSubobject<USphereComponent>(TEXT("FPSTargetSearchVolume"));
}
