#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "KizokSettingMenuHelpScrollBoxInfo.h"
#include "KizokSettingMenuTab.h"
#include "KizokSettingMenuHelpTab.generated.h"

class UScrollBox;
class UKizokSettingMenuHelpTextBlockWidget;
class UKizokSettingMenuHelpButtonWidget;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokSettingMenuHelpTab : public UKizokSettingMenuTab {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokSettingMenuHelpButtonWidget> ButtonAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokSettingMenuHelpButtonWidget> ButtonAssetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokSettingMenuHelpTextBlockWidget> TextAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokSettingMenuHelpTextBlockWidget> TextAssetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HelpParamTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HelpStringTitleTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokSettingMenuHelpScrollBoxInfo ScrollBoxInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HelpButtonList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HelpList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HelpSettingListButtonGroupIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPermitNotifyIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCachedScrollBoxInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialize;
    
public:
    UKizokSettingMenuHelpTab();
private:
    UFUNCTION(BlueprintCallable)
    void SetPermitNotifyIcon(const bool InPermitNotifyIcon);
    
    UFUNCTION(BlueprintCallable)
    void ResetScrollOffset(const UScrollBox* InScrollBox);
    
    UFUNCTION(BlueprintCallable)
    void RegisterHelpSettingFromOriginScrollBox(const UScrollBox* InScrollBox);
    
    UFUNCTION(BlueprintCallable)
    void OpenPlayMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPermitNotifyIcon() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyPlayMenuCallBack();
    
    UFUNCTION(BlueprintCallable)
    void CacheWidgetInfo(const UScrollBox* InScrollBox);
    
};

