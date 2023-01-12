#pragma once
#include "CoreMinimal.h"
#include "EBtlMenuGruopType.h"
#include "KizokButtonWidget.h"
#include "KizokCmdButtonWidget.generated.h"

class UKizokTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokCmdButtonWidget : public UKizokButtonWidget {
    GENERATED_BODY()
public:
    UKizokCmdButtonWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SetTextInfo(FName TextId, UKizokTextBlock* TextBlock);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextEvent(FName TextId);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimGroupID(uint8 GroupID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimGroupColor(EBtlMenuGruopType GroupType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFocusSate() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void InitOpen();
    
};

