#pragma once
#include "CoreMinimal.h"
#include "KizokSettingMenuTab.h"
#include "KizokSettingMenuExitTab.generated.h"

class UKizokDialogMenu;
class UKizokSystemSaveSequence;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokSettingMenuExitTab : public UKizokSettingMenuTab {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokSystemSaveSequence* SystemSaveSequence;
    
public:
    UKizokSettingMenuExitTab();
private:
    UFUNCTION(BlueprintCallable)
    void SelectDialogDecisionCore();
    
    UFUNCTION(BlueprintCallable)
    void SelectDialogDecision();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBackTitle();
    
private:
    UFUNCTION(BlueprintCallable)
    void InitDialog(UKizokDialogMenu* InDialogMenu);
    
};

