#include "KizokItemTableManager.h"

bool UKizokItemTableManager::IsPossessTreasRecord(FName recordName) const {
    return false;
}

bool UKizokItemTableManager::IsPossessKiraKiraRecord(FName recordName) const {
    return false;
}

bool UKizokItemTableManager::IsPossessDestRecord(FName recordName) const {
    return false;
}

FKizokTableTreasItem UKizokItemTableManager::GetPossessTreasRecord(FName recordName) {
    return FKizokTableTreasItem{};
}

FKizokTableKiraKiraItem2nd UKizokItemTableManager::GetPossessKiraKiraRecord(FName recordName) {
    return FKizokTableKiraKiraItem2nd{};
}

FKizokTableDestItem UKizokItemTableManager::GetPossessDestRecord(FName recordName) {
    return FKizokTableDestItem{};
}

FString UKizokItemTableManager::GetKiraKiraItemID(FName recordName) const {
    return TEXT("");
}

UKizokItemTableManager::UKizokItemTableManager() {
}

