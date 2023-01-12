#pragma once
#include "CoreMinimal.h"
#include "FITTING_TYPE.h"
#include "Components/TextBlock.h"
#include "KizokTextBlock.generated.h"

class UKizokUserWidget;
class UDataTable;

UCLASS(Blueprintable)
class UKizokTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> UITextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFittingValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<FITTING_TYPE> FittingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAutoScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollStartWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollEndWaitTime;
    
public:
    UKizokTextBlock();
    UFUNCTION(BlueprintCallable)
    void ShowUITextFromTextId(const FName& InUITextId);
    
    UFUNCTION(BlueprintCallable)
    void ShowUITextForFixedTimeFromTextId(UKizokUserWidget* InWidget, const FName& InUITextId, const FName& InNextUITextId);
    
    UFUNCTION(BlueprintCallable)
    void ShowUITextForFixedTime(UKizokUserWidget* InWidget, uint8 InUITextIndex, uint8 InNextUITextIndex);
    
    UFUNCTION(BlueprintCallable)
    void ShowUIText(uint8 InUITextIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetTextFromTextId(const FName& InTextId, UDataTable* InPriorityTable);
    
    UFUNCTION(BlueprintCallable)
    bool IsExistUITextID(const FName& InUITextId, uint8& InUITextIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearTextBlock();
    
};

