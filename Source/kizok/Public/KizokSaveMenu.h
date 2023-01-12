#pragma once
#include "CoreMinimal.h"
#include "KizokSaveloadSlotDisplayData.h"
#include "EKizokSaveloadMenuState.h"
#include "EKizokSaveloadDataType.h"
#include "KizokSaveMenuOnBackTitleEventDelegate.h"
#include "KizokUserWidget.h"
#include "KizokSaveMenu.generated.h"

class UKizokButtonWidget;
class UScrollBox;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokSaveMenu : public UKizokUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FKizokSaveloadAsyncFinished);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokSaveMenuOnBackTitleEvent OnBackTitleEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonWidget> SaveSlotWidgetPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AutoSaveTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MainStoryTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EpisodeKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChapterEnd;
    
public:
    UKizokSaveMenu();
protected:
    UFUNCTION(BlueprintCallable)
    void SaveGameData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetSlotData(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSaveFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSaveError(uint8 InUITextIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLastPlaySlot(int32 Index, bool InIsLastPlayData);
    
    UFUNCTION(BlueprintCallable)
    void OnBackToTitle();
    
    UFUNCTION(BlueprintCallable)
    void InitializeSaveMenu(UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKizokSaveloadSlotDisplayData GetSaveloadSlotData(int32 Index) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKizokSaveloadSlotDisplayData GetNowFocusSaveloadSlotData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKizokSaveloadDataType GetNowFocusDataType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKizokSaveloadMenuState GetMenuState() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void ComplateSave();
    
public:
    UFUNCTION(BlueprintCallable)
    void ComplateAsyncFinish();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeStateMenu();
    
    UFUNCTION(BlueprintCallable)
    void ChangeStateActiveDialog();
    
};

