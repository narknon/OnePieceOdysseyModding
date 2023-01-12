#include "KizokDebugKVS.h"

void UKizokDebugKVS::SetString(const FString& KeyName, const FString& Value) {
}

void UKizokDebugKVS::SetInt(const FString& KeyName, int32 Value) {
}

void UKizokDebugKVS::SetFloat(const FString& KeyName, float Value) {
}

void UKizokDebugKVS::SetBool(const FString& KeyName, bool Value) {
}

bool UKizokDebugKVS::IsExistStringKey(const FString& KeyName) const {
    return false;
}

bool UKizokDebugKVS::IsExistIntKey(const FString& KeyName) const {
    return false;
}

bool UKizokDebugKVS::IsExistFloatKey(const FString& KeyName) const {
    return false;
}

bool UKizokDebugKVS::IsExistBoolKey(const FString& KeyName) const {
    return false;
}

FString UKizokDebugKVS::GetString(const FString& KeyName, bool& bIsSuccess) const {
    return TEXT("");
}

int32 UKizokDebugKVS::GetInt(const FString& KeyName, bool& bIsSuccess) const {
    return 0;
}

float UKizokDebugKVS::GetFloat(const FString& KeyName, bool& bIsSuccess) const {
    return 0.0f;
}

bool UKizokDebugKVS::GetBool(const FString& KeyName, bool& bIsSuccess) const {
    return false;
}

UKizokDebugKVS::UKizokDebugKVS() {
}

