#pragma once
#include "CoreMinimal.h"
#include "KizokUserWidget.h"
#include "KizokBonusDialogMenu.generated.h"

class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokBonusDialogMenu : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BonusListScrollLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* BonusItemWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* BonusBerryWidget;
    
public:
    UKizokBonusDialogMenu();
private:
    UFUNCTION(BlueprintCallable)
    void RegisterBonusListScrollBox(UScrollBox* InScrollBox);
    
    UFUNCTION(BlueprintCallable)
    void ReflectBonusDialogData();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectBonusDescript(const FText& InDesc);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ExistNextData() const;
    
};

