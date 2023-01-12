#include "KizokMessageBattleTable.h"
#include "KizokSEComponent.h"

class UDataTable;

UDataTable* UKizokMessageBattleTable::GetMessageTable(EKizokMessageBattleTableType InTableType) const {
    return NULL;
}

UKizokMessageBattleTable::UKizokMessageBattleTable() {
    this->MessageTableList[0] = NULL;
    this->MessageTableList[1] = NULL;
    this->MessageTableList[2] = NULL;
    this->MessageTableList[3] = NULL;
    this->MessageTableList[4] = NULL;
    this->MessageTableList[5] = NULL;
    this->SoundComponentList[0] = CreateDefaultSubobject<UKizokSEComponent>(TEXT("ScenarioBattleTalk"));
    this->SoundComponentList[1] = CreateDefaultSubobject<UKizokSEComponent>(TEXT("ScenarioBattleTalk1"));
    this->SoundLoaderList[0] = NULL;
    this->SoundLoaderList[1] = NULL;
}

