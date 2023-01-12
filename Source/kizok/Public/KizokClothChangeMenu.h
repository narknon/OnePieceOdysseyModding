#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PLAYER_ID.h"
#include "EKizokClothMenuState.h"
#include "EKizokClothError.h"
#include "KizokOnChangeClothChangeEventDelegate.h"
#include "KizokUserWidget.h"
#include "KizokClothChangeMenu.generated.h"

class UKizokButtonWidget;
class UImage;
class AKizokCaptureRoom;
class UKizokCostumeSetting;
class UScrollBox;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokClothChangeMenu : public UKizokUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokOnChangeClothChangeEvent OnChangeCloth;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonWidget> ClothChildWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> CharaIconPathList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CostumeDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CharaDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotatingVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreviewTextId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKizokCaptureRoom* CaptureRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokCostumeSetting*> ChangeCostumeComponentList;
    
public:
    UKizokClothChangeMenu();
protected:
    UFUNCTION(BlueprintCallable)
    void TerminateClothChange();
    
    UFUNCTION(BlueprintCallable)
    void SetupCaptureRoom(UImage* InCaptureImage);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetFieldNPCCostumeChangeEnable(bool InIsEnable);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnSetUseCloth(UKizokButtonWidget* InButtonWidget);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTextureStreamingFinishedEvent();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetUseCloth(UKizokButtonWidget* InButtonWidget, const FText& InUseCharacterName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitClothDisplayData(UKizokButtonWidget* InButtonWidget, const FText& InItemName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayModel();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChaptureRoomFinishedEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnActiveCharacterFinishedEvent();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeClothChange(UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    PLAYER_ID GetSupportCharaID(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetSupportCharaIconPath(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPreviewText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKizokClothMenuState GetMenuState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetItemName(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetItemInfo(int32 InIndex) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void FinishedFieldCharacterClothChange();
    
protected:
    UFUNCTION(BlueprintCallable)
    EKizokClothError DecisionSelectCloth();
    
    UFUNCTION(BlueprintCallable)
    void ChangeCloth();
    
private:
    UFUNCTION(BlueprintCallable)
    void CaptureBPLoadFinish();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BackToSelectState();
    
};

