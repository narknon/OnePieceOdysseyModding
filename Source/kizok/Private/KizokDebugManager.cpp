#include "KizokDebugManager.h"

class UKizokFlagDataCommon;
class UKizokNamedFlagData;
class UKizokSaveGame;

void UKizokDebugManager::ToggleCutSceneDebugMenu() {
}

void UKizokDebugManager::Test(int32 Command, int32 Param) {
}

void UKizokDebugManager::StartDebugWidget() {
}

void UKizokDebugManager::PreSaveRoutine(UKizokSaveGame* SaveGame, UKizokNamedFlagData* namedFlagData, UKizokFlagDataCommon* flagData) {
}

void UKizokDebugManager::PreLoadRoutine(UKizokSaveGame* SaveGame, UKizokNamedFlagData* namedFlagData, UKizokFlagDataCommon* flagData) {
}

bool UKizokDebugManager::OnRequestDebugData(FWidgetDebugCommonDataSet& dataset) {
    return false;
}

void UKizokDebugManager::OnFlagChanged(EFlagChangedReason reason, UKizokNamedFlagData* namedFlagData, UKizokFlagDataCommon* flagData) {
}

void UKizokDebugManager::OnClickDebugButton(EWidgetDebugExecType execType, int32 Param) {
}

void UKizokDebugManager::OnChangeDebugData(FWidgetDebugCommonDataSet& dataset) {
}

void UKizokDebugManager::LoadedRoutine(UKizokSaveGame* SaveGame, UKizokNamedFlagData* namedFlagData, UKizokFlagDataCommon* flagData) {
}

void UKizokDebugManager::EndDebugWidget() {
}

UKizokDebugManager::UKizokDebugManager() {
    this->DebugWidget = NULL;
    this->isCameraDebugMode = false;
    this->isToggleDebugCamera = false;
    this->isWarpDebugMode = false;
    this->globalTimeDelation = 0.00f;
    this->displayInputDebug = false;
    this->m_MotionViewer = NULL;
    this->DebugSoundCommand = NULL;
    this->PhysMtrlCommand = NULL;
    this->FieldPlayerStateDebugDraw = NULL;
    this->m_debuggerWidget = NULL;
    this->DebugMessage = NULL;
    this->MotionNameViewer = NULL;
    this->LevelSequenceDebugDraw = NULL;
    this->CSShotSectionJump = NULL;
    this->ProcessTimeDraw = NULL;
    this->AssetMem = NULL;
    this->DebugDrawManager = NULL;
}

