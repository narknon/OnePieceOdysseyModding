#include "KizokSaveManager.h"

class UKizokSaveGame;
class UKizokSaveThumbnailData;
class UKizokSaveInfoData;

void UKizokSaveManager::SetVectorFlagByFName(FName Name, FVector Data) {
}

void UKizokSaveManager::SetVectorFlag(const FString& Name, FVector Data) {
}

void UKizokSaveManager::SetStringFlagByFName(FName Name, const FString& Data) {
}

void UKizokSaveManager::SetStringFlag(const FString& Name, const FString& Data) {
}

void UKizokSaveManager::SetRotatorFlagByFName(FName Name, FRotator Data) {
}

void UKizokSaveManager::SetRotatorFlag(const FString& Name, FRotator Data) {
}

void UKizokSaveManager::SetInt32FlagByFName(FName Name, int32 Data) {
}

void UKizokSaveManager::SetInt32Flag(const FString& Name, int32 Data) {
}

void UKizokSaveManager::SetFloatFlagByFName(FName Name, float Data) {
}

void UKizokSaveManager::SetFloatFlag(const FString& Name, float Data) {
}

void UKizokSaveManager::SetBoolFlagByFName(FName Name, bool Data) {
}

void UKizokSaveManager::SetBoolFlag(const FString& Name, bool Data) {
}

bool UKizokSaveManager::SavePlayGame(const FString& Filename, bool infoFlag, bool thumbnailFlag) {
    return false;
}

bool UKizokSaveManager::SaveGame(int32 slot) {
    return false;
}

bool UKizokSaveManager::LoadPlayGameInfo(const FString& Filename, bool infoFlag, bool thumbnailFlag) {
    return false;
}

bool UKizokSaveManager::LoadPlayGame(const FString& Filename, bool infoFlag, bool thumbnailFlag) {
    return false;
}

bool UKizokSaveManager::LoadGame(int32 slot) {
    return false;
}

FVector UKizokSaveManager::GetVectorFlagByFName(FName Name) {
    return FVector{};
}

FVector UKizokSaveManager::GetVectorFlag(const FString& Name) {
    return FVector{};
}

FString UKizokSaveManager::GetStringFlagByFName(FName Name) {
    return TEXT("");
}

FString UKizokSaveManager::GetStringFlag(const FString& Name) {
    return TEXT("");
}

UKizokSaveThumbnailData* UKizokSaveManager::GetSaveThumbnailData() {
    return NULL;
}

UKizokSaveInfoData* UKizokSaveManager::GetSaveInfoData() {
    return NULL;
}

UKizokSaveGame* UKizokSaveManager::GetSaveGame() {
    return NULL;
}

FRotator UKizokSaveManager::GetRotatorFlagByFName(FName Name) {
    return FRotator{};
}

FRotator UKizokSaveManager::GetRotatorFlag(const FString& Name) {
    return FRotator{};
}

int32 UKizokSaveManager::GetInt32FlagByFName(FName Name) {
    return 0;
}

int32 UKizokSaveManager::GetInt32Flag(const FString& Name) {
    return 0;
}

float UKizokSaveManager::GetFloatFlagByFName(FName Name) {
    return 0.0f;
}

float UKizokSaveManager::GetFloatFlag(const FString& Name) {
    return 0.0f;
}

bool UKizokSaveManager::GetBoolFlagByFName(FName Name) {
    return false;
}

bool UKizokSaveManager::GetBoolFlag(const FString& Name) {
    return false;
}

UKizokSaveManager::UKizokSaveManager() {
}

