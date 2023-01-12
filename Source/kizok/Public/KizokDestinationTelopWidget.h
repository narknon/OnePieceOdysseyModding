#pragma once
#include "CoreMinimal.h"
#include "KizokUserWidget.h"
#include "KizokDestinationTelopWidget.generated.h"

class UKizokRichTextBlock;
class UKizokTextBlock;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokDestinationTelopWidget : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MainStoryTargetStringDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MainStoryGuideStringDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTime;
    
public:
    UKizokDestinationTelopWidget();
protected:
    UFUNCTION(BlueprintCallable)
    bool SetMainStoryText(UKizokRichTextBlock* InTargetTextBlock, UKizokTextBlock* InGuideTextBlock);
    
};

