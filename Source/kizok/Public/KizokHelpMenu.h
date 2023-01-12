#pragma once
#include "CoreMinimal.h"
#include "KizokHelpMenuData.h"
#include "KizokUserWidget.h"
#include "KizokHelpMenu.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokHelpMenu : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HelpParamTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HelpStringTitleTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HelpStringTextTableAsset;
    
public:
    UKizokHelpMenu();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateReflectedPageIndex(int32 InPageIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartChangePage(bool bInLeftScroll);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectHelpData(int32 InPageIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayNextPageSE();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReflectedPageIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHelpDataNum() const;
    
    UFUNCTION(BlueprintCallable)
    FKizokHelpMenuData GetHelpData(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPageIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeCurrentPage(int32 InAdd);
    
};

