#include "KizokFieldEnemySpawner.h"

void AKizokFieldEnemySpawner::StartRespawnTimer(float Timer) {
}

void AKizokFieldEnemySpawner::StartBattle() {
}

void AKizokFieldEnemySpawner::SetPartyLotID(const FName& ID) {
}

void AKizokFieldEnemySpawner::SetEnemyLot(TArray<FFieldEnemyLot> lot) {
}

void AKizokFieldEnemySpawner::SetActive(bool NewIsActive) {
}

bool AKizokFieldEnemySpawner::IsActive() {
    return false;
}

FName AKizokFieldEnemySpawner::GetPartyID(FName LotID) {
    return NAME_None;
}

int32 AKizokFieldEnemySpawner::GetEnemyLotNum() {
    return 0;
}

TArray<FFieldEnemyLot> AKizokFieldEnemySpawner::GetEnemyLot() {
    return TArray<FFieldEnemyLot>();
}

bool AKizokFieldEnemySpawner::ForceSpawn(int32 Index, bool IgnoreDistanceCheck, bool IgnoreViewportCheck) {
    return false;
}


void AKizokFieldEnemySpawner::EndBattle() {
}

bool AKizokFieldEnemySpawner::DestroySpawnedEnemy() {
    return false;
}

AKizokFieldEnemySpawner::AKizokFieldEnemySpawner() {
    this->MaxChaseLevelGap = 10;
    this->IntervalTime = 3;
    this->bActive = false;
    this->bPaused = false;
    this->inhibitRange = 10.00f;
    this->OutputLog = false;
    this->bCheckGround = true;
    this->bEnableURO = true;
}

