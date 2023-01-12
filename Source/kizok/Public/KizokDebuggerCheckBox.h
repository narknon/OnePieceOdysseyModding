#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/CheckBox.h"
#include "KizokDebuggerCheckBox.generated.h"

class UKizokSubMenuWidget;

UCLASS(Blueprintable)
class KIZOK_API UKizokDebuggerCheckBox : public UCheckBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokSubMenuWidget* m_parentWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_realTimeUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timePast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSkipNextChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CheckBoxOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CheckBoxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_subMenuPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_checkBoxName;
    
    UKizokDebuggerCheckBox();
    UFUNCTION(BlueprintCallable)
    void RequestData();
    
    UFUNCTION(BlueprintCallable)
    void OnMyTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnCheckButtonClicked(bool B);
    
};

