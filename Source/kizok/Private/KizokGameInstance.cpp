#include "KizokGameInstance.h"

UKizokGameInstance::UKizokGameInstance() {
    this->SystemEventListener = NULL;
    this->GlobalData = NULL;
    this->DebugData = NULL;
    this->WidgetManager = NULL;
    this->MapManager = NULL;
    this->ItemManager = NULL;
    this->AccessoryManager = NULL;
    this->ShopStockManager = NULL;
    this->LvsManager = NULL;
    this->DeprecatedGameManager = NULL;
    this->DebugManager = NULL;
    this->SystemDebugManager = NULL;
    this->LookAtObjectCollector = NULL;
    this->RevivalTimerCollector = NULL;
    this->MovieSceneParticleManager = NULL;
    this->FieldEnemyManagerClass = NULL;
    this->FieldEnemyManager = NULL;
    this->SaveData = NULL;
    this->EntryLoader = NULL;
    this->TravelManager = NULL;
    this->SoundManager = NULL;
    this->AchievementManager = NULL;
    this->LocalizationDataTableManager = NULL;
    this->DLCManager = NULL;
    this->KeyMappingManager = NULL;
    this->CeBankPlayTime = NULL;
    this->KPIManager = NULL;
    this->BonusManager = NULL;
    this->TextureStreamingConfiguration = NULL;
    this->LoadingWidget = NULL;
    this->GlobalDataClass = NULL;
    this->DebugDataClass = NULL;
    this->DeprecatedGameManagerClass = NULL;
    this->SaveDataClass = NULL;
    this->bFieldMessagePlay = false;
}

