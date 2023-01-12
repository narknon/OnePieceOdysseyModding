#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PLAYER_ID.h"
#include "KizokEndSystemSaveSequenceDelegateDelegate.h"
#include "KizokUserWidget.h"
#include "KizokMainMenuFrame.generated.h"

class UKizokMainMenuPage;
class UKizokSystemSaveSequence;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMainMenuFrame : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UKizokUserWidget>> MainMenuList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> TabIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokMainMenuPage*> MenuWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokSystemSaveSequence* SystemSaveSequence;
    
public:
    UKizokMainMenuFrame();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopDuckingSE();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartSaveSequence(FKizokEndSystemSaveSequenceDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    void SetTabButtonLock(int32 InMenuIndex, bool IsLock);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCloseByCancelButton(bool bInEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDuckingSE();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OpenMainMenu(int32 InMenuIndex);
    
    UFUNCTION(BlueprintCallable)
    void OpenCharacterDetailMenu(PLAYER_ID InPlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNeedDoSaveSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetTabIcon(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKizokMainMenuPage* GetSelectMenuWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBootMenuIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void EndSaveSequenceForSelectTab();
    
private:
    UFUNCTION(BlueprintCallable)
    void CloseCommonCore();
    
};

