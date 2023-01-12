#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "EWidgetDebugDataType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "KizokDebuggerStringSet.generated.h"

class UKizokDebuggerResource;
class UTextBlock;
class UKizokDebuggerTextInput;
class UKizokSubMenuWidget;

UCLASS(Blueprintable)
class KIZOK_API UKizokDebuggerStringSet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetDebugDataType m_dataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_setNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_numberOfDataBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokSubMenuWidget* m_parentWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_realTimeUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timePast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokDebuggerResource* m_resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokDebuggerTextInput* m_textInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_textBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_subMenuPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_dataSetName;
    
    UKizokDebuggerStringSet();
    UFUNCTION(BlueprintCallable)
    void RequestData();
    
    UFUNCTION(BlueprintCallable)
    void OnMyTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void CreateAll(const FString& Name, UKizokSubMenuWidget* parentWidget, int32 setNumber, EWidgetDebugDataType DataType, FVector2D Offset);
    
    UFUNCTION(BlueprintCallable)
    void CallbackCommittedText(int32 N, const FText& changedtext, TEnumAsByte<ETextCommit::Type> Method);
    
    UFUNCTION(BlueprintCallable)
    void CallbackChangedText(int32 N, const FText& changedtext);
    
    UFUNCTION(BlueprintCallable)
    void CallbackChangedString(int32 N, const FString& mes);
    
};

