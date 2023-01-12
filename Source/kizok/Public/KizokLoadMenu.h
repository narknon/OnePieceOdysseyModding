#pragma once
#include "CoreMinimal.h"
#include "KizokSaveMenu.h"
#include "KizokLoadMenu.generated.h"

class UKizokUserWidget;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokLoadMenu : public UKizokSaveMenu {
    GENERATED_BODY()
public:
    UKizokLoadMenu();
protected:
    UFUNCTION(BlueprintCallable)
    void TerminateLoadMenu();
    
    UFUNCTION(BlueprintCallable)
    void SetParentWidget(UKizokUserWidget* InParentWidget);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLoadGameData();
    
protected:
    UFUNCTION(BlueprintCallable)
    void LoadGameData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadErrorPlayGo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadErrorDLC();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadErrorDialog(bool InIsFirstError);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadErrorBroken(uint8 InErrorIndex);
    
    UFUNCTION(BlueprintCallable)
    void InitializeLoadMenu(UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget);
    
private:
    UFUNCTION(BlueprintCallable)
    void ExecCloseWidget();
    
    UFUNCTION(BlueprintCallable)
    void CheckLoadError();
    
    UFUNCTION(BlueprintCallable)
    void CheckBonus(bool bInResult);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeLoadStateMenu();
    
    UFUNCTION(BlueprintCallable)
    void ChangeLoadStateActiveDialog();
    
};

