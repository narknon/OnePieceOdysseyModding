#pragma once
#include "CoreMinimal.h"
#include "EFlagTypeName.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "KizokFlagDataCommon.generated.h"

class UKizokDataUInt8Array;
class UKizokFlagArray;
class UKizokNamedFlagData;
class UKizokSaveDataBase;

UCLASS(Blueprintable)
class KIZOK_API UKizokFlagDataCommon : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFlagTypeName> m_saveTypeList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UKizokFlagArray*> m_flagArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_saveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokSaveDataBase* m_saveDataBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokNamedFlagData* m_namedFlagData;
    
public:
    UKizokFlagDataCommon();
    UFUNCTION(BlueprintCallable)
    bool SetVectorDataArray(EFlagTypeName Type, int32 N, const TArray<FVector>& vectorData);
    
    UFUNCTION(BlueprintCallable)
    bool SetVectorData(EFlagTypeName Type, int32 N, const FVector& vectorData);
    
    UFUNCTION(BlueprintCallable)
    bool SetUStructBinaryDataArray(EFlagTypeName Type, int32 N, const TArray<UKizokDataUInt8Array*>& uint8Array);
    
    UFUNCTION(BlueprintCallable)
    bool SetUStructBinaryData(EFlagTypeName Type, int32 N, UKizokDataUInt8Array* uint8Array);
    
    UFUNCTION(BlueprintCallable)
    bool SetUInt8DataArray(EFlagTypeName Type, int32 N, const TArray<uint8>& uint8Data);
    
    UFUNCTION(BlueprintCallable)
    bool SetUInt8Data(EFlagTypeName Type, int32 N, const uint8& uint8Data);
    
    UFUNCTION(BlueprintCallable)
    bool SetStringDataArray(EFlagTypeName Type, int32 N, const TArray<FString>& stringData);
    
    UFUNCTION(BlueprintCallable)
    bool SetStringData(EFlagTypeName Type, int32 N, const FString& stringData);
    
    UFUNCTION(BlueprintCallable)
    bool SetRotatorDataArray(EFlagTypeName Type, int32 N, const TArray<FRotator>& rotatorData);
    
    UFUNCTION(BlueprintCallable)
    bool SetRotatorData(EFlagTypeName Type, int32 N, const FRotator& rotatorData);
    
    UFUNCTION(BlueprintCallable)
    bool SetIntDataArray(EFlagTypeName Type, int32 N, const TArray<int32>& int32Data);
    
    UFUNCTION(BlueprintCallable)
    bool SetIntData(EFlagTypeName Type, int32 N, const int32& int32Data);
    
    UFUNCTION(BlueprintCallable)
    bool SetFloatDataArray(EFlagTypeName Type, int32 N, const TArray<float>& floatData);
    
    UFUNCTION(BlueprintCallable)
    bool SetFloatData(EFlagTypeName Type, int32 N, const float& floatData);
    
    UFUNCTION(BlueprintCallable)
    bool SetBoolDataArray(EFlagTypeName Type, int32 N, const TArray<bool>& bFlagData);
    
    UFUNCTION(BlueprintCallable)
    bool SetBoolData(EFlagTypeName Type, int32 N, const bool& bFlagData);
    
    UFUNCTION(BlueprintCallable)
    FVector GetVectorDataOnly(EFlagTypeName Type, int32 N);
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetVectorDataArray(EFlagTypeName Type);
    
    UFUNCTION(BlueprintCallable)
    bool GetVectorData(EFlagTypeName Type, int32 N, FVector& vectorData);
    
    UFUNCTION(BlueprintCallable)
    UKizokDataUInt8Array* GetUStructBinaryDataOnly(EFlagTypeName Type, int32 N);
    
    UFUNCTION(BlueprintCallable)
    TArray<UKizokDataUInt8Array*> GetUStructBinaryDataArray(EFlagTypeName Type);
    
    UFUNCTION(BlueprintCallable)
    bool GetUStructBinaryData(EFlagTypeName Type, int32 N, UKizokDataUInt8Array* uint8Array);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUInt8DataOnly(EFlagTypeName Type, int32 N);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> GetUInt8DataArray(EFlagTypeName Type);
    
    UFUNCTION(BlueprintCallable)
    bool GetUInt8Data(EFlagTypeName Type, int32 N, uint8& uint8Data);
    
    UFUNCTION(BlueprintCallable)
    FString GetStringDataOnly(EFlagTypeName Type, int32 N);
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetStringDataArray(EFlagTypeName Type);
    
    UFUNCTION(BlueprintCallable)
    bool GetStringData(EFlagTypeName Type, int32 N, FString& stringData);
    
    UFUNCTION(BlueprintCallable)
    FRotator GetRotatorDataOnly(EFlagTypeName Type, int32 N);
    
    UFUNCTION(BlueprintCallable)
    TArray<FRotator> GetRotatorDataArray(EFlagTypeName Type);
    
    UFUNCTION(BlueprintCallable)
    bool GetRotatorData(EFlagTypeName Type, int32 N, FRotator& rotatorData);
    
    UFUNCTION(BlueprintCallable)
    int32 GetIntDataOnly(EFlagTypeName Type, int32 N);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetIntDataArray(EFlagTypeName Type);
    
    UFUNCTION(BlueprintCallable)
    bool GetIntData(EFlagTypeName Type, int32 N, int32& int32Data);
    
    UFUNCTION(BlueprintCallable)
    float GetFloatDataOnly(EFlagTypeName Type, int32 N);
    
    UFUNCTION(BlueprintCallable)
    TArray<float> GetFloatDataArray(EFlagTypeName Type);
    
    UFUNCTION(BlueprintCallable)
    bool GetFloatData(EFlagTypeName Type, int32 N, float& floatData);
    
    UFUNCTION(BlueprintCallable)
    bool GetBoolDataOnly(EFlagTypeName Type, int32 N);
    
    UFUNCTION(BlueprintCallable)
    TArray<bool> GetBoolDataArray(EFlagTypeName Type);
    
    UFUNCTION(BlueprintCallable)
    bool GetBoolData(EFlagTypeName Type, int32 N, bool& bFlagData);
    
};

