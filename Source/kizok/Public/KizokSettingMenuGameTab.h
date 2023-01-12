#pragma once
#include "CoreMinimal.h"
#include "KizokSettingMenuTab.h"
#include "KizokSettingMenuGameTab.generated.h"

class UKizokTitleLicenceMenu;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokSettingMenuGameTab : public UKizokSettingMenuTab {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokTitleLicenceMenu> LicenceMenuAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* LicenceMenuAssetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokTitleLicenceMenu* LicenceMenu;
    
public:
    UKizokSettingMenuGameTab();
private:
    UFUNCTION(BlueprintCallable)
    void RegisterGameSettingFromVerticalBox(UVerticalBox* InVerticalBox);
    
    UFUNCTION(BlueprintCallable)
    void ChangeAgreedCeBankAfter();
    
};

