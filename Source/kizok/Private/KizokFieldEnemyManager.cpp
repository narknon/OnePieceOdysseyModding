#include "KizokFieldEnemyManager.h"

class AKizokFieldNPCEnemyCharacter;
class AKizokFieldEnemySpawner;

void UKizokFieldEnemyManager::RestartRespawnTimer(AKizokFieldNPCEnemyCharacter* Enemy) {
}

AKizokFieldEnemySpawner* UKizokFieldEnemyManager::GetFieldEnemySpawner(FName Tag) const {
    return NULL;
}

AKizokFieldNPCEnemyCharacter* UKizokFieldEnemyManager::GetFieldEnemy(FName Tag) const {
    return NULL;
}

UKizokFieldEnemyManager::UKizokFieldEnemyManager() {
    this->MaxActiveSpawnerNum = 10;
}

