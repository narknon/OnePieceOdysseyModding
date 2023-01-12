#include "KizokFlagManager.h"

class UKizokFlagDataCommon;
class UKizokNamedFlagData;

void UKizokFlagManager::SetVectorDataByFName(FName Name, FVector Data) {
}

void UKizokFlagManager::SetVectorData(const FString& Name, FVector Data) {
}

void UKizokFlagManager::SetStringDataByFName(FName Name, const FString& Data) {
}

void UKizokFlagManager::SetStringData(const FString& Name, const FString& Data) {
}

void UKizokFlagManager::SetRotatorDataByFName(FName Name, FRotator Data) {
}

void UKizokFlagManager::SetRotatorData(const FString& Name, FRotator Data) {
}

void UKizokFlagManager::SetInt32DataByFName(FName Name, int32 Data) {
}

void UKizokFlagManager::SetInt32Data(const FString& Name, int32 Data) {
}

void UKizokFlagManager::SetFloatDataByFName(FName Name, float Data) {
}

void UKizokFlagManager::SetFloatData(const FString& Name, float Data) {
}

void UKizokFlagManager::SetBoolDataByFName(FName Name, bool Data) {
}

void UKizokFlagManager::SetBoolData(const FString& Name, bool Data) {
}

FVector UKizokFlagManager::GetVectorDataByFName(FName Name) {
    return FVector{};
}

FVector UKizokFlagManager::GetVectorData(const FString& Name) {
    return FVector{};
}

FString UKizokFlagManager::GetStringDataByFName(FName Name) {
    return TEXT("");
}

FString UKizokFlagManager::GetStringData(const FString& Name) {
    return TEXT("");
}

FRotator UKizokFlagManager::GetRotatorDataByFName(FName Name) {
    return FRotator{};
}

FRotator UKizokFlagManager::GetRotatorData(const FString& Name) {
    return FRotator{};
}

UKizokNamedFlagData* UKizokFlagManager::GetPlayNamedFlagData() {
    return NULL;
}

UKizokFlagDataCommon* UKizokFlagManager::GetPlayFlagData() {
    return NULL;
}

int32 UKizokFlagManager::GetInt32DataByFName(FName Name) {
    return 0;
}

int32 UKizokFlagManager::GetInt32Data(const FString& Name) {
    return 0;
}

float UKizokFlagManager::GetFloatDataByFName(FName Name) {
    return 0.0f;
}

float UKizokFlagManager::GetFloatData(const FString& Name) {
    return 0.0f;
}

bool UKizokFlagManager::GetBoolDataByFName(FName Name) {
    return false;
}

bool UKizokFlagManager::GetBoolData(const FString& Name) {
    return false;
}

void UKizokFlagManager::BroadcastFlagChaned(EFlagChangedReason reason) {
}

UKizokFlagManager::UKizokFlagManager() {
    this->m_playNamedFlagData = NULL;
    this->m_playFlag = NULL;
}

