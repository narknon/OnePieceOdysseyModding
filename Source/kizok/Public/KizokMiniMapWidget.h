#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EKizokMiniMapState.h"
#include "KizokUserWidget.h"
#include "KizokMiniMapWidget.generated.h"

class UImage;
class UKizokMapIconWidget;
class UKizokTextBlock;
class UMaterialInstance;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMiniMapWidget : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceAlphaMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceAlphaMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconDisplayRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokMapIconWidget> IconWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath TraceIconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ArrowTargetIconIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* NoMapMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* IconWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* TraceTexture;
    
public:
    UKizokMiniMapWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupTraceTexture(UKizokUserWidget* InTraceWidget, UTexture2D* InTraceTexture);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMiniMapState(EKizokMiniMapState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInstant(bool bInInstant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCommonOpen();
    
private:
    UFUNCTION(BlueprintCallable)
    void InitMiniMap(UImage* InMiniMapImage, UImage* InNorthIconImage, UImage* InVisibleRangeImage, UImage* InArrowImage, UKizokUserWidget* InMarkerWidget, UKizokTextBlock* InNoMapTextBlock);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKizokMiniMapState GetMiniMapState() const;
    
};

