#include "KizokDataTable.h"

void UKizokDataTable::UnloadNPCMessageTable() {
}

void UKizokDataTable::UnloadMessageTable() {
}

void UKizokDataTable::LoadNPCMessageTable(FName Name) {
}

void UKizokDataTable::LoadMessageTable(FName InRegionName) {
}

void UKizokDataTable::InitNPCMessageTable() {
}

FString UKizokDataTable::GetNPCMessageTableName() const {
    return TEXT("");
}

FString UKizokDataTable::GetMessageTableName() const {
    return TEXT("");
}

void UKizokDataTable::GetMainStoryTableRow(const FName& RowName, FKizokMainStoryTableRow& MainStoryTableRow, bool& Result) {
}

FKizokGroundLogMovieTableRow UKizokDataTable::GetGroundLogMovieTableRow(const FName& Name) {
    return FKizokGroundLogMovieTableRow{};
}

FKizokCharacterTable UKizokDataTable::GetCharacterTableBP(const int32& ID) const {
    return FKizokCharacterTable{};
}

FKizokTableBattleCharAtk UKizokDataTable::GetBattleCharAtkTableBP(const int32 BattleAtkCharID) const {
    return FKizokTableBattleCharAtk{};
}

FKizokTableBattleCameraAtk UKizokDataTable::GetBattleCameraAtkTableBP(const int32 BattleAtkCameraID) const {
    return FKizokTableBattleCameraAtk{};
}

void UKizokDataTable::AsyncLoadNPCMessageTable(FName Name) {
}

UKizokDataTable::UKizokDataTable() {
    this->FieldEnemyInfo = NULL;
}

