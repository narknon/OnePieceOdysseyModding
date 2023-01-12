#include "KizokFieldNPCEnemyCharacter.h"

void AKizokFieldNPCEnemyCharacter::SetPartyID(const FName& ID) {
}

void AKizokFieldNPCEnemyCharacter::SetBattleMapID(const FName& ID) {
}

bool AKizokFieldNPCEnemyCharacter::IsChasePlayerLvGap() const {
    return false;
}

FName AKizokFieldNPCEnemyCharacter::GetPartyID() const {
    return NAME_None;
}

FName AKizokFieldNPCEnemyCharacter::GetBattleMapID() const {
    return NAME_None;
}

AKizokFieldNPCEnemyCharacter::AKizokFieldNPCEnemyCharacter() {
    this->EnemyAnimClass = NULL;
}

