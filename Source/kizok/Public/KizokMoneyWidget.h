#pragma once
#include "CoreMinimal.h"
#include "EKizokMoneyWidgetIconType.h"
#include "Blueprint/UserWidget.h"
#include "KizokMoneyWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMoneyWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> IconList;
    
public:
    UKizokMoneyWidget();
    UFUNCTION(BlueprintCallable)
    void ShowPartyMoney();
    
    UFUNCTION(BlueprintCallable)
    void ShowNumber(int32 InNumber);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowIcon(UTexture2D* InTexture);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeIcon(EKizokMoneyWidgetIconType InIconType);
    
};

