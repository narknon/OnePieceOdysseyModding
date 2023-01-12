#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "KizokDebugKVS.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokDebugKVS : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UKizokDebugKVS();
    UFUNCTION(BlueprintCallable)
    void SetString(const FString& KeyName, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInt(const FString& KeyName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFloat(const FString& KeyName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBool(const FString& KeyName, bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistStringKey(const FString& KeyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistIntKey(const FString& KeyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistFloatKey(const FString& KeyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistBoolKey(const FString& KeyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetString(const FString& KeyName, bool& bIsSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInt(const FString& KeyName, bool& bIsSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFloat(const FString& KeyName, bool& bIsSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBool(const FString& KeyName, bool& bIsSuccess) const;
    
};

