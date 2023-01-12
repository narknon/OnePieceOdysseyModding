#include "KizokDevelopFunctionLibrary.h"

class UObject;
class AActor;

void UKizokDevelopFunctionLibrary::VisibleAllSubLevels(bool InVisible) {
}

void UKizokDevelopFunctionLibrary::UnsetParallelNotationCulture(const UObject* WorldContextObject) {
}

void UKizokDevelopFunctionLibrary::SetVisibleSubLevel(FName subLevelName, bool visible) {
}

void UKizokDevelopFunctionLibrary::SetParallelNotationCulture(const UObject* WorldContextObject, const FString& InCulture) {
}

void UKizokDevelopFunctionLibrary::SetMemoryCheckEnable(const UObject* WorldContextObject, bool InEnable) {
}

void UKizokDevelopFunctionLibrary::SetCulture(const UObject* WorldContextObject, const FString& InCulture) {
}

void UKizokDevelopFunctionLibrary::SetAccessoryRelease(const UObject* WorldContextObject, PLAYER_ID InPlayerId, uint8 InSettingState) {
}

bool UKizokDevelopFunctionLibrary::OutputStringFile(const FString& InFilename, const FString& inString) {
    return false;
}

bool UKizokDevelopFunctionLibrary::IsVisibleSubLevel(FName subLevelName) {
    return false;
}

FText UKizokDevelopFunctionLibrary::GetTextOfTextIdFromAllTextTable(const UObject* WorldContextObject, const FName& InTextId) {
    return FText::GetEmpty();
}

FText UKizokDevelopFunctionLibrary::GetTextOfTextIdAndLanguageFromAllTextTable(const UObject* WorldContextObject, const FName& InTextId, const FString& InLanguage) {
    return FText::GetEmpty();
}

TArray<FName> UKizokDevelopFunctionLibrary::GetSubLevelNameListInPersistentlevel() {
    return TArray<FName>();
}

FText UKizokDevelopFunctionLibrary::GetMoney(const UObject* WorldContextObject) {
    return FText::GetEmpty();
}

FName UKizokDevelopFunctionLibrary::GetLevelNameFromActor(const AActor* InActor) {
    return NAME_None;
}

TArray<AActor*> UKizokDevelopFunctionLibrary::GetAllActorsInLevel(FName InLevelName) {
    return TArray<AActor*>();
}

uint8 UKizokDevelopFunctionLibrary::GetAccessoryRelease(const UObject* WorldContextObject, PLAYER_ID InPlayerId) {
    return 0;
}

void UKizokDevelopFunctionLibrary::AddMoney(const UObject* WorldContextObject, int32 InAddMoney) {
}

UKizokDevelopFunctionLibrary::UKizokDevelopFunctionLibrary() {
}

