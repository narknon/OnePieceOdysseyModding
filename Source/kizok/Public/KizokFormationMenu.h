#pragma once
#include "CoreMinimal.h"
#include "KizokFormationMenuDispData.h"
#include "KizokUserWidget.h"
#include "KizokFormationMenu.generated.h"

class UKizokButtonWidget;
class UCanvasPanel;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokFormationMenu : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FormationTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FormationStrTable;
    
public:
    UKizokFormationMenu();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectFormation(const UKizokButtonWidget* InButtonWidget);
    
private:
    UFUNCTION(BlueprintCallable)
    UKizokButtonWidget* InitFormationList(UCanvasPanel* InCanvasPanel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFormationPlacementCode(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKizokFormationMenuDispData GetFormationData(int32 InIndex) const;
    
};

