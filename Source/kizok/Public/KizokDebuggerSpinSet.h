#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "EWidgetDebugSpinDataType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "KizokDebuggerSpinSet.generated.h"

class UKizokDebuggerResource;
class UTextBlock;
class UKizokDebuggerDataSet;
class UKizokDebuggerTextInput;
class UKizokSubMenuWidget;
class UKizokWidgetDebuggerSpinButton;

UCLASS(Blueprintable)
class KIZOK_API UKizokDebuggerSpinSet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokDebuggerResource* m_resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokSubMenuWidget* m_parentWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokDebuggerDataSet* m_parentDataSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetDebugSpinDataType m_spinDataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokWidgetDebuggerSpinButton*> m_spinButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokDebuggerTextInput* m_textInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_textBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLimitFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_minInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_delta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_deltaInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_dataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_spinNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_subMenuPlace;
    
    UKizokDebuggerSpinSet();
    UFUNCTION(BlueprintCallable)
    int32 GetTextIntData();
    
    UFUNCTION(BlueprintCallable)
    float GetTextFloatData();
    
    UFUNCTION(BlueprintCallable)
    void CreateAll(const FString& Name, UKizokSubMenuWidget* parentWidget, UKizokDebuggerDataSet* parentSet, int32 spinNumber, EWidgetDebugSpinDataType spinDataType, FVector2D Offset);
    
    UFUNCTION(BlueprintCallable)
    void CallbackSpinButton(int32 Param);
    
    UFUNCTION(BlueprintCallable)
    void CallbackCommittedText(int32 N, const FText& changedtext, TEnumAsByte<ETextCommit::Type> Method);
    
    UFUNCTION(BlueprintCallable)
    void CallbackChangedText(int32 N, const FText& changedtext);
    
};

