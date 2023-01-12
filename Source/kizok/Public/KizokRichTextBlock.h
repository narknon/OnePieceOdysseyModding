#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlock.h"
#include "KizokRichTextBlock.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UKizokRichTextBlock : public URichTextBlock {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAutoScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollStartWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollEndWaitTime;
    
public:
    UKizokRichTextBlock();
    UFUNCTION(BlueprintCallable)
    void SetTextFromTextId(const FName& InTextId, UDataTable* InPriorityTable);
    
    UFUNCTION(BlueprintCallable)
    void ClearTextBlock();
    
};

