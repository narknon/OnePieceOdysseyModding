#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "KizokNamedFlagData.generated.h"

class UKizokFlagNameList;
class UKizokSaveDataBase;

UCLASS(Blueprintable)
class KIZOK_API UKizokNamedFlagData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> m_boolData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_int32Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_floatData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> m_vectorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRotator> m_rotatorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_stringData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokFlagNameList* m_boolList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokFlagNameList* m_int32List;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokFlagNameList* m_floatList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokFlagNameList* m_vectorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokFlagNameList* m_rotatorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokFlagNameList* m_stringList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_saveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokSaveDataBase* m_saveDataBase;
    
public:
    UKizokNamedFlagData();
    UFUNCTION(BlueprintCallable)
    void SetVectorDataByFName(FName Name, FVector Data);
    
    UFUNCTION(BlueprintCallable)
    void SetVectorData(const FString& Name, FVector Data);
    
    UFUNCTION(BlueprintCallable)
    void SetStringDataByFName(FName Name, const FString& Data);
    
    UFUNCTION(BlueprintCallable)
    void SetStringData(const FString& Name, const FString& Data);
    
    UFUNCTION(BlueprintCallable)
    void SetRotatorDataByFName(FName Name, FRotator Data);
    
    UFUNCTION(BlueprintCallable)
    void SetRotatorData(const FString& Name, FRotator Data);
    
    UFUNCTION(BlueprintCallable)
    void SetInt32DataByFName(FName Name, int32 Data);
    
    UFUNCTION(BlueprintCallable)
    void SetInt32Data(const FString& Name, int32 Data);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatDataByFName(FName Name, float Data);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatData(const FString& Name, float Data);
    
    UFUNCTION(BlueprintCallable)
    void SetBoolDataByFName(FName Name, bool Data);
    
    UFUNCTION(BlueprintCallable)
    void SetBoolData(const FString& Name, bool Data);
    
    UFUNCTION(BlueprintCallable)
    FVector GetVectorDataByFName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    FVector GetVectorData(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    FString GetStringDataByFName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    FString GetStringData(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    FRotator GetRotatorDataByFName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    FRotator GetRotatorData(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    int32 GetInt32DataByFName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    int32 GetInt32Data(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    float GetFloatDataByFName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    float GetFloatData(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    bool GetBoolDataByFName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    bool GetBoolData(const FString& Name);
    
};

