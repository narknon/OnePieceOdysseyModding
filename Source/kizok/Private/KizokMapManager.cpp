#include "KizokMapManager.h"

void UKizokMapManager::SetTravelLockMode(EKizokTravelLockMode InLockMode) {
}

void UKizokMapManager::SetMapSymbolVisibility(FName InMapSymbolId, bool bInVisibility) {
}

void UKizokMapManager::SetCurrentWeatherId(FName InWeatherId) {
}

void UKizokMapManager::SetCurrentTimeZoneByEnum(EKizokTimeZone InTimeZone) {
}

void UKizokMapManager::SetCurrentTimeZoneByByte(uint8 InTimeZone) {
}

void UKizokMapManager::SetCurrentRoomId(FName InRoomId) {
}

void UKizokMapManager::SetCurrentRegionId(FName InRegionId) {
}

void UKizokMapManager::SetCurrentAreaId(FName InAreaId) {
}

void UKizokMapManager::OpenTravelPoint(FName InTravelId) {
}

bool UKizokMapManager::IsOpenTravelPoint(FName InTravelId) const {
    return false;
}

EKizokTravelLockMode UKizokMapManager::GetTravelLockMode() const {
    return EKizokTravelLockMode::Unlock;
}

FName UKizokMapManager::GetCurrentWeatherId() const {
    return NAME_None;
}

EKizokTimeZone UKizokMapManager::GetCurrentTimeZoneByEnum() const {
    return EKizokTimeZone::Morning;
}

uint8 UKizokMapManager::GetCurrentTimeZoneByByte() const {
    return 0;
}

FName UKizokMapManager::GetCurrentRoomId() const {
    return NAME_None;
}

FName UKizokMapManager::GetCurrentRegionId() const {
    return NAME_None;
}

FName UKizokMapManager::GetCurrentAreaId() const {
    return NAME_None;
}

UKizokMapManager::UKizokMapManager() {
}

