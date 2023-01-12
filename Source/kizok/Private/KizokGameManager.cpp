#include "KizokGameManager.h"

class UKizokCharacterStatusManager;
class UKizokDataTable;
class UKizokEventCameraFlagManager;
class UKizokFlagManager;
class AKizokGameMode;
class UKizokGameManager;
class UKizokItemTableManager;
class UKizokItemFlagManager;
class UKizokMapManager;
class UKizokSaveManager;
class UKizokSoundWeather;
class UKizokSoundManager;
class UKizokTimeManager;

void UKizokGameManager::StartDisplaySkillGetMenu() {
}

void UKizokGameManager::SetInteractIconVisible(bool visible) {
}

bool UKizokGameManager::IsExsistSkillGetMenu() {
    return false;
}

UKizokTimeManager* UKizokGameManager::GetTimeManager() {
    return NULL;
}

UKizokSoundWeather* UKizokGameManager::GetSoundWeather() {
    return NULL;
}

UKizokSoundManager* UKizokGameManager::GetSoundManager() {
    return NULL;
}

UKizokSaveManager* UKizokGameManager::GetSaveManager() {
    return NULL;
}

UKizokMapManager* UKizokGameManager::GetMapManager() {
    return NULL;
}

UKizokItemTableManager* UKizokGameManager::GetItemTableManager() {
    return NULL;
}

UKizokItemFlagManager* UKizokGameManager::GetItemFlagMgr() {
    return NULL;
}

bool UKizokGameManager::GetInteractIconVisible() {
    return false;
}

AKizokGameMode* UKizokGameManager::GetGameMode() const {
    return NULL;
}

UKizokGameManager* UKizokGameManager::GetGameManager() {
    return NULL;
}

UKizokFlagManager* UKizokGameManager::GetFlagManager() {
    return NULL;
}

UKizokEventCameraFlagManager* UKizokGameManager::GetEventCameraFlagManager() {
    return NULL;
}

UKizokDataTable* UKizokGameManager::GetDataTable() {
    return NULL;
}

UKizokCharacterStatusManager* UKizokGameManager::GetCharacterStatusManager() {
    return NULL;
}

void UKizokGameManager::CloseDisplaySkillGetMenu() {
}

UKizokGameManager::UKizokGameManager() {
    this->KizokMPC = NULL;
    this->InteractIconMaxSize = 1.00f;
    this->InteractIconMinSize = 0.20f;
    this->InteractIconObstacle = true;
    this->InteractIconVisible = true;
    this->InputLStickDeadZone = 0.25f;
    this->InputRStickDeadZone = 0.25f;
    this->MenuAssertMessageTime = 2.00f;
    this->InputPossibleDegree = 0.85f;
    this->InputNeutralDegree = 0.10f;
    this->InputVerticalRange = 30;
    this->InputHorizontalRange = 30;
    this->IsVerticalKeyPriority = true;
    this->RepeatStartTime = 1.00f;
    this->RepeatIntervalTime = 0.10f;
    this->Threshold = 80.00f;
    this->playerCharacter = NULL;
    this->CharacterManager = NULL;
    this->DataTable = NULL;
    this->CharacterStatusManager = NULL;
    this->SaveManager = NULL;
    this->FlagManager = NULL;
    this->TimeManager = NULL;
    this->ItemTableManager = NULL;
    this->ItemFlagManager = NULL;
    this->EventCameraFlagManager = NULL;
    this->IsInit = false;
}

