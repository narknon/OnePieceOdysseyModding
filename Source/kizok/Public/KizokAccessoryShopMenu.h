#pragma once
#include "CoreMinimal.h"
#include "KizokShopAccessoryDispData.h"
#include "KizokVarietyShopMenu.h"
#include "KizokAccessoryShopMenu.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokAccessoryShopMenu : public UKizokVarietyShopMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> ThumbnailList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> ThumbnailTextureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> NormalIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> AbilityIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* NormalIconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* AbilityIconTexture;
    
public:
    UKizokAccessoryShopMenu();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateCursorVisibility(int32 InButtonIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void Sort();
    
private:
    UFUNCTION(BlueprintCallable)
    void SetPossessAccessoryNum(FName AccessoryId, int32 UniqueId, int32 Num);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEquipRemoveState(bool bInState);
    
    UFUNCTION(BlueprintCallable)
    void SetAccessoryButtonGroupInputEnable(bool bInInputEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetThumbnailTexture(uint8 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetSortStep() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetNormalIconTexture() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEquipRemoveState() const;
    
    UFUNCTION(BlueprintCallable)
    FKizokShopAccessoryDispData GetAccessoryDispData(int32 InIndex);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetAbilityIconTexture() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool CheckSelectEquipAccessory();
    
};

