#include "KizokNewBattleMode.h"

void AKizokNewBattleMode::OnStartConversationWidget(FName PCID, float Time) {
}

void AKizokNewBattleMode::OnSkipMsgConversionWidget(FName PCID) {
}

void AKizokNewBattleMode::OnFinishConversationWidget() {
}

void AKizokNewBattleMode::OnFadeComplete() {
}

void AKizokNewBattleMode::OnActorDynamicsReset() {
}

void AKizokNewBattleMode::OnActorDitherReset() {
}

bool AKizokNewBattleMode::IsEnableShowBattleAIDesc() {
    return false;
}

TMap<FName, int32> AKizokNewBattleMode::GetDefeatedEnemies() {
    return TMap<FName, int32>();
}


void AKizokNewBattleMode::ClearDefeatedEnemies() {
}

void AKizokNewBattleMode::ChangeEncountFlagType(EBtlMenuEncountType Type) {
}

AKizokNewBattleMode::AKizokNewBattleMode() {
    this->BlowMu = 14.00f;
    this->BlowFuncType = eBLOW_FUNCTIONTYPE::TYPE1;
    this->HeightLimitOfTargetCameraMode = 2000.00f;
    this->TrickBallEffectScale4NormalCircle = 1.00f;
    this->TrickBallEffectScale4LargeCircle = 2.00f;
    this->GrassDitherDistance = 1.50f;
    this->SkipBattleDefault = false;
    this->EnablePostFadeIn = true;
    this->HitMarkAnimWaitTime = 0.25f;
    this->TurnStartAnimTelopWaitTime = 0.25f;
    this->FreeCursorInputRange = 90.00f;
    this->FieldIconSafeAreaPercentWidth = 80;
    this->FieldIconSafeAreaPercentHeight = 70;
    this->BtlTextVisibleTime = 0.50f;
    this->BtlTextDataTable = NULL;
    this->BtlTextL10NDataTable = NULL;
    this->StatusEffectIconTable = NULL;
    this->StatusEffectIconL10NTable = NULL;
    this->bValidCharaNameTextColor = true;
    this->ResultExpAnimWaitTime = 0.00f;
    this->ResultMoneyAnimWaitTime = 0.30f;
    this->ResultItemAnimWaitTime = 0.30f;
    this->ResultNextItemAnimStartTime = 1.00f;
    this->CriticalSlowCurve = NULL;
    this->FovInBattle = 60.00f;
    this->SummonCameraTime = 0.60f;
    this->IgnorePostCameraTime = 0.80f;
    this->DesiredFFMultipler = 2.00f;
    this->FallenHeight = 434.00f;
    this->FallenGA = -2000.00f;
    this->bShowDamageDesc = false;
    this->bShowReactionDesc = false;
    this->bShowPostCameraDesc = false;
    this->bShowBattleAIDesc = false;
    this->bShowImpactPointWhenBlocked = false;
    this->bShowInvokedRuleDesc = false;
    this->bShowBufferedRuleDetailDesc = false;
    this->bShowSoundEffectDesc = false;
    this->bShowDropLotteryDesc = false;
    this->bMonitorMotionAndLvSeqFrame = false;
    this->bDontWaitToGetUp = true;
    this->bFreezeFrame = false;
    this->bCameraRoundCheckReq = false;
    this->bForceDynResIgnore = false;
    this->bShowGeneralLogs = false;
    this->bShowLvSeqTransform = false;
    this->bUsePauseResumeInStAI = true;
    this->bActivateSituationAIInitialize = true;
    this->BattlePlacementCode = 0;
    this->craneBP = NULL;
    this->EncoungFrameGrabberBP = NULL;
    this->SituationMgr = NULL;
    this->ResultPosDetBP = NULL;
    this->ResultPosDet = NULL;
    this->CurrentAIType = 0;
    this->MenuManager = NULL;
    this->BattleSeqController = NULL;
    this->EncountMenu = NULL;
    this->GameOverMenu = NULL;
    this->SecondaryCache = NULL;
    this->ParticleCache = NULL;
    this->BtlMsgTblCache = NULL;
    this->BattleUICache = NULL;
    this->EnhanceEff_uid = 9999;
    this->EnhanceEffLp = NULL;
    this->EnhanceEffEd = NULL;
    this->capMat = NULL;
    this->TextureFolder = NULL;
    this->BeforeChangeCharacter = NULL;
}

