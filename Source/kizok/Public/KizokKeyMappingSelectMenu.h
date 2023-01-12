#pragma once
#include "CoreMinimal.h"
#include "KizokSettingMenuTab.h"
#include "KizokKeyMappingSelectMenu.generated.h"

class UKizokKeyMappingMenu;
class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokKeyMappingSelectMenu : public UKizokSettingMenuTab {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokKeyMappingMenu> KeyMappingMenuAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokKeyMappingMenu* KeyMappingMenu;
    
public:
    UKizokKeyMappingSelectMenu();
private:
    UFUNCTION(BlueprintCallable)
    void SetIsReflectFocusTextEnable(bool bInIsReflectFocusTextEnable);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRestartWidgetOperate();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectUnselectableMessage(int32 InDeviceIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenKayMappingMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeConnectDevice(int32 InDeviceIndex, int32 InFocusIndex, bool bDeviceConnect);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReflectFocusTextEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKizokKeyMappingMenu* GetKeyMappingMenu() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetConnectDeviceStatus(int32 InIndex) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void DestroyKeyMappingMenu();
    
    UFUNCTION(BlueprintCallable)
    void CreateAndRegisterKeyMappingMenu(UCanvasPanel* InCanvasPanel);
    
    UFUNCTION(BlueprintCallable)
    void CloseKeyMappingMenu();
    
};

