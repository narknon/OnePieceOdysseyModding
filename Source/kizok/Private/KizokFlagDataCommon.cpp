#include "KizokFlagDataCommon.h"

class UKizokDataUInt8Array;

bool UKizokFlagDataCommon::SetVectorDataArray(EFlagTypeName Type, int32 N, const TArray<FVector>& vectorData) {
    return false;
}

bool UKizokFlagDataCommon::SetVectorData(EFlagTypeName Type, int32 N, const FVector& vectorData) {
    return false;
}

bool UKizokFlagDataCommon::SetUStructBinaryDataArray(EFlagTypeName Type, int32 N, const TArray<UKizokDataUInt8Array*>& uint8Array) {
    return false;
}

bool UKizokFlagDataCommon::SetUStructBinaryData(EFlagTypeName Type, int32 N, UKizokDataUInt8Array* uint8Array) {
    return false;
}

bool UKizokFlagDataCommon::SetUInt8DataArray(EFlagTypeName Type, int32 N, const TArray<uint8>& uint8Data) {
    return false;
}

bool UKizokFlagDataCommon::SetUInt8Data(EFlagTypeName Type, int32 N, const uint8& uint8Data) {
    return false;
}

bool UKizokFlagDataCommon::SetStringDataArray(EFlagTypeName Type, int32 N, const TArray<FString>& stringData) {
    return false;
}

bool UKizokFlagDataCommon::SetStringData(EFlagTypeName Type, int32 N, const FString& stringData) {
    return false;
}

bool UKizokFlagDataCommon::SetRotatorDataArray(EFlagTypeName Type, int32 N, const TArray<FRotator>& rotatorData) {
    return false;
}

bool UKizokFlagDataCommon::SetRotatorData(EFlagTypeName Type, int32 N, const FRotator& rotatorData) {
    return false;
}

bool UKizokFlagDataCommon::SetIntDataArray(EFlagTypeName Type, int32 N, const TArray<int32>& int32Data) {
    return false;
}

bool UKizokFlagDataCommon::SetIntData(EFlagTypeName Type, int32 N, const int32& int32Data) {
    return false;
}

bool UKizokFlagDataCommon::SetFloatDataArray(EFlagTypeName Type, int32 N, const TArray<float>& floatData) {
    return false;
}

bool UKizokFlagDataCommon::SetFloatData(EFlagTypeName Type, int32 N, const float& floatData) {
    return false;
}

bool UKizokFlagDataCommon::SetBoolDataArray(EFlagTypeName Type, int32 N, const TArray<bool>& bFlagData) {
    return false;
}

bool UKizokFlagDataCommon::SetBoolData(EFlagTypeName Type, int32 N, const bool& bFlagData) {
    return false;
}

FVector UKizokFlagDataCommon::GetVectorDataOnly(EFlagTypeName Type, int32 N) {
    return FVector{};
}

TArray<FVector> UKizokFlagDataCommon::GetVectorDataArray(EFlagTypeName Type) {
    return TArray<FVector>();
}

bool UKizokFlagDataCommon::GetVectorData(EFlagTypeName Type, int32 N, FVector& vectorData) {
    return false;
}

UKizokDataUInt8Array* UKizokFlagDataCommon::GetUStructBinaryDataOnly(EFlagTypeName Type, int32 N) {
    return NULL;
}

TArray<UKizokDataUInt8Array*> UKizokFlagDataCommon::GetUStructBinaryDataArray(EFlagTypeName Type) {
    return TArray<UKizokDataUInt8Array*>();
}

bool UKizokFlagDataCommon::GetUStructBinaryData(EFlagTypeName Type, int32 N, UKizokDataUInt8Array* uint8Array) {
    return false;
}

int32 UKizokFlagDataCommon::GetUInt8DataOnly(EFlagTypeName Type, int32 N) {
    return 0;
}

TArray<uint8> UKizokFlagDataCommon::GetUInt8DataArray(EFlagTypeName Type) {
    return TArray<uint8>();
}

bool UKizokFlagDataCommon::GetUInt8Data(EFlagTypeName Type, int32 N, uint8& uint8Data) {
    return false;
}

FString UKizokFlagDataCommon::GetStringDataOnly(EFlagTypeName Type, int32 N) {
    return TEXT("");
}

TArray<FString> UKizokFlagDataCommon::GetStringDataArray(EFlagTypeName Type) {
    return TArray<FString>();
}

bool UKizokFlagDataCommon::GetStringData(EFlagTypeName Type, int32 N, FString& stringData) {
    return false;
}

FRotator UKizokFlagDataCommon::GetRotatorDataOnly(EFlagTypeName Type, int32 N) {
    return FRotator{};
}

TArray<FRotator> UKizokFlagDataCommon::GetRotatorDataArray(EFlagTypeName Type) {
    return TArray<FRotator>();
}

bool UKizokFlagDataCommon::GetRotatorData(EFlagTypeName Type, int32 N, FRotator& rotatorData) {
    return false;
}

int32 UKizokFlagDataCommon::GetIntDataOnly(EFlagTypeName Type, int32 N) {
    return 0;
}

TArray<int32> UKizokFlagDataCommon::GetIntDataArray(EFlagTypeName Type) {
    return TArray<int32>();
}

bool UKizokFlagDataCommon::GetIntData(EFlagTypeName Type, int32 N, int32& int32Data) {
    return false;
}

float UKizokFlagDataCommon::GetFloatDataOnly(EFlagTypeName Type, int32 N) {
    return 0.0f;
}

TArray<float> UKizokFlagDataCommon::GetFloatDataArray(EFlagTypeName Type) {
    return TArray<float>();
}

bool UKizokFlagDataCommon::GetFloatData(EFlagTypeName Type, int32 N, float& floatData) {
    return false;
}

bool UKizokFlagDataCommon::GetBoolDataOnly(EFlagTypeName Type, int32 N) {
    return false;
}

TArray<bool> UKizokFlagDataCommon::GetBoolDataArray(EFlagTypeName Type) {
    return TArray<bool>();
}

bool UKizokFlagDataCommon::GetBoolData(EFlagTypeName Type, int32 N, bool& bFlagData) {
    return false;
}

UKizokFlagDataCommon::UKizokFlagDataCommon() {
}

