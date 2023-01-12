#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "UObject/NoExportTypes.h"
#include "Components/EditableTextBox.h"
#include "KizokDebuggerTextInput.generated.h"

class UKizokDebuggerMainWidget;
class UKizokDebuggerStringSet;
class UKizokDebuggerSpinSet;

UCLASS(Blueprintable)
class KIZOK_API UKizokDebuggerTextInput : public UEditableTextBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokDebuggerMainWidget* m_parentWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokDebuggerSpinSet* m_parentSpinSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokDebuggerStringSet* m_parentStringSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsParentSpinSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsParentStringSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSkipNextChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TextInputSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TextInputOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_subMenuPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_textInputName;
    
    UKizokDebuggerTextInput();
    UFUNCTION(BlueprintCallable)
    void OnMyCommittedText(const FText& changedtext, TEnumAsByte<ETextCommit::Type> Method);
    
    UFUNCTION(BlueprintCallable)
    void OnMyChangedText(const FText& changedtext);
    
};

