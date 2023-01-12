#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Components/ComboBoxString.h"
#include "KizokDebuggerComboBoxString.generated.h"

class UKizokSubMenuWidget;

UCLASS(Blueprintable)
class UKizokDebuggerComboBoxString : public UComboBoxString {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokSubMenuWidget* m_pParentWidget;
    
public:
    UKizokDebuggerComboBoxString();
    UFUNCTION(BlueprintCallable)
    void OnSelectedNewElement(const FString& Name, TEnumAsByte<ESelectInfo::Type> Type);
    
};

