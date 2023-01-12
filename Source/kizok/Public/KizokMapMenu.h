#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EKizokMapMenuState.h"
#include "KizokMainMenuPage.h"
#include "KizokMapMenu.generated.h"

class UKizokUserWidget;
class UKizokButtonWidget;
class UKizokAreaNameLabelWidget;
class UKizokAreaMapWidget;
class UImage;
class UScrollBox;
class UKizokMapIconWidget;
class UKizokRegionMapWidget;
class UKizokTextBlock;
class UMaterialInstance;
class UCanvasPanel;
class UTexture2D;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMapMenu : public UKizokMainMenuPage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapScaleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapScaleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconScaleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconScaleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceAlphaMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceAlphaMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoMoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FastTravelCueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokMapIconWidget> IconWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonWidget> IconDescWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath TraceIconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonWidget> FastTravelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FastTravelTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonWidget> AreaWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ToRegionMapTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UKizokRegionMapWidget>> RegionMapWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* NoMapMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* IconWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* IconDescWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* TraceTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* FastTravelWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* AreaWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* RegionMapWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokButtonWidget*> CreatedFastTravelWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokButtonWidget*> CreatedAreaWidgetList;
    
public:
    UKizokMapMenu();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupTraceTexture(UKizokUserWidget* InTraceWidget, UTexture2D* InTraceTexture);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetupCurrentIdAsShowId();
    
    UFUNCTION(BlueprintCallable)
    void SetFastTravelPointChecked(int32 InIndex, bool bInChecked);
    
    UFUNCTION(BlueprintCallable)
    void SetAreaPointChecked(int32 InIndex, bool bInChecked);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectArea();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBootRegionMap();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSameShowAreaIdAndCurrentAreaId() const;
    
    UFUNCTION(BlueprintCallable)
    void InitRegionMap(UCanvasPanel* InCanvasPanel, UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget);
    
    UFUNCTION(BlueprintCallable)
    void InitMap(UKizokAreaMapWidget* InAreaMapWidget, UImage* InImage, UKizokUserWidget* InMarkerWidget, UKizokTextBlock* InNoMapTextBlock, UScrollBox* InScrollBox);
    
    UFUNCTION(BlueprintCallable)
    void InitFastTravel(UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetShowRegionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetShowAreaName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKizokMapMenuState GetMapMenuState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetIconTexture(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetIconName(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKizokMapIconWidget* GetFastTravelPointWidget(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFastTravelPointName(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFastTravelPointChecked(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAreaPointName(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAreaPointChecked(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKizokAreaNameLabelWidget* GetAreaNameLabelWidget(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeShowRoomByFastTravel(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMapMenuState(EKizokMapMenuState InMapMenuState);
    
};

