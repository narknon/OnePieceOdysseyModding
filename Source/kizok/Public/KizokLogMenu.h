#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EKizokLogRewardType.h"
#include "KizokLogDispData.h"
#include "KizokMainMenuPage.h"
#include "KizokLogMenu.generated.h"

class UKizokButtonWidget;
class UKizokBonusDialogMenu;
class UScrollBox;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokLogMenu : public UKizokMainMenuPage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UnreleaseTitleTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UnreleaseRewardTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LogInfoScrollLength;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FSoftObjectPath> ItemIconList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AcceIconCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MoneyIconCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonWidget> LogWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LogStrTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* LogWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokButtonWidget*> CreatedLogWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokBonusDialogMenu> BonusDialogPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BonusTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* BonusDialogClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokBonusDialogMenu* BonusDialog;
    
public:
    UKizokLogMenu();
private:
    UFUNCTION(BlueprintCallable)
    void ShowBonusDialog();
    
    UFUNCTION(BlueprintCallable)
    void RegisterLogListFromScrollBox(UScrollBox* InScrollBox);
    
    UFUNCTION(BlueprintCallable)
    void RegisterLogInfoScrollBox(UScrollBox* InScrollBox, EKizokLogRewardType InRewardType);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveRewardCollectively();
    
    UFUNCTION(BlueprintCallable)
    void ReceiveReward();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowLogInfo(const FKizokLogDispData& InLogData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetVisibleScrollIcon(bool bInVisble);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceiveRewardAnime();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishBonusDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetUnreleaseTitleText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetUnreleaseRewardText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKizokLogDispData GetLogData(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void EndGroundLog();
    
    UFUNCTION(BlueprintCallable)
    void CompletedUnloadGroundLog();
    
    UFUNCTION(BlueprintCallable)
    void CompletedLoadGroundLog();
    
    UFUNCTION(BlueprintCallable)
    void CompletedEndFadeGroundLog();
    
    UFUNCTION(BlueprintCallable)
    void CompletedBeginFadeGroundLog();
    
    UFUNCTION(BlueprintCallable)
    void ChangeSelectLog(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void BeginGroundLog();
    
};

