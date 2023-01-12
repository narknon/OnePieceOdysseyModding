#pragma once
#include "CoreMinimal.h"
#include "EFlagChangedReason.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "KizokFlagManager.generated.h"

class UKizokFlagDataCommon;
class UKizokNamedFlagDataVar;
class UKizokNamedFlagData;

UCLASS(Blueprintable)
class KIZOK_API UKizokFlagManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnFlagChanged, EFlagChangedReason, reason, UKizokNamedFlagData*, namedFlagData, UKizokFlagDataCommon*, flagData);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFlagChanged m_flagChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokNamedFlagDataVar* m_playNamedFlagData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokFlagDataCommon* m_playFlag;
    
    UKizokFlagManager();
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
    UKizokNamedFlagData* GetPlayNamedFlagData();
    
    UFUNCTION(BlueprintCallable)
    UKizokFlagDataCommon* GetPlayFlagData();
    
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
    
    UFUNCTION(BlueprintCallable)
    void BroadcastFlagChaned(EFlagChangedReason reason);
    
};

