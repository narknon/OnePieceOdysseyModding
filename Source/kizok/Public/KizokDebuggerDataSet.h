#pragma once
#include "CoreMinimal.h"
#include "EWidgetDebugDataType.h"
#include "EWidgetDebugSpinDataType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "KizokDebuggerDataSet.generated.h"

class UKizokDebuggerResource;
class UKizokDebuggerSpinSet;
class UKizokSubMenuWidget;

UCLASS(Blueprintable)
class KIZOK_API UKizokDebuggerDataSet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetDebugDataType m_dataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_setNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UKizokDebuggerSpinSet*> m_spinSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_numberOfDataBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokSubMenuWidget* m_parentWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetDebugSpinDataType m_spinDataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_realTimeUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timePast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokDebuggerResource* m_resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_subMenuPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_dataSetName;
    
    UKizokDebuggerDataSet();
    UFUNCTION(BlueprintCallable)
    void RequestData();
    
    UFUNCTION(BlueprintCallable)
    void OnMyTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void CreateAll(const FString& Name, UKizokSubMenuWidget* parentWidget, int32 setNumber, EWidgetDebugDataType DataType, FVector2D Offset, float Delta, float minData, float maxData);
    
    UFUNCTION(BlueprintCallable)
    void CallbackChangedInt(int32 N, int32 Data);
    
    UFUNCTION(BlueprintCallable)
    void CallbackChangedFloat(int32 N, float Data, int32 subMenuPlace);
    
};

