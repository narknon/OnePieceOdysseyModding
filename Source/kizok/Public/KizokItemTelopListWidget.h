#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KizokUserWidget.h"
#include "KizokItemTelopListWidget.generated.h"

class UObject;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokItemTelopListWidget : public UKizokUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FSoftObjectPath> ItemIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AccessoryIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath BerryIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SimultaneousMaximumDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokUserWidget> TelopWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CubeCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 KeyItemCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemGetSECueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CubeGetSECueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyItemGetSECueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConnectionTextId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokUserWidget*> WidgetList;
    
public:
    UKizokItemTelopListWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemTelopData(UKizokUserWidget* InWidget, const FText& InText, const FSoftObjectPath& InIconPath);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWidget();
    
    UFUNCTION(BlueprintCallable)
    void RegisterVerticalBox(UVerticalBox* InVerticalBox);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RegisterItemTelop(const UObject* WorldContextObject, const FName& InItemId, int32 InItemNum);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTelopOut(UKizokUserWidget* InWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwapTelop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitItemTelopList(const TArray<UKizokUserWidget*>& InWidgetList);
    
    UFUNCTION(BlueprintCallable)
    void CloseTelop();
    
};

