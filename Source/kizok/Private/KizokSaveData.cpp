#include "KizokSaveData.h"

void UKizokSaveData::SetVectorFlagByFName(FName Name, FVector Data) {
}

void UKizokSaveData::SetRotatorFlagByFName(FName Name, FRotator Data) {
}

void UKizokSaveData::SetInt32FlagByFName(FName Name, int32 Data) {
}

void UKizokSaveData::SetFloatFlagByFName(FName Name, float Data) {
}

void UKizokSaveData::SetBoolFlagByFName(FName Name, bool Data) {
}

bool UKizokSaveData::SelectGameData(int32 slot) {
    return false;
}

bool UKizokSaveData::SaveSystemDataASync() {
    return false;
}

bool UKizokSaveData::SaveSystemData() {
    return false;
}

bool UKizokSaveData::SaveGameDataASync(int32 slot) {
    return false;
}

bool UKizokSaveData::SaveGameData(int32 slot) {
    return false;
}

bool UKizokSaveData::LoadGameDataASync(int32 slot) {
    return false;
}

bool UKizokSaveData::LoadGameData() {
    return false;
}

bool UKizokSaveData::LoadAutoSaveDataASync() {
    return false;
}

bool UKizokSaveData::LoadAutoSaveData() {
    return false;
}

bool UKizokSaveData::IsValidData(int32 slot) {
    return false;
}

FVector UKizokSaveData::GetVectorFlagByFName(FName Name) {
    return FVector{};
}

FString UKizokSaveData::GetSystemDataName() {
    return TEXT("");
}

FRotator UKizokSaveData::GetRotatorFlagByFName(FName Name) {
    return FRotator{};
}

FString UKizokSaveData::GetLvdString(int32 slot, int32 no) {
    return TEXT("");
}

FString UKizokSaveData::GetLvdData(int32 Type, int32 no) {
    return TEXT("");
}

int32 UKizokSaveData::GetInt32FlagByFName(FName Name) {
    return 0;
}

FString UKizokSaveData::GetGameDataName() {
    return TEXT("");
}

float UKizokSaveData::GetFloatFlagByFName(FName Name) {
    return 0.0f;
}

FString UKizokSaveData::GetErrorString() {
    return TEXT("");
}

bool UKizokSaveData::GetBoolFlagByFName(FName Name) {
    return false;
}

FString UKizokSaveData::GetAutoSaveDataName() {
    return TEXT("");
}

void UKizokSaveData::ClearCurrentSaveData() {
}

bool UKizokSaveData::AutoSaveDataASync() {
    return false;
}

UKizokSaveData::UKizokSaveData() {
    this->bNewGame = false;
    this->SaveObject = NULL;
}

