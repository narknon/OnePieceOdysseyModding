#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokItemFlagManager.generated.h"

UCLASS(Blueprintable)
class UKizokItemFlagManager : public UObject {
    GENERATED_BODY()
public:
    UKizokItemFlagManager();
    UFUNCTION(BlueprintCallable)
    void SetItemGet(const FString& Name, bool flag);
    
    UFUNCTION(BlueprintCallable)
    void RegistName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    bool IsItemGet(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    bool IsItem(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void DeleteName(const FString& Name);
    
};

